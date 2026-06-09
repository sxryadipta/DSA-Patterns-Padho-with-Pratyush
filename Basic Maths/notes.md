# Extraction of digits. 

```
int N;
while (N>0){
  last digit = N % 10;   //this stores the last digit in this variable.
  N=N/10;   //this reduces the number by 10, hence eliminating the last digit and extracting the next digit in the next iteration.
}
```
