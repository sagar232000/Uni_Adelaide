int binary_to_number(int binary_digits[],int number_of_digits){

	int number = 0;
 
   	for(int i=0;i<number_of_digits;i++)
      {
          number = number * 10;
          number = number + binary_digits[i];
      }
      int temp = number;
      int lastdig;
      int decval = 0;
      int base = 1;
      while(temp>0)
      {
          lastdig = temp % 10;
          temp = temp / 10;
          decval += lastdig*base;
          base = base*2;
 }
   	return decval;
}
