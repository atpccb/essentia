/*
 * Copyright (C) 2006-2020  Music Technology Group - Universitat Pompeu Fabra
 *
 * This file is part of Essentia
 *
 * Essentia is free software: you can redistribute it and/or modify it under
 * the terms of the GNU Affero General Public License as published by the Free
 * Software Foundation (FSF), either version 3 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the Affero GNU General Public License
 * version 3 along with this program.  If not, see http://www.gnu.org/licenses/
 */

#include "connector.h"
#include "streaming/streamingalgorithm.h"
using namespace std;

namespace essentia {
namespace streaming {


string Connector::parentName() const {
  if (_parent) return _parent->name();
  return "<NoParent>";
}

string Connector::fullName() const {
  ostringstream fullname;
  fullname << parentName() << "::" << name();

  return fullname.str();
}



} // namespace streaming
} // namespace essentia
