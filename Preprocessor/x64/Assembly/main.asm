; Listing generated by Microsoft (R) Optimizing Compiler Version 19.20.27404.0 

include listing.inc

INCLUDELIB MSVCRTD
INCLUDELIB OLDNAMES

msvcjmc	SEGMENT
__FBE2DD8F_main@cpp DB 01H
msvcjmc	ENDS
PUBLIC	main
PUBLIC	__JustMyCode_Default
EXTRN	?common_function@@YAXXZ:PROC			; common_function
EXTRN	_RTC_InitBase:PROC
EXTRN	_RTC_Shutdown:PROC
EXTRN	__CheckForDebuggerJustMyCode:PROC
;	COMDAT pdata
pdata	SEGMENT
$pdata$main DD	imagerel $LN3
	DD	imagerel $LN3+59
	DD	imagerel $unwind$main
pdata	ENDS
;	COMDAT rtc$TMZ
rtc$TMZ	SEGMENT
_RTC_Shutdown.rtc$TMZ DQ FLAT:_RTC_Shutdown
rtc$TMZ	ENDS
;	COMDAT rtc$IMZ
rtc$IMZ	SEGMENT
_RTC_InitBase.rtc$IMZ DQ FLAT:_RTC_InitBase
rtc$IMZ	ENDS
;	COMDAT xdata
xdata	SEGMENT
$unwind$main DD	025051e01H
	DD	010a230fH
	DD	07003001dH
	DD	05002H
xdata	ENDS
; Function compile flags: /Odt
;	COMDAT __JustMyCode_Default
_TEXT	SEGMENT
__JustMyCode_Default PROC				; COMDAT
	ret	0
__JustMyCode_Default ENDP
_TEXT	ENDS
; Function compile flags: /Odtp /RTCsu /ZI
; File C:\Users\sindr\GitHub\TDT4102-HiR-CppGroundUp\Preprocessor\main.cpp
;	COMDAT main
_TEXT	SEGMENT
main	PROC						; COMDAT

; 3    : int main() {

$LN3:
	push	rbp
	push	rdi
	sub	rsp, 232				; 000000e8H
	lea	rbp, QWORD PTR [rsp+32]
	mov	rdi, rsp
	mov	ecx, 58					; 0000003aH
	mov	eax, -858993460				; ccccccccH
	rep stosd
	lea	rcx, OFFSET FLAT:__FBE2DD8F_main@cpp
	call	__CheckForDebuggerJustMyCode

; 4    : 	common_function();

	call	?common_function@@YAXXZ			; common_function

; 5    : }

	xor	eax, eax
	lea	rsp, QWORD PTR [rbp+200]
	pop	rdi
	pop	rbp
	ret	0
main	ENDP
_TEXT	ENDS
END
