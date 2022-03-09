#include<iostream>

using namespace std;

void count_numbers(int array[4][4]){

	int count0 = 0,count1 = 0,count2 = 0,count3 = 0,count4 = 0,count5 = 0,count6 = 0,count7 = 0,count8 = 0,count9 = 0; 
	for(int i=0;i<4;i++){
		for(int j = 0 ;j < 4 ;j++){
			switch(array[i][j])
			{
				case 0:
					count0++;
					break;
				case 1:
                                        count1++;
                                        break;
				case 2:
                                        count2++;
                                        break;
				case 3:
                                        count3++;
                                        break;
				case 4:
                                        count4++;
                                        break;
				case 5:
                                        count5++;
                                        break;
				case 6:
                                        count6++;
                                        break;
				case 7:
                                        count7++;
                                        break;
				case 8:
                                        count8++;
                                        break;
				case 9:
                                        count9++;
                                        break;
			}
		}
	}
	cout <<"0:"<<count0<<";"<<"1:"<<count1<<";"<<"2:"<<count2<<";"<<"3:"<<count3<<";"<<"4:"<<count4<<";"<<"5:"<<count5<<";"<<"6:"<<count6<<";"<<"7:"<<count7<<";"<<"8:"<<count8<<";"<<"9:"<<count9<<";"<<endl; 
}
