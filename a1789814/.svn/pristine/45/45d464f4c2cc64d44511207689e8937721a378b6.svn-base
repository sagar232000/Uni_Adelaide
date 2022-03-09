#include <iostream>
#include <string>
using namespace std;


float add_op(float, float);
float subtract_op(float,float);

float arithmetic_ops(float left, float right, std::string op)
{
		if(!(op.compare("+")))
		{
			return(add_op(left,right));
		}
		else if(!(op.compare("-")))
		{
			 return(subtract_op(left,right));
			}
	    else{
	    	return 0;
	    }
	
}

float add_op(float left, float right)
{
	return left + right;
}


float subtract_op(float left, float right)
{
	return left - right;
}