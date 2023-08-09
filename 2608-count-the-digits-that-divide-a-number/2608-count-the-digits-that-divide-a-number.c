int countDigits(int num){
    int i = 0;
    int value = num;
    while(num>0)
    {
        if(value%(num%10) == 0)
        i++;
        num/=10;
    }
    return(i);
}