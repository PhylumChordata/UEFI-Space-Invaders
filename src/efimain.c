// UEFI Bootable Space Invaders Game - ThatOSDev ( 2021 )
// https://github.com/ThatOSDev/UEFI-Space-Invaders

#include "efi.h"
#include "ErrorCodes.h"
#include "efilibs.h"

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
		for(int i = 0; i < 60; i++)
		{
			Print(L".");
                        Delay(18);
		}
		
		Print(L"\r\nLoading graphics...");
        SetGraphicsColor(ORANGE);
        CreateFilledBox(50, 50, 100, 200);
        SetGraphicsColor(RED);
        CreateFilledBox(60, 60, 80, 30);
        
        SetGraphicsColor(BLACK);
        SetPixel(65, 65);
        
        SetColor(EFI_YELLOW);
        Print(L"We have Graphics !!");
    }
    
    SetColor(EFI_GREEN);
    SetTextPosition(2, 23);
    Print(L"Hit q to quit | Hit r to reboot");

    ResetKeyboard();

    SetColor(EFI_WHITE);

	UINTN u = 0;
	unsigned int x = 5;
	BOOLEAN y = 1;

    while(1)
    {
		u++;
		if(u > 36000)   // This is 36 * 1000 ==> 36 milliseconds
		{
                        Delay1();
			u = 0;
			SetTextPosition(x, 17);
			Print(L"   ...   ");
			if(y == 1)
			{
			    x++;
			} else {
				x--;
			}
			if(x < 5)
			{
				x = 5;
				y = 1;
			} else if(x > 50)
			{
				x = 50;
				y = 0;
			}
		}
                EFI_STATUS Status = CheckKey();
                if(Status == EFI_SUCCESS)
                {
 		    if(GetKey('q') == 1)
		    {
                        SHUTDOWN();
		        break;
		    }
                    if(GetKey('r') == 1)
                    {
                        COLD_REBOOT();
		        break;
                    }
                }
    }

    COLD_REBOOT();

    // We should not make it to this point.
    return EFI_SUCCESS;
}
