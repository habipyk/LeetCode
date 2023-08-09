int numberOfMatches(int n){

    int advance;
    int a = 0;
    int matches = 0;
    while(n > 1)
    {
        if(n%2==0)
        {
            matches+=n/2;
            advance=n/2;
        }
        else
        {
            matches+=n/2;
            advance=(n-1)/2+1;
        }
        n = advance;
    }
    return(matches);
}