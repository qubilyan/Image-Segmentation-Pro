/*
Copyright (C) 2006 Pedro Felzenszwalb

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
*/

/* a simple image class */

#ifndef IMAGE_H
#define IMAGE_H

#include <cstring>

template <class T>
class image {
 public:
  /* create an image */
  image(const int width, const int height, const bool init = true);

  /* delete an image */
  ~image();

  /* init an image */
  void init(const T &val);

  /* copy an image */
  image<T> *copy() const;
  
  /* get the width of an image. */
  int width() const { return w; }
  
  /* get the height of an image. */
  int height() const { return h; }
  
  /* image data. */
  T *data;
  
  /* row pointers. */
  T **access;
  
 private:
  int w, h;
};

/* use i