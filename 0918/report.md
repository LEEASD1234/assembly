# 어셈블리

## 기본요소
*상수(Constant): 고정된 값
*변수(Variable): 데이터 저장 공간
*레이블(Label): 코드/데이터 위치 표시
*명령어(Mnemonic): 기계어의 축약어 (MOV, ADD 등)
*피연산자(Operand): 명령어의 입력/출력 값

##주석(Comment)
* ; → 한 줄 주석
*COMMENT ... → 블록 주석

## 프로그램 구조
*.CODE → 실행 코드 영역
*.DATA → 초기화된 데이터
*.DATA? → 미초기화 데이터 (프로그램 크기 줄임)

##데이터 정의
*BYTE, WORD, DWORD → 정수 저장
*REAL4, REAL8, REAL10 → 부동소수점
*문자열: 널 종료 문자열 (0으로 끝남)
*DUP → 여러 개 데이터 공간 할당

## 연산
*ADD, SUB → 덧셈, 뺄셈
*MUL, IMUL → 곱셈
*DIV, IDIV → 나눗셈

## 상수 정의
*= → 상수 값 지정
*EQU → 기호 상수 정의
*TEXTEQU → 매크로 정의

## 실행 과정
*어셈블(Assemble) → 기계어 변환
*링크(Link) → 실행 파일 생성
*실행(Run)

##기타
*리틀 엔디안(Little Endian): 낮은 주소에 하위 바이트 저장
*스택(Stack): 함수 호출/복귀 시 사용
*레지스터(Register): EAX, EBX, ECX, EDX, ESP, EBP, ESI, EDI 등
*플래그 레지스터: 연산 결과 상태 저장 (Zero, Carry, Sign 등)