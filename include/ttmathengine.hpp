#ifndef TTMATHENGINE_HPP
#define TTMATHENGINE_HPP

#include <iostream>
#include <string>
#include <cmath>

#include "../src/charhelper.cpp"

namespace ttmathengine {
//TODO: Vectors
	class Vector3 {
		private:
		
		public:
			//Vars
			//public coords for ease of access and writing
			float x;
			float y;
			float z;
			
			
			//Constructors and Deconstructors
			Vector3::Vector3();
			Vector3::Vector3(float iX, float iY, float iZ);
			
			Vector3::~Vector3();
			
			
			//Copy constructors
			Vector3(const Vector3& v);
			Vector3& Vector3::operator=(const Vector3& v);
			
			//Functions
			//Comparators
			bool Vector3::operator==(const Vector3& v);
			bool Vector3::operator!=(const Vector3& v);
			
			//Alter and Assign
			void Vector3::operator+=(const Vector3& v);
			void Vector3::operator-=(const Vector3& v);
			void Vector3::operator%=(const Vector3& v);
			
			//Scalar
			void Vector3::operator*=(const float s);
			void Vector3::operator/=(const float s);
			
			//Algebraic
			Vector3 Vector3::operator+(const Vector3& v)const;
			Vector3 Vector3::operator-(const Vector3& v)const;
			
			//Scalar
			Vector3 Vector3::operator*(const float s)const;
			Vector3 Vector3::operator/(const float s)const;
			
			//Dot product
			float Vector3::operator*(const Vector3& v) const;
			
			//Cross product
			Vector3 Vector3::operator%(const Vector3& v)const;
			
			//This might be really stupid, but it might be really convenient
			//Override the bitwise shifts to just be "move left" and "move right"
			Vector3 Vector3::operator<<(const Vector3& v)const;
			Vector3 Vector3::operator>>(const Vector3& v)const;
			
			//From here is non-operator functions
			float Vector3::dot(Vector3 v);
			float Vector3::magnitude();
			
			Vector3 Vector3::cross(Vector3 v);
			
			void Vector3::normalize();
			
			char* Vector3::ToString();
	};

//TODO: Matricies
	class Matrix {
		private:
			float matrix_data[9] = { 0.0 };

		public:

			Matrix::Matrix();
			Matrix::Matrix(float, float, float, float, float, float, float, float, float);
			Matrix::Matrix(float*);
			Matrix::Matrix(float**);
			Matrix::Matrix(float*, float*, float*);
			
			//Copy Constructors
			Matrix::Matrix(const Matrix&);
			Matrix& Matrix::operator=(const Matrix&)const;

			Matrix::~Matrix();

			float* Matrix::GetMatrixData();

			//Two display functions
			void Matrix::Show();
			char* Matrix::ToString();
	};

//TODO: Quaternions


//TODO: General Functions
	Vector3 VectorNormal(Vector3);
}

#endif