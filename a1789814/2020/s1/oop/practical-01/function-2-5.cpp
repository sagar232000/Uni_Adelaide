
bool descending(int array[],int n){
        if(!(n<1)){
       	 bool go = false;
	 int num = array[1]-array[0];

	  	
	        for(int i=1;i<n;i++){
        	        if (array[i-1]>array[i]){
                		  
        		      	   go = true;
                		   break;
               		 }
        	}
          
        return go;
        }
        else {
        return false;
        }
}

