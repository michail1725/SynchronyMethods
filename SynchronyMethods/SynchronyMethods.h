#pragma once
enum user—hoice { Process = 1, Thread, Mutex, Sema, Evnt, WT, CS, Yes = 1, No, Work = 0, Die = 8 };

DWORD WINAPI ThreadFunction1(LPVOID lpParameter);
DWORD WINAPI ThreadFunction2(LPVOID lpParameter);
DWORD WINAPI ThreadFunction3(LPVOID lpParameter);
unsigned __stdcall TreadProc_event(void* pArguments);
unsigned __stdcall CRTITICAL_SECTION_func(void* pArguments);
void CreateNewProcess(int priority);
unsigned __stdcall ThreadProc(void* param);
void BeginThread();
auto PrintChar(int n, char c);
auto PrintCharMut(int n, char c);
void SyncMechsSemaphore();
void SyncMechsMutex();
void SyncMechsEvent();
void SyncMechsWT();
void SyncMechsCS();

