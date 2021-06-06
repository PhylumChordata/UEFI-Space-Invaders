// UEFI Bootable Space Invaders Game - ThatOSDev ( 2021 )
// https://github.com/ThatOSDev/UEFI-Space-Invaders

#include "efi.h"
#include "ErrorCodes.h"
#include "libs.h"

EFI_STATUS efi_main(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *ST)
{
    SystemTable = ST;
    
    ResetScreen();
    
    SetColor(EFI_WHITE);
    SetTextPosition(3, 2);
    Print(L"Space Invaders within the EFI Environment");

    SetColor(EFI_GREEN);
    SetTextPosition(8, 4);
    Print(L"Hit Any Key to see test Graphics");
    
    HitAnyKey();

    Print(L"\r\n\r\nLoading Graphics Output Protocol ... ");
    EFI_STATUS Status = SystemTable->BootServices->LocateProtocol(&EFI_GRAPHICS_OUTPUT_PROTOCOL_GUID, 0, (void**)&gop);
    Print(CheckStandardEFIError(Status));
    if(Status == EFI_SUCCESS)
    {
        Print(L"Creating Event...");
		EFI_EVENT event;

        Status = SystemTable->BootServices->CreateEvent(EVT_TIMER, 0, NULL, NULL, &event);
		Print(CheckStandardEFIError(Status));
		
		Print(L"Setting Timer...");
		Status = SystemTable->BootServices->SetTimer(event, TimerRelative, 1000);
		Print(CheckStandardEFIError(Status));

		Print(L"Closing Event...");
		Status = SystemTable->BootServices->CloseEvent(event);
		Print(CheckStandardEFIError(Status));
		
		Print(L"Loading graphics...");
        CreateFilledBox(50, 50, 100, 200, ORANGE);
        CreateFilledBox(60, 60, 80, 30, RED);
        
        SetGraphicsColor(BLACK);
        SetPixel(65, 65);
        
        SetColor(EFI_YELLOW);
        Print(L"We have Graphics !!");
    }
    
    SetColor(EFI_GREEN);
    SetTextPosition(2, 11);
    Print(L"Hit Any Key");
    
    HitAnyKey();
   
	return 0;
}
