/*
 * Copyright 2012-2014 Moritz Hilscher
 *
 * This file is part of Mapcrafter.
 *
 * Mapcrafter is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Mapcrafter is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Mapcrafter.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DISPATCHER_H_
#define DISPATCHER_H_

#include "../renderer/tilerenderworker.h"
#include "../util.h"

#include <memory> // shared_ptr

namespace mapcrafter {
namespace thread {

/**
 * This is an interface for a class responsible for managing and distributing the render
 * work.
 */
class Dispatcher {
public:
	virtual ~Dispatcher() {};

	virtual void dispatch(const renderer::RenderContext& context,
			std::shared_ptr<util::IProgressHandler> progress) = 0;
};

} /* namespace thread */
} /* namespace mapcrafter */

#endif /* DISPATCHER_H_ */
