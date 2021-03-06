#ifndef OBJECT_GL_FACTORY_HPP
#define OBJECT_GL_FACTORY_HPP

//Copyright 2015 Adam Smith
//
//Licensed under the Apache License, Version 2.0 (the "License");
//you may not use this file except in compliance with the License.
//You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
//Unless required by applicable law or agreed to in writing, software
//distributed under the License is distributed on an "AS IS" BASIS,
//WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//See the License for the specific language governing permissions and
//limitations under the License.

// Contact :
// Email             : $objectgl_email
// GitHub repository : $objectgl_git

/*!
	\file Factory.hpp
	\brief
	\author Adam Smith
	\date 6th November 2015
*/

#include <cstdint>
#include "Bindable.hpp"

namespace ObjectGL{

	/*!
		\brief
		\author Adam Smith
		\date 6th November 2015
		\version 1.0
	*/
	class BaseFactory : public Bindable<void>{
	public:
		typedef BindGuard<void> Guard;
	private:
		uint16_t mUsers;
	protected:
		virtual void OnBind() = 0;
		virtual void OnUnBind() = 0;
	public:
		BaseFactory();
		virtual ~BaseFactory();

		// Inherited from Bindable

		void Bind() override;
		void Unbind() override;
		bool IsBound() const override;
	};

	template<class T>
	class Factory : public BaseFactory{
	public:
		virtual T Get() const = 0;
	};

}

#include "Factory.inl"

#endif
