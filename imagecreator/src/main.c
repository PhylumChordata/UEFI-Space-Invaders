// Original ImageCreator created by ThatOSDev ( ExoVerse ) - 2020 - 2021
#include <stdio.h>
#include <string.h>

// 256 Meg = (524288) 268,435,456 Bytes
// 120 Meg = (245760) 125,829,120 Bytes
// 100 Meg = (204800) 104,857,600 Bytes
//  40 Meg = (81920)   41,943,040 Bytes

void createblankimage()
{
    char data[512];
    FILE * fPtr;
    fPtr = fopen("drive.hdd", "w");

    int t;
    for(t = 0; t < 81920; t++)
    {
          memset(data, '\0', sizeof(data));
          fwrite(data, sizeof(data), 1, fPtr );
    }
    fclose(fPtr);
}

void InsertGPT()
{
    unsigned long gpt[4052] = {0,51,1,192,2,142,3,208,4,188,6,124,7,142,8,192,9,142,10,216,11,190,13,124,14,191,16,6,17,185,19,2,20,252,21,243,22,164,23,80,24,104,25,28,26,6,27,203,28,251,29,185,30,4,32,189,33,190,34,7,35,128,36,126,39,124,40,11,41,15,42,133,43,14,44,1,45,131,46,197,47,16,48,226,49,241,50,205,51,24,52,136,53,86,55,85,56,198,57,70,58,17,59,5,60,198,61,70,62,16,64,180,65,65,66,187,67,170,68,85,69,205,70,19,71,93,72,114,73,15,74,129,75,251,76,85,77,170,78,117,79,9,80,247,81,193,82,1,84,116,85,3,86,254,87,70,88,16,89,102,90,96,91,128,92,126,93,16,95,116,96,38,97,102,98,104,103,102,104,255,105,118,106,8,107,104,110,104,112,124,113,104,114,1,116,104,117,16,119,180,120,66,121,138,122,86,124,139,125,244,126,205,127,19,128,159,129,131,130,196,131,16,132,158,133,235,134,20,135,184,136,1,137,2,138,187,140,124,141,138,142,86,144,138,145,118,146,1,147,138,148,78,149,2,150,138,151,110,152,3,153,205,154,19,155,102,156,97,157,115,158,28,159,254,160,78,161,17,162,117,163,12,164,128,165,126,167,128,168,15,169,132,170,138,172,178,173,128,174,235,175,132,176,85,177,50,178,228,179,138,180,86,182,205,183,19,184,93,185,235,186,158,187,129,188,62,189,254,190,125,191,85,192,170,193,117,194,110,195,255,196,118,198,232,199,141,201,117,202,23,203,250,204,176,205,209,206,230,207,100,208,232,209,131,211,176,212,223,213,230,214,96,215,232,216,124,218,176,219,255,220,230,221,100,222,232,223,117,225,251,226,184,228,187,229,205,230,26,231,102,232,35,233,192,234,117,235,59,236,102,237,129,238,251,239,84,240,67,241,80,242,65,243,117,244,50,245,129,246,249,247,2,248,1,249,114,250,44,251,102,252,104,253,7,254,187,257,102,258,104,260,2,263,102,264,104,265,8,269,102,270,83,271,102,272,83,273,102,274,85,275,102,276,104,281,102,282,104,284,124,287,102,288,97,289,104,292,7,293,205,294,26,295,90,296,50,297,246,298,234,300,124,303,205,304,24,305,160,306,183,307,7,308,235,309,8,310,160,311,182,312,7,313,235,314,3,315,160,316,181,317,7,318,50,319,228,320,5,322,7,323,139,324,240,325,172,326,60,328,116,329,9,330,187,331,7,333,180,334,14,335,205,336,16,337,235,338,242,339,244,340,235,341,253,342,43,343,201,344,228,345,100,346,235,348,36,349,2,350,224,351,248,352,36,353,2,354,195,355,73,356,110,357,118,358,97,359,108,360,105,361,100,362,32,363,112,364,97,365,114,366,116,367,105,368,116,369,105,370,111,371,110,372,32,373,116,374,97,375,98,376,108,377,101,379,69,380,114,381,114,382,111,383,114,384,32,385,108,386,111,387,97,388,100,389,105,390,110,391,103,392,32,393,111,394,112,395,101,396,114,397,97,398,116,399,105,400,110,401,103,402,32,403,115,404,121,405,115,406,116,407,101,408,109,410,77,411,105,412,115,413,115,414,105,415,110,416,103,417,32,418,111,419,112,420,101,421,114,422,97,423,116,424,105,425,110,426,103,427,32,428,115,429,121,430,115,431,116,432,101,433,109,437,99,438,123,439,154,448,2,450,238,451,254,452,63,453,4,454,1,458,255,459,255,460,255,461,255,510,85,511,170,512,69,513,70,514,73,515,32,516,80,517,65,518,82,519,84,522,1,524,92,528,224,529,132,530,46,531,217,536,1,544,255,545,63,546,1,552,34,560,222,561,63,562,1,568,69,569,6,570,37,571,63,572,97,573,183,574,49,575,70,576,143,577,69,578,217,579,147,580,11,581,249,582,143,583,245,584,2,592,128,596,128,600,218,601,128,602,98,603,43,1024,162,1025,160,1026,208,1027,235,1028,229,1029,185,1030,51,1031,68,1032,135,1033,192,1034,104,1035,182,1036,183,1037,38,1038,153,1039,199,1040,220,1041,209,1042,203,1043,104,1044,68,1045,91,1046,184,1047,72,1048,147,1049,43,1050,164,1051,96,1052,113,1053,251,1054,189,1055,146,1056,128,1064,127,1065,48,1066,1,1080,66,1082,97,1084,115,1086,105,1088,99,1090,32,1092,100,1094,97,1096,116,1098,97,1100,32,1102,112,1104,97,1106,114,1108,116,1110,105,1112,116,1114,105,1116,111,1118,110,65536,235,65537,88,65538,144,65539,77,65540,83,65541,68,65542,79,65543,83,65544,53,65545,46,65546,48,65548,2,65549,1,65550,190,65551,27,65552,2,65557,248,65560,63,65562,255,65564,128,65569,48,65570,1,65572,33,65573,2,65580,2,65584,1,65586,6,65600,128,65602,41,65603,229,65604,127,65605,70,65606,44,65607,78,65608,79,65609,32,65610,78,65611,65,65612,77,65613,69,65614,32,65615,32,65616,32,65617,32,65618,70,65619,65,65620,84,65621,51,65622,50,65623,32,65624,32,65625,32,65626,51,65627,201,65628,142,65629,209,65630,188,65631,244,65632,123,65633,142,65634,193,65635,142,65636,217,65637,189,65639,124,65640,136,65641,86,65642,64,65643,136,65644,78,65645,2,65646,138,65647,86,65648,64,65649,180,65650,65,65651,187,65652,170,65653,85,65654,205,65655,19,65656,114,65657,16,65658,129,65659,251,65660,85,65661,170,65662,117,65663,10,65664,246,65665,193,65666,1,65667,116,65668,5,65669,254,65670,70,65671,2,65672,235,65673,45,65674,138,65675,86,65676,64,65677,180,65678,8,65679,205,65680,19,65681,115,65682,5,65683,185,65684,255,65685,255,65686,138,65687,241,65688,102,65689,15,65690,182,65691,198,65692,64,65693,102,65694,15,65695,182,65696,209,65697,128,65698,226,65699,63,65700,247,65701,226,65702,134,65703,205,65704,192,65705,237,65706,6,65707,65,65708,102,65709,15,65710,183,65711,201,65712,102,65713,247,65714,225,65715,102,65716,137,65717,70,65718,248,65719,131,65720,126,65721,22,65723,117,65724,57,65725,131,65726,126,65727,42,65729,119,65730,51,65731,102,65732,139,65733,70,65734,28,65735,102,65736,131,65737,192,65738,12,65739,187,65741,128,65742,185,65743,1,65745,232,65746,44,65748,233,65749,168,65750,3,65751,161,65752,248,65753,125,65754,128,65755,196,65756,124,65757,139,65758,240,65759,172,65760,132,65761,192,65762,116,65763,23,65764,60,65765,255,65766,116,65767,9,65768,180,65769,14,65770,187,65771,7,65773,205,65774,16,65775,235,65776,238,65777,161,65778,250,65779,125,65780,235,65781,228,65782,161,65783,125,65784,128,65785,235,65786,223,65787,152,65788,205,65789,22,65790,205,65791,25,65792,102,65793,96,65794,128,65795,126,65796,2,65798,15,65799,132,65800,32,65802,102,65803,106,65805,102,65806,80,65807,6,65808,83,65809,102,65810,104,65811,16,65813,1,65815,180,65816,66,65817,138,65818,86,65819,64,65820,139,65821,244,65822,205,65823,19,65824,102,65825,88,65826,102,65827,88,65828,102,65829,88,65830,102,65831,88,65832,235,65833,51,65834,102,65835,59,65836,70,65837,248,65838,114,65839,3,65840,249,65841,235,65842,42,65843,102,65844,51,65845,210,65846,102,65847,15,65848,183,65849,78,65850,24,65851,102,65852,247,65853,241,65854,254,65855,194,65856,138,65857,202,65858,102,65859,139,65860,208,65861,102,65862,193,65863,234,65864,16,65865,247,65866,118,65867,26,65868,134,65869,214,65870,138,65871,86,65872,64,65873,138,65874,232,65875,192,65876,228,65877,6,65878,10,65879,204,65880,184,65881,1,65882,2,65883,205,65884,19,65885,102,65886,97,65887,15,65888,130,65889,116,65890,255,65891,129,65892,195,65894,2,65895,102,65896,64,65897,73,65898,117,65899,148,65900,195,65901,66,65902,79,65903,79,65904,84,65905,77,65906,71,65907,82,65908,32,65909,32,65910,32,65911,32,65964,13,65965,10,65966,68,65967,105,65968,115,65969,107,65970,32,65971,101,65972,114,65973,114,65974,111,65975,114,65976,255,65977,13,65978,10,65979,80,65980,114,65981,101,65982,115,65983,115,65984,32,65985,97,65986,110,65987,121,65988,32,65989,107,65990,101,65991,121,65992,32,65993,116,65994,111,65995,32,65996,114,65997,101,65998,115,65999,116,66000,97,66001,114,66002,116,66003,13,66004,10,66040,172,66041,1,66042,185,66043,1,66046,85,66047,170,66048,82,66049,82,66050,97,66051,65,66532,114,66533,114,66534,65,66535,97,66536,255,66537,15,66538,1,66540,3,66558,85,66559,170,67070,85,67071,170,68608,235,68609,88,68610,144,68611,77,68612,83,68613,68,68614,79,68615,83,68616,53,68617,46,68618,48,68620,2,68621,1,68622,190,68623,27,68624,2,68629,248,68632,63,68634,255,68636,128,68641,48,68642,1,68644,33,68645,2,68652,2,68656,1,68658,6,68672,128,68674,41,68675,229,68676,127,68677,70,68678,44,68679,78,68680,79,68681,32,68682,78,68683,65,68684,77,68685,69,68686,32,68687,32,68688,32,68689,32,68690,70,68691,65,68692,84,68693,51,68694,50,68695,32,68696,32,68697,32,68698,51,68699,201,68700,142,68701,209,68702,188,68703,244,68704,123,68705,142,68706,193,68707,142,68708,217,68709,189,68711,124,68712,136,68713,86,68714,64,68715,136,68716,78,68717,2,68718,138,68719,86,68720,64,68721,180,68722,65,68723,187,68724,170,68725,85,68726,205,68727,19,68728,114,68729,16,68730,129,68731,251,68732,85,68733,170,68734,117,68735,10,68736,246,68737,193,68738,1,68739,116,68740,5,68741,254,68742,70,68743,2,68744,235,68745,45,68746,138,68747,86,68748,64,68749,180,68750,8,68751,205,68752,19,68753,115,68754,5,68755,185,68756,255,68757,255,68758,138,68759,241,68760,102,68761,15,68762,182,68763,198,68764,64,68765,102,68766,15,68767,182,68768,209,68769,128,68770,226,68771,63,68772,247,68773,226,68774,134,68775,205,68776,192,68777,237,68778,6,68779,65,68780,102,68781,15,68782,183,68783,201,68784,102,68785,247,68786,225,68787,102,68788,137,68789,70,68790,248,68791,131,68792,126,68793,22,68795,117,68796,57,68797,131,68798,126,68799,42,68801,119,68802,51,68803,102,68804,139,68805,70,68806,28,68807,102,68808,131,68809,192,68810,12,68811,187,68813,128,68814,185,68815,1,68817,232,68818,44,68820,233,68821,168,68822,3,68823,161,68824,248,68825,125,68826,128,68827,196,68828,124,68829,139,68830,240,68831,172,68832,132,68833,192,68834,116,68835,23,68836,60,68837,255,68838,116,68839,9,68840,180,68841,14,68842,187,68843,7,68845,205,68846,16,68847,235,68848,238,68849,161,68850,250,68851,125,68852,235,68853,228,68854,161,68855,125,68856,128,68857,235,68858,223,68859,152,68860,205,68861,22,68862,205,68863,25,68864,102,68865,96,68866,128,68867,126,68868,2,68870,15,68871,132,68872,32,68874,102,68875,106,68877,102,68878,80,68879,6,68880,83,68881,102,68882,104,68883,16,68885,1,68887,180,68888,66,68889,138,68890,86,68891,64,68892,139,68893,244,68894,205,68895,19,68896,102,68897,88,68898,102,68899,88,68900,102,68901,88,68902,102,68903,88,68904,235,68905,51,68906,102,68907,59,68908,70,68909,248,68910,114,68911,3,68912,249,68913,235,68914,42,68915,102,68916,51,68917,210,68918,102,68919,15,68920,183,68921,78,68922,24,68923,102,68924,247,68925,241,68926,254,68927,194,68928,138,68929,202,68930,102,68931,139,68932,208,68933,102,68934,193,68935,234,68936,16,68937,247,68938,118,68939,26,68940,134,68941,214,68942,138,68943,86,68944,64,68945,138,68946,232,68947,192,68948,228,68949,6,68950,10,68951,204,68952,184,68953,1,68954,2,68955,205,68956,19,68957,102,68958,97,68959,15,68960,130,68961,116,68962,255,68963,129,68964,195,68966,2,68967,102,68968,64,68969,73,68970,117,68971,148,68972,195,68973,66,68974,79,68975,79,68976,84,68977,77,68978,71,68979,82,68980,32,68981,32,68982,32,68983,32,69036,13,69037,10,69038,68,69039,105,69040,115,69041,107,69042,32,69043,101,69044,114,69045,114,69046,111,69047,114,69048,255,69049,13,69050,10,69051,80,69052,114,69053,101,69054,115,69055,115,69056,32,69057,97,69058,110,69059,121,69060,32,69061,107,69062,101,69063,121,69064,32,69065,116,69066,111,69067,32,69068,114,69069,101,69070,115,69071,116,69072,97,69073,114,69074,116,69075,13,69076,10,69112,172,69113,1,69114,185,69115,1,69118,85,69119,170,69120,82,69121,82,69122,97,69123,65,69604,114,69605,114,69606,65,69607,97,69608,255,69609,255,69610,255,69611,255,69612,2,69630,85,69631,170,70142,85,70143,170,71680,13,71681,10,71682,65,71683,110,71684,32,71685,111,71686,112,71687,101,71688,114,71689,97,71690,116,71691,105,71692,110,71693,103,71694,32,71695,115,71696,121,71697,115,71698,116,71699,101,71700,109,71701,32,71702,119,71703,97,71704,115,71705,110,71706,39,71707,116,71708,32,71709,102,71710,111,71711,117,71712,110,71713,100,71714,46,71715,32,71716,84,71717,114,71718,121,71719,32,71720,100,71721,105,71722,115,71723,99,71724,111,71725,110,71726,110,71727,101,71728,99,71729,116,71730,105,71731,110,71732,103,71733,32,71734,97,71735,110,71736,121,71737,32,71738,100,71739,114,71740,105,71741,118,71742,101,71743,115,71744,32,71745,116,71746,104,71747,97,71748,116,71749,32,71750,100,71751,111,71752,110,71753,39,71754,116,71755,13,71756,10,71757,99,71758,111,71759,110,71760,116,71761,97,71762,105,71763,110,71764,32,71765,97,71766,110,71767,32,71768,111,71769,112,71770,101,71771,114,71772,97,71773,116,71774,105,71775,110,71776,103,71777,32,71778,115,71779,121,71780,115,71781,116,71782,101,71783,109,71784,46,71785,255,71806,4,71807,102,71808,15,71809,182,71810,70,71811,16,71812,102,71813,139,71814,78,71815,36,71816,102,71817,247,71818,225,71819,102,71820,3,71821,70,71822,28,71823,102,71824,15,71825,183,71826,86,71827,14,71828,102,71829,3,71830,194,71831,102,71832,137,71833,70,71834,252,71835,102,71836,199,71837,70,71838,244,71839,255,71840,255,71841,255,71842,255,71843,102,71844,139,71845,70,71846,44,71847,102,71848,131,71849,248,71850,2,71851,15,71852,130,71853,71,71854,252,71855,102,71856,61,71857,248,71858,255,71859,255,71860,15,71861,15,71862,131,71863,61,71864,252,71865,102,71866,80,71867,102,71868,131,71869,232,71870,2,71871,102,71872,15,71873,182,71874,94,71875,13,71876,139,71877,243,71878,102,71879,247,71880,227,71881,102,71882,3,71883,70,71884,252,71885,187,71887,130,71888,139,71889,251,71890,185,71891,1,71893,232,71894,40,71895,252,71896,56,71897,45,71898,116,71899,30,71900,177,71901,11,71902,86,71903,190,71904,109,71905,125,71906,243,71907,166,71908,94,71909,116,71910,27,71911,3,71912,249,71913,131,71914,199,71915,21,71916,59,71917,251,71918,114,71919,232,71920,78,71921,117,71922,218,71923,102,71924,88,71925,232,71926,101,71928,114,71929,191,71930,131,71931,196,71932,4,71933,233,71934,246,71935,251,71937,32,71938,131,71939,196,71940,4,71941,139,71942,117,71943,9,71944,139,71945,125,71946,15,71947,139,71948,198,71949,102,71950,193,71951,224,71952,16,71953,139,71954,199,71955,102,71956,131,71957,248,71958,2,71959,15,71960,130,71961,219,71962,251,71963,102,71964,61,71965,248,71966,255,71967,255,71968,15,71969,15,71970,131,71971,209,71972,251,71973,102,71974,80,71975,102,71976,131,71977,232,71978,2,71979,102,71980,15,71981,182,71982,78,71983,13,71984,102,71985,247,71986,225,71987,102,71988,3,71989,70,71990,252,71991,187,71994,6,71995,142,71996,6,71998,129,71999,232,72000,190,72001,251,72002,7,72003,102,72004,88,72005,193,72006,235,72007,4,72008,1,72009,30,72011,129,72012,232,72013,14,72015,15,72016,131,72017,2,72019,114,72020,208,72021,138,72022,86,72023,64,72024,234,72028,32,72029,102,72030,193,72031,224,72032,2,72033,232,72034,17,72036,38,72037,102,72038,139,72039,1,72040,102,72041,37,72042,255,72043,255,72044,255,72045,15,72046,102,72047,61,72048,248,72049,255,72050,255,72051,15,72052,195,72053,191,72055,126,72056,102,72057,15,72058,183,72059,78,72060,11,72061,102,72062,51,72063,210,72064,102,72065,247,72066,241,72067,102,72068,59,72069,70,72070,244,72071,116,72072,58,72073,102,72074,137,72075,70,72076,244,72077,102,72078,3,72079,70,72080,28,72081,102,72082,15,72083,183,72084,78,72085,14,72086,102,72087,3,72088,193,72089,102,72090,15,72091,183,72092,94,72093,40,72094,131,72095,227,72096,15,72097,116,72098,22,72099,58,72100,94,72101,16,72102,15,72103,131,72104,76,72105,251,72106,82,72107,102,72108,139,72109,200,72110,102,72111,139,72112,70,72113,36,72114,102,72115,247,72116,227,72117,102,72118,3,72119,193,72120,90,72121,82,72122,139,72123,223,72124,185,72125,1,72127,232,72128,62,72129,251,72130,90,72131,139,72132,218,72133,195,72190,85,72191,170,3701760,248,3701761,255,3701762,255,3701763,15,3701764,255,3701765,255,3701766,255,3701767,255,3701768,255,3701769,255,3701770,255,3701771,15,3701772,255,3701773,255,3701774,255,3701775,15,3701776,255,3701777,255,3701778,255,3701779,15,3980800,248,3980801,255,3980802,255,3980803,15,3980804,255,3980805,255,3980806,255,3980807,255,3980808,255,3980809,255,3980810,255,3980811,15,3980812,255,3980813,255,3980814,255,3980815,15,3980816,255,3980817,255,3980818,255,3980819,15,4259840,84,4259841,69,4259842,83,4259843,84,4259844,79,4259845,83,4259846,32,4259847,32,4259848,32,4259849,32,4259850,32,4259851,8,4259862,252,4259863,141,4259864,196,4259865,82,4259872,66,4259873,32,4259875,73,4259877,110,4259879,102,4259881,111,4259883,15,4259885,114,4259886,114,4259888,109,4259890,97,4259892,116,4259894,105,4259896,111,4259900,110,4259904,1,4259905,83,4259907,121,4259909,115,4259911,116,4259913,101,4259915,15,4259917,114,4259918,109,4259920,32,4259922,86,4259924,111,4259926,108,4259928,117,4259932,109,4259934,101,4259936,83,4259937,89,4259938,83,4259939,84,4259940,69,4259941,77,4259942,126,4259943,49,4259944,32,4259945,32,4259946,32,4259947,22,4259949,119,4259950,251,4259951,141,4259952,196,4259953,82,4259954,196,4259955,82,4259958,252,4259959,141,4259960,196,4259961,82,4259962,3,4260352,46,4260353,32,4260354,32,4260355,32,4260356,32,4260357,32,4260358,32,4260359,32,4260360,32,4260361,32,4260362,32,4260363,16,4260365,119,4260366,251,4260367,141,4260368,196,4260369,82,4260370,196,4260371,82,4260374,252,4260375,141,4260376,196,4260377,82,4260378,3,4260384,46,4260385,46,4260386,32,4260387,32,4260388,32,4260389,32,4260390,32,4260391,32,4260392,32,4260393,32,4260394,32,4260395,16,4260397,119,4260398,251,4260399,141,4260400,196,4260401,82,4260402,196,4260403,82,4260406,252,4260407,141,4260408,196,4260409,82,4260416,66,4260417,116,4260421,255,4260422,255,4260423,255,4260424,255,4260425,255,4260426,255,4260427,15,4260429,206,4260430,255,4260431,255,4260432,255,4260433,255,4260434,255,4260435,255,4260436,255,4260437,255,4260438,255,4260439,255,4260440,255,4260441,255,4260444,255,4260445,255,4260446,255,4260447,255,4260448,1,4260449,87,4260451,80,4260453,83,4260455,101,4260457,116,4260459,15,4260461,206,4260462,116,4260464,105,4260466,110,4260468,103,4260470,115,4260472,46,4260476,100,4260478,97,4260480,87,4260481,80,4260482,83,4260483,69,4260484,84,4260485,84,4260486,126,4260487,49,4260488,68,4260489,65,4260490,84,4260491,32,4260493,119,4260494,251,4260495,141,4260496,196,4260497,82,4260498,196,4260499,82,4260502,252,4260503,141,4260504,196,4260505,82,4260506,4,4260508,12,4260864,12,4260868,108,4260869,216,4260870,84,4260871,78,4260872,14,4260873,192,4260874,62,4260875,37,41926144,162,41926145,160,41926146,208,41926147,235,41926148,229,41926149,185,41926150,51,41926151,68,41926152,135,41926153,192,41926154,104,41926155,182,41926156,183,41926157,38,41926158,153,41926159,199,41926160,220,41926161,209,41926162,203,41926163,104,41926164,68,41926165,91,41926166,184,41926167,72,41926168,147,41926169,43,41926170,164,41926171,96,41926172,113,41926173,251,41926174,189,41926175,146,41926176,128,41926184,127,41926185,48,41926186,1,41926200,66,41926202,97,41926204,115,41926206,105,41926208,99,41926210,32,41926212,100,41926214,97,41926216,116,41926218,97,41926220,32,41926222,112,41926224,97,41926226,114,41926228,116,41926230,105,41926232,116,41926234,105,41926236,111,41926238,110,41942528,69,41942529,70,41942530,73,41942531,32,41942532,80,41942533,65,41942534,82,41942535,84,41942538,1,41942540,92,41942544,184,41942545,133,41942546,103,41942547,129,41942552,255,41942553,63,41942554,1,41942560,1,41942568,34,41942576,222,41942577,63,41942578,1,41942584,69,41942585,6,41942586,37,41942587,63,41942588,97,41942589,183,41942590,49,41942591,70,41942592,143,41942593,69,41942594,217,41942595,147,41942596,11,41942597,249,41942598,143,41942599,245,41942600,223,41942601,63,41942602,1,41942608,128,41942612,128,41942616,218,41942617,128,41942618,98,41942619,43};
    char buffer[2];
    FILE * pFile;
    pFile = fopen ("drive.hdd","rw+");
    unsigned long i;
    unsigned long tsize = sizeof gpt / sizeof *gpt;
   // printf("%d\n", tsize);
    for(i = 0; i < tsize;i++)
    {
        fseek ( pFile , gpt[i] , SEEK_SET );
        i++;
        sprintf(buffer, "%c", (char)gpt[i]);
        fputs (buffer, pFile);
    }

    fclose (pFile);
}

int main()
{
    createblankimage();
    InsertGPT();
    return 0;
}