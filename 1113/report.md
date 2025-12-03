# 정수산술

## Shift와 Rotate 명령어
* SHL/SHR : 왼/오른쪽 shift
* SAR/SAR : 왼/오른쪽으로 논리 시프트 (빈자리는 0)
* ROL/ROR: 비트 순환, 빠져나간 비트는 반대편에 들어감
* RCL/RCR : Carry 플래도 순환에 포함
* SHLD/SHRD : 왼/오른쪽으로 이중 정밀 shift, dest를 밀고 소스의 상위 비트로 채움

## 곱셈 명령어
* MUL : 부호없는 곱셈
* IMUL : 부호있는 곱셈

## 나눗셈 명령어
* DIV : 부호없는 나눗셈
* IDIV : 부호있는 나눗셈

## 덧셈/뺄셈 명령어 (5바이트 이상 확장)
* ADC : Carry 포함 덧셈
* SBB : Borrow 포함 뺄셈

## ASCII 및 언팩 소수 산술
* AAA : ADD/ADC후 AL을 ASCII decimal로 보정
* AAS : SUB/SBB 후 보정
* AAM : / AAD 
* AAD : DIV전, 




