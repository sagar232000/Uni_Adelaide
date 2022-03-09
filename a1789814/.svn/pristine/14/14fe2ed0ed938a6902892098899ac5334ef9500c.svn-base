bool is_a_palindrome(int[],int);
int sum_elements(int[],int);

int sum_if_a_palindrome(int integers[], int length){
if(length<=0){
    return false;
}
else {
    if(is_a_palindrome(integers,length)){
        return sum_elements(integers,length);
    }
    else{
        return -2;
    }
}

}

bool is_a_palindrome(int integers[], int length){svn 
    if(length<=0){
        return false;
    }
    else{
        int flag=0;
        int i=0;
        int size = length;
        while(flag==0 && i<size){
            if(integers[i]==integers[size-i-1]){
                flag=0;
                i++;

            }
            else{
                flag=1;
            }
        }
        if(flag==0){
            return true;
        }
        else {
            return false;
        }
    }

}


int sum_elements(int integers[], int length){

    if (length<=0){

        return false;
    }
    else
    {
        int sum=0;
        for(int i = 0; i<length ; i++){
            sum =sum +integers[i];
        }
        return sum;
    }
}