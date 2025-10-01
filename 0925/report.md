# 어셈블리 언어 

## 기본 요소
* 상수(Constant expression): 정수 상수와 산술 연산 가능.
* 라벨(Label): 코드나 데이터의 위치를 나타내는 식별자.
* 명령어(Mnemonic): 기계어를 나타내는 짧은 단어 (예: MOV, ADD).
* 피연산자(Operand): 명령어의 입력/출력 값 (0, 1, 2, 3개까지 가능).
* 주석(Comment): ;로 시작하는 한 줄 주석, COMMENT 지시어로 블록 주석 가능.
* NOP(No Operation): 1바이트를 차지하지만 동작은 하지 않음, 코드 정렬용.

## 프로그램 실행과 작성
* Windows 서비스 호출, 프로그램 종료 시 OS로 제어 반환.
* 어셈블러(Assembler)가 기계어로 변환.
* 디버깅: F5 실행, Breakpoint 설정.
* 빌드 과정: Assembling → Linking → 실행 (ml, link 명령어 사용).

## 데이터 정의 (Defining Data)
* 자료형: BYTE, WORD, DWORD, REAL4/8/10 등.
* 초기화:
** ? → 미초기화 (실행 중 값 할당).
** 문자열 → 따옴표 사용, 보통 NULL(0) 종료.

* DUP 연산자: 다중 데이터 할당.
* 엔디안(Endian): x86은 Little-endian 저장 방식.
* .DATA?: 대용량 미초기화 데이터 선언 시 프로그램 크기 절약.

## 심볼릭 상수 (Symbolic Constants)
* = : 이름과 정수 표현식 연결.
* EQU: 이름과 정수/문자열/텍스트 연결.
* TEXTEQU: 텍스트 매크로 정의.