// UEFI Bootable Space Invaders Game - ThatOSDev ( 2021 )
// https://github.com/ThatOSDev/UEFI-Space-Invaders

#include "efi.h"
#include "ErrorCodes.h"
#include "efilibs.h"
#include "tosdfont.h"
#include "invadersprites.h"

void UpdateSprite(UINT32 s, UINT32 row, UINT32 column, UINT32 xPos, UINT32 yPos, UINT32 spriteColor)
{
	pixelpos->PixelxPos = xPos;
	pixelpos->PixelyPos = yPos;
	UINT32 SelectSprite = s;
	
	if(s < 3)
	{
		SetGraphicsColor(BLACK);
		CreateFilledBox(xPos, yPos,200, 150);
	}
	
	switch(spriteColor)
	{
	    case 1: {SetGraphicsColor(ORANGE); break;}
		case 2: {SetGraphicsColor(RED); break;}
		case 3: {SetGraphicsColor(WHITE); break;}
	}
	for(UINT32 e = 1; e < (column + 1); e++)
	{
		
		for(UINT32 u = 1; u < (row + 1); u++)
		{
			UINT32 mcX = pixelpos->PixelxPos;
			UINT32 mcY = pixelpos->PixelyPos;
			UINT32 pPos = 0;
			UINT32 sPos = 0;
			
			for(UINT32 t = ((SelectSprite * 32) - 32); t < (SelectSprite * 32); t++)
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
			pixelpos->PixelxPos += 25;
		}
		pixelpos->PixelyPos += 20;
		pixelpos->PixelxPos = xPos;
	}
}

EFI_STATUS efi_main(EFI_HANDLE IH, EFI_SYSTEM_TABLE *ST)
{
    // We setup this global variable in the efilibs.h file.
    ImageHandle = IH;
    SystemTable = ST;
    
    ResetScreen();
	ResetKeyboard();
    
    InitializeGOP();
	
	ClearScreen();

    SetColor(EFI_WHITE);
    SetTextPosition(3, 2);
    Print(L"Space Invaders within the EFI Environment");
	
    SetColor(EFI_GREEN);
    SetTextPosition(6, 23);
    Print(L"Hit q to quit | Hit r to reboot");

	UINTN u = 0;
	UINT32 toggleAlien = 0;
	UINT32 z = 20;
	
    UpdateSprite(3, 4, 1, 325, 500, 2);
	
    while(1)
    {
		u++;
		if(u > 36000)   // This is 36 * 1000 ==> 36 milliseconds
		{
            Delay1();
			z++;
			if(z > 20)
			{
				UpdateSprite(toggleAlien + 1, 8, 8, 275, 225, 1);
				toggleAlien++;
				if(toggleAlien > 1) {toggleAlien = 0;}
				z = 0;
				
				UpdateSprite(4, 1, 1, 350, 550, 3);
			}
			u = 0;
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
    return EFI_SUCCESS;
}