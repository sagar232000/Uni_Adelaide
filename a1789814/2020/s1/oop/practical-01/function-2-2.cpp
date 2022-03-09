int maximum(int array[],int n){
        int max =array[0];

        for(int i = 0;i < n;i++){
                if(max < array[i]){
                        max = array[i];
                }
        }
        return max;
}
  
