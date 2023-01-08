#include <stdio.h>

#include <inttypes.h>
#include <float.h>

void overflow_underflow( void )  {
  uint16_t biggest  = UINT16_MAX;
  uint16_t overflow = biggest + 1;
  printf( "Biggest=%d and overflow=%d\n" ,
           biggest , overflow );
  
  int16_t  smallest  = INT16_MIN;
  int16_t  underflow = smallest - 1;
  printf( "Biggest=%d and underflow=%d\n" ,
          smallest , underflow );
  
  float    fBiggest  = FLT_MAX;
  float    fOverflow = fBiggest * 2;
  printf( "FloatBiggest = %g FloatOverflow (FloatBiggest * 2) =	%g\n" , fBiggest , fOverflow );
  
  float    fSmallest  = FLT_MIN;
  float    fUnderflow = fSmallest / fBiggest;
  printf( "FloatSmallest = %g FloatUnderflow (FloatSmallest/FloatBiggest) = %g\n", fSmallest , fUnderflow );
  printf("FloatSmallest = %g FloatUnderflow (FloatSmallest * FloatSmallest) = %g\n", fSmallest, fUnderflow);

}

