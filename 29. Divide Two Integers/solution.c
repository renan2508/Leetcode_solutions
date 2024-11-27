int divide(int dividend, int divisor) {

    int i = 0;
    /*// Either you can do this mess that doesn't work bc of time exceed or an unreadable code using bitwise
    
    int divisor_negative = 0;
    int dividend_negative = 0;

    if(dividend == INT_MIN && divisor == 1){ return INT_MIN;}
    if(dividend == INT_MIN && divisor == -1){ return INT_MAX;}
    if(dividend == INT_MIN){ dividend = INT_MAX; dividend_negative = 1;}


    if (dividend == INT_MIN) {
        dividend += abs(divisor);
        i++;                     
        dividend_negative = 1;
    }

    if(dividend < 0){
            dividend = -dividend;
            dividend_negative = 1;
    }

    if(divisor < 0){
        divisor = -divisor;
        divisor_negative = 1;
    }

    while(dividend>=divisor){
      dividend=dividend-divisor;
      i++;
    }

    if((divisor_negative == 1 && dividend_negative == 0) || (dividend_negative == 1 && divisor_negative == 0)){
        return -i;
    }*/
    //Or can you do this majestic thingy
    if(dividend == INT_MIN && divisor == 1){ return INT_MIN;}
    if(dividend == INT_MIN && divisor == -1){ return INT_MAX;}
    i = dividend/divisor;
    return i;
}