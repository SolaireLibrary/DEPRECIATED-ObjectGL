#ifndef OBJECT_GL_COMPUTE_SHADER_HPP
#define OBJECT_GL_COMPUTE_SHADER_HPP

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

#include "Shader.hpp"

/*!
	\file ShaderCompute.hpp
	\brief
	\author Adam Smith
	\date 6th November 2015
*/

namespace ObjectGL{
	
	/*!
		\brief
		\author Adam Smith
		\date 6th November 2015
		\version 1.0
	*/
	class ComputeShader : public Shader{
	public:
		ComputeShader(Context& aContext, SourceFactory& aSource);
		~ComputeShader();

		// Inherited from Shader

		Type GetType() const;

		GLuint GetMaxUniformComponents() const;
		GLuint GetMaxUniformBlocks() const;
		GLuint GetMaxInputComponents() const;
		GLuint GetMaxOutputComponents() const;
		GLuint GetMaxTextureImageUnits() const;
	};

}

#include "ShaderCompute.inl"

#endif
