/**
 This file is part of Deformable Shape Tracking (DEST).
 
 Copyright Christoph Heindl 2015
 
 Deformable Shape Tracking is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 Deformable Shape Tracking is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with Deformable Shape Tracking. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef DEST_RECT_IO_H
#define DEST_RECT_IO_H

#include <dest/core/shape.h>
#include <string>
#include <vector>

namespace dest {
    namespace io {
      
        /**
            Import a list of rectangles from a single CSV file.

            Each rectangle is specified as 4 corner points in x and y coordinates. Each row
            consists of 8 coordinates in the following order separated by spaces:
                top-left-x top-right-x bottom-left-x bottom-right-x top-left-y top-right-y bottom-left-y bottom-right-x

            Coordinate system of the rectangle is based on OpenCV image coordinate system.

            \param pathToCSV File to read
            \param rects Rectangles read from file
            \returns True if successful, false otherwise
        */
        bool importRectangles(const std::string &pathToCSV, std::vector<core::Rect> &rects);
        
        /**
            Export a list of rectangles to a single CSV file.

            Each rectangle is written as 4 corner points in x and y coordinates. Each row
            consists of 8 coordinates in the following order separated by spaces:
                top-left-x top-right-x bottom-left-x bottom-right-x top-left-y top-right-y bottom-left-y bottom-right-x

            Coordinate system of the rectangle is based on OpenCV image coordinate system.

            \param pathToCSV File to write
            \param rects Rectangles to write
            \returns True if successful, false otherwise
         */
        bool exportRectangles(const std::string &pathToCSV, const std::vector<core::Rect> &rects);

        
    }
}

#endif