#ifndef GRADES_H
#define GRADES_H

class Grades{
	private:
		string name;
		float gpa;

	public:
		explicit Grades(string name){
		:name{g_name};
		}
		
		explicit Grades(float gpa){
		:gpa{g_gpa};
		}

		void setName(string name){
			name = g_name;
		}
		
		string getName(){
			return name;
		}

		void setGpa(float gpa){
			gpa = g_gpa;
		}
		
		float getGpa(){
			return gpa;
		}
};











		
		
		
