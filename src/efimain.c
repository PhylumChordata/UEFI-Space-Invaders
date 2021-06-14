// UEFI Bootable Space Invaders Game - ThatOSDev ( 2021 )
// https://github.com/ThatOSDev/UEFI-Space-Invaders

#include "efi.h"
#include "ErrorCodes.h"
#include "efilibs.h"
#include "tosdfont.h"
#include "invadersprites.h"

// This is like int main() in a typical C program.
// In this case, we create an ImageHandle for the overall EFI interface,
// as well as a System Table pointer to the EFI_SYSTEM_TABLE struct.
// UEFI 2.9 Specs PDF Page 91
EFI_STATUS efi_main(EFI_HANDLE IH, EFI_SYSTEM_TABLE *ST)
{
    // We setup this global variable in the efilibs.h file.
    ImageHandle = IH;
    SystemTable = ST;
    
    ResetScreen();
    
    SetColor(EFI_WHITE);
    SetTextPosition(3, 2);
    Print(L"Space Invaders within the EFI Environment");
    
    SetColor(EFI_GREEN);
    SetTextPosition(8, 4);
    Print(L"Hit Any Key to see test Graphics");

    HitAnyKey();
    
    InitializeGOP();
	
	SetGraphicsColor(ORANGE);

	UINT32 SpriteSize = sizeof(sprites)/sizeof(sprites[0]);
	
	pixelpos->PixelxPos = 300;
	pixelpos->PixelyPos = 300;

    UINT32 mcX = pixelpos->PixelxPos;
    UINT32 mcY = pixelpos->PixelyPos;
	UINT32 pPos = 0;
	UINT32 sPos = 0;
	
    for(UINT32 t = 0; t < SpriteSize; t++)
	{
		pPos++;
		if(pPos > 8)
		{
			pPos = 1;
			mcY += 2;
			mcX = pixelpos->PixelxPos;
			sPos++;
			if(sPos > 3)
			{
				sPos = 0;
				mcY += 16;
			}
		}
		UINT32 ASCIIColor = sprites[t];
		switch(ASCIIColor)
		{
			case 0:
			{
				break;
			}
			case 1:
			{
				CreateFilledBox(mcX, mcY,2, 2);
				break;
			}
		}
		mcX += 2;
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
			SetTextPosition(x, 20);
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

    // We should not make it to this point.
    COLD_REBOOT();

    // We should not make it to this point.
    return EFI_SUCCESS;
}