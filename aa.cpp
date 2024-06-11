              int main(){                      char s[311]
              ;int c = 0;                      for( int i=
              1;i<=9;i ++                      ){for(int j
              =1;j<=i;j++                      ){s[c++]= i
    +'0';s[c++]='*';s[c++]=j+'0';   s[c++]='=';if(i*j<10){s[c++]=(i*
    j)+'0';}else{s[c ++]=(i*j/10)   +'0';s[c++]=(i*j% 10)+'0';}s[c++
    ]='\t';}s[c++]='\n';}asm("mov   $1, %%eax;mov $1, %%edi; mov """
              "%0, %%rsi"                      "; mov $31"
              "1, %%edx;"                      " syscall":
              :"r"(s):"%"                      "rax","%rd"
              "i","%rsi",                      """%rdx");}