/*
	Author: Aaron Clark - EpochMod.com

    Contributors: Uro1, Robio

	Description:
	Epoch gamemode server Side map specific configs for chernarus.

    Licence:
    Arma Public License Share Alike (APL-SA) - https://www.bistudio.com/community/licenses/arma-public-license-share-alike

    Github:
    https://github.com/EpochModTeam/Epoch/tree/master/Sources/epoch_server_settngs/configs/maps/chernarus.h
*/
class Chernarus : Default
{
	worldSize = 12000;
	vehicleSpawnTypes[] = {
		{"FlatAreaCity",1},
		{"FlatAreaCitySmall",1},
		{"NameCity",2},
		{"NameVillage",1},
		{"NameCityCapital",4},
		{"Airport",5},
		{"NameLocal",2},
		{"StrongpointArea",1},
		{"VegetationBroadleaf",1},
		{"VegetationFir",1},
		{"ViewPoint",1}
	};
	traderBlds[] = { "Land_A_FuelStation_Build", "Land_A_GeneralStore_01", "Land_A_GeneralStore_01a", "Land_A_Office01", "Land_Ind_Garage01", "Land_Ind_Workshop01_04", "Land_Ind_Workshop01_L", "Land_Shed_Ind02", "Land_Tovarna2", "Land_sara_hasic_zbroj" };
	telePos[] = {
		// N [-0.286865,8.17383,-10.3098]
		// S [-0.415527,-7.05298,-10.3098]
		// E [13.5127,0.410156,-10.3098]
		// W [-14.4316,0.112793,-10.3098]
			{ "Transport_W_EPOCH", { -14.4316, 0.112793, -10.3098 }, "", { 4569.52, 4524.24, 0.201431 } }, // South West
			{ "Transport_E_EPOCH", { 13.5127, 0.410156, -10.3098 }, "", { 12077.8, 5121.92, 0.00144958 } }, // South East
			{ "Transport_N_EPOCH", { -0.286865, 8.17383, -10.3098 }, "", { 10688.6, 9428.98, 0.00144958 } } // North East
	};
	propsPos[] = {
			//debug lights
			{ "Land_PortableLight_double_F", { 1041.07,2032.96,0.249583 }, 48.2164 },
			{ "Land_PortableLight_double_F", { 1008.24,2013.97,0.217788 }, 233.858 },
			// phones
			{ "Land_PhoneBooth_02_F", { 10455.2, 2214.84, 0 }, 52.4502 },
			{ "Land_PhoneBooth_02_F", { 10480, 2350.02, 0.101999 }, 326.023 },
			{ "Land_PhoneBooth_02_F", { 10479.1, 2349.45, 0.101999 }, 326.023 },
			{ "Land_PhoneBooth_02_F", { 6809.42, 2703.85, 0.101999 }, 131.438 },
			{ "Land_PhoneBooth_02_F", { 6795.85, 2484.88, 0 }, 312.46 },
			{ "Land_PhoneBooth_02_F", { 6738.58, 2393.89, 0 }, 221.25 },
			{ "Land_PhoneBooth_02_F", { 6409.57, 2439.88, 0.0883212 }, 46.4278 },
			{ "Land_PhoneBooth_02_F", { 7496.04, 5126.04, -0.000732422 }, 182.17 },
			{ "Land_PhoneBooth_02_F", { 10132.1, 5471.31, 1.52588e-005 }, 46.4049 },
			{ "Land_TouristShelter_01_F", { 11285.3, 5492.9, 1.52588e-005 }, 160.867 },
			{ "Land_PhoneBooth_02_F", { 11282.8, 5491.04, 0 }, 162.031 },
			{ "Land_PhoneBooth_02_F", { 13359.8, 6170.49, 0 }, 176.672 },
			{ "Land_PhoneBooth_02_F", { 12102.1, 7283.6, 0 }, 96.4346 },
			{ "Land_PhoneBooth_02_F", { 10654.9, 8013.35, 0.102005 }, 303.161 },
			{ "Land_PhoneBooth_02_F", { 12022.4, 9151.21, 0 }, 47.4504 },
			{ "Land_PhoneBooth_02_F", { 12023.3, 9150.26, 0 }, 45.6474 },
			{ "Land_PhoneBooth_02_F", { 12265.6, 9479.49, 1.18411 }, 141.691 },
			{ "Land_PhoneBooth_02_F", { 6017.95, 7821.39, -0.00500488 }, 223.037 },
			{ "Land_PhoneBooth_02_F", { 6227.46, 7721.33, 0 }, 36.2285 },
			{ "Land_TouristShelter_01_F", { 1969.65, 7361.86, 0 }, 35.9378 },
			{ "Land_PhoneBooth_02_F", { 1971.84, 7359.15, -1.52588e-005 }, 127.545 },
			{ "Land_PhoneBooth_02_F", { 8785.43, 11618.8, 0 }, 100.044 },
			{ "Land_PhoneBooth_02_F", { 11242.2, 12209.9, 0 }, 118.072 },
			{ "Land_PhoneBooth_02_F", { 2706.84, 10002.9, 0 }, 12.6221 },
			// City Klen
			{ "Land_MarketShelter_F", { 11396.6, 11368.6, -0.0245056 }, 216.043 },
			{ "Land_i_Stone_Shed_V1_F", { 11392.3, 11388.6, 0 }, 216.9 },
			{ "Land_Wreck_Offroad2_F", { 11398.5, 11382.7, -0.00628662 }, 181.726 },
			{ "Land_Slums01_8m", { 11383.6, 11393.7, 0.00790405 }, 300.102 },
			{ "Land_Slums01_8m", { 11379.6, 11386.9, -0.00378418 }, 300.014 },
			{ "Land_GarbageBags_F", { 11394.1, 11382.3, 0.00491333 }, 0.000760495 },
			{ "Land_CratesPlastic_F", { 11398.8, 11372.4, -0.000823975 }, 359.71 },
			{ "Land_BarrelWater_F", { 11390, 11370.7, 0.000457764 }, 359.997 },
			{ "Land_Chapel_V2_F", { 11429, 11352.8, 0.258972 }, 126.48 },
			{ "Land_u_House_Big_02_V1_F", { 11417.7, 11362.8, 0 }, 36.7593 },
			{ "Land_Cages_F", { 11401.1, 11369.3, 0.00457764 }, 76.3813 },
			{ "Land_GarbagePallet_F", { 11426.1, 11367.2, 0.00119019 }, 0.234284 },
			{ "Land_i_Stone_HouseBig_V3_F", { 11405.1, 11375.6, 0 }, 129.339 },
			{ "Land_Slums02_4m", { 11414.1, 11377.4, 0.0258484 }, 39.2923 },
			{ "Land_Slums02_4m", { 11417, 11375.1, 0.00820923 }, 39.284 },
			{ "Land_Slums02_4m", { 11407.2, 11383.1, 0.00335693 }, 39.2788 },
			{ "Land_Slums02_4m", { 11419.8, 11372.7, 0.00827026 }, 39.284 },
			{ "Land_Wreck_Truck_dropside_F", { 11429.9, 11380.5, 0.000671387 }, 0.00762456 },
			{ "Land_d_Shop_01_V1_F", { 11453.7, 11350.2, 0.298096 }, 127.575 },
			{ "Land_Garbage_square5_F", { 11449.2, 11357.1, 3.05176e-005 }, 0.000244135 },
			{ "Land_GarbagePallet_F", { 11452.4, 11353.4, -0.0103455 }, 0.234284 },
			{ "Land_PhoneBooth_02_F", { 11459, 11364.1, 3.05176e-005 }, 124.922 },
			{ "Land_d_Addon_02_V1_F", { 11436, 11377.1, 3.05176e-005 }, 37.7171 },
			{ "Land_i_Stone_HouseSmall_V3_F", { 11464.1, 11229.2, 0 }, 206.45 },
			{ "Land_Wired_Fence_8mD_F", { 11480.2, 11247.8, 0.228699 }, 359.571 },
			{ "Land_GarbagePallet_F", { 11473.9, 11223.8, -0.0253296 }, 0.234284 },
			{ "Land_Wired_Fence_8m_F", { 11476.1, 11253.8, 0.219452 }, 359.549 },
			{ "Land_d_Shop_02_V1_F", { 11460.3, 11357.9, 0 }, 215.984 },
			{ "Land_Garbage_line_F", { 11464.2, 11351.2, 0.000854492 }, 52.1301 },
			{ "Land_WheelieBin_01_F", { 11461.5, 11349.7, 0 }, 0.0691075 },
			{ "Land_GarbagePallet_F", { 11463.7, 11363.2, -0.0102539 }, 0.234284 },
			{ "Land_GarbageContainer_closed_F", { 11463.6, 11351.2, 3.05176e-005 }, 130.585 },
			{ "Land_Timbers_F", { 11469.3, 11389.7, 0.0153503 }, 359.649 },
			{ "Land_d_Stone_HouseBig_V1_F", { 11461.3, 11389.2, 0 }, 0 },
			{ "Land_GarbagePallet_F", { 11466.6, 11393.2, -0.0388489 }, 0.234284 },
			{ "Land_Wreck_Van_F", { 11462.1, 11396.9, -0.0365906 }, 282.773 },
			{ "Land_Ancient_Wall_8m_F", { 11535.8, 11265.3, -0.125122 }, 144.692 },
			{ "Land_Ancient_Wall_4m_F", { 11556.4, 11279, -0.112091 }, 148.121 },
			{ "Land_Ancient_Wall_8m_F", { 11567.8, 11287.4, 0.0343018 }, 144.515 },
			{ "Land_HBarrier_5_F", { 11577.4, 11307.8, -0.0361633 }, 324.948 },
			{ "Land_HBarrier_5_F", { 11572.7, 11307.1, 0.0201416 }, 21.0099 },
			{ "Land_HBarrier_5_F", { 11562.9, 11309.6, 0.0461121 }, 48.0841 },
			{ "Land_HBarrier_5_F", { 11567.4, 11307.6, 0.0220337 }, 355.004 },
			{ "Land_Cargo_HQ_V3_F", { 11571.9, 11330.1, -0.0317078 }, 268 },
			{ "Land_HBarrier_5_F", { 11555.9, 11323.6, 0.0753479 }, 231.934 },
			{ "Land_HBarrier_5_F", { 11562.4, 11326.7, -0.125763 }, 49.9669 },
			{ "Land_HBarrier_5_F", { 11560.6, 11331.7, -0.0820618 }, 87.9061 },
			{ "Land_HBarrier_5_F", { 11564.1, 11322.1, 0.0942078 }, 88.1076 },
			{ "Land_HBarrier_5_F", { 11557.4, 11319, -0.0873108 }, 272.274 },
			{ "Land_HBarrier_5_F", { 11564.8, 11339.8, 0.0496521 }, 177.031 },
			{ "Land_HBarrier_5_F", { 11561.2, 11337.2, -0.0386963 }, 107.942 },
			{ "Land_HBarrier_5_F", { 11557.3, 11313.6, -0.120697 }, 271.244 },
			{ "Land_HBarrier_5_F", { 11566.1, 11318.1, 0.0227051 }, 36.0297 },
			{ "Land_HBarrier_5_F", { 11557.1, 11332, 0.112 }, 177.096 },
			{ "Land_HBarrier_3_F", { 11559.8, 11311.4, 0.0235596 }, 180.944 },
			{ "Land_PortableLight_double_F", { 11578.2, 11325.2, -0.00167847 }, 357.96 },
			{ "Land_PortableLight_double_F", { 11565.8, 11331, 0.00180054 }, 87.9936 },
			{ "Land_PortableLight_double_F", { 11579.4, 11336.2, 0.00131226 }, 229.004 },
			{ "Land_HBarrier_5_F", { 11570.4, 11340, 0.0419312 }, 176.992 },
			{ "Land_HBarrier_5_F", { 11575.8, 11340.3, -0.00686646 }, 176.886 },
			{ "Land_Cargo_Patrol_V3_F", { 11598.1, 11309, -0.261566 }, 315 },
			{ "Land_HBarrier_5_F", { 11604.1, 11309.6, 0.263916 }, 91.8105 },
			{ "Land_HBarrier_5_F", { 11592.5, 11305.2, 0.325073 }, 42.8493 },
			{ "Land_HBarrier_5_F", { 11587.8, 11308.1, 0.193237 }, 23.3538 },
			{ "Land_HBarrier_5_F", { 11602, 11304.9, -0.0116272 }, 133.822 },
			{ "Land_HBarrier_5_F", { 11582.7, 11309.1, -0.0935974 }, 179.212 },
			{ "Land_HBarrier_5_F", { 11597.2, 11303.2, 0.501007 }, 1.93882 },
			{ "Land_PortableLight_double_F", { 11600.9, 11306.2, 0.0727539 }, 311.827 },
			{ "Land_Wreck_HMMWV_F", { 11601.7, 11318.8, 0.0107117 }, 0.254173 },
			{ "Land_HBarrier_5_F", { 11580.2, 11338.1, -0.0474548 }, 230.951 },
			{ "Land_HBarrier_5_F", { 11604.3, 11315.3, 0.15564 }, 90.3624 },
			{ "Land_HBarrier_5_F", { 11605.4, 11320.6, 0.00527954 }, 108.727 },
			{ "Land_HBarrier_5_F", { 11605.2, 11325.8, -0.31781 }, 239.194 },
			{ "Land_HBarrier_5_F", { 11602.4, 11336.2, -0.191833 }, 230.52 },
			{ "Land_HBarrier_5_F", { 11587, 11332.5, 0.0287476 }, 272.043 },
			{ "Land_HBarrier_5_F", { 11588, 11327.3, -0.0723877 }, 242.815 },
			{ "Land_HBarrier_5_F", { 11604, 11331, 0.0708313 }, 271.184 },
			{ "Land_HBarrier_5_F", { 11589.1, 11322.3, -0.0202026 }, 273.918 },
			{ "Land_HBarrier_5_F", { 11586.6, 11318.1, 0.0480652 }, 330.046 },
			{ "Land_HBarrier_5_F", { 11581.5, 11316.5, 0.0766602 }, 358.179 },
			{ "Land_HBarrier_5_F", { 11584.9, 11336.1, -0.142578 }, 180.844 },
			{ "Land_Tyres_F", { 11589.7, 11334.3, -0.0446472 }, 202.731 },
			{ "Land_ToiletBox_F", { 11585.2, 11333.7, 0.00323486 }, 359.952 },
			{ "Land_ToiletBox_F", { 11582.7, 11333.7, 0.00323486 }, 359.965 },
			{ "Land_WaterTank_F", { 11584.8, 11322.4, 0.00262451 }, 270.952 },
			{ "Land_Pallet_F", { 11599.1, 11334.4, 0.0012207 }, 167.913 },
			{ "Land_PaperBox_open_empty_F", { 11593.4, 11312.9, 0.0102844 }, 166.48 },
			{ "Land_PaperBox_closed_F", { 11595.3, 11314, 0.0174255 }, 20.1509 },
			{ "Land_Pallets_stack_F", { 11599, 11336.3, 0.00747681 }, 107.491 },
			{ "Land_BarrelSand_grey_F", { 11582.4, 11318.9, 0.00143433 }, 200.963 },
			{ "Land_BarrelEmpty_F", { 11583, 11319.7, 0.00137329 }, 143.048 },
			{ "Land_wpp_Turbine_V2_F", { 11630.6, 11256.4, 3.05176e-005 }, 0 },
			{ "Land_wpp_Turbine_V2_F", { 11634.6, 11338.9, 0 }, 0 },
			{ "Land_wpp_Turbine_V2_F", { 11645.6, 11296.8, 0 }, 0 },
			// North East
			{"Land_ClutterCutter_medium_F",{10679.6,9435.62,7.62939e-006},0.0643096},
			{"Land_LampShabby_F",{10673.1,9422,-7.62939e-006},48.6578},
			{"Land_WoodenCart_F",{10677.4,9442.94,-0.0199509},0.1255},
			{"Land_Slums02_4m",{10674.5,9433.75,0.00186157},224.018},
			{"Land_Slums02_4m",{10673.4,9444.57,0.0374298},309.223},
			{"Land_Slums02_4m",{10672.1,9437.09,-0.00406647},244.438},
			{"Land_Slums02_4m",{10676.8,9446.41,0.0543442},0.119723},
			{"Land_Slums02_4m",{10671.6,9441.05,0.0140839},283.663},
			{"Land_Garbage_line_F",{10674,9443.57,0.0653152},217.23},
			{"Land_JunkPile_F",{10679.5,9444.45,0.00154877},359.709},
			{"Land_InvisibleBarrier_F",{10673.7,9444.29,0},131.152},
			{"Land_InvisibleBarrier_F",{10672,9440.85,7.62939e-006},285.049},
			{"Land_InvisibleBarrier_F",{10676.8,9445.61,0},182.439},
			{"Land_InvisibleBarrier_F",{10672.5,9437.2,0},63.0227},
			{"Land_InvisibleBarrier_F",{10674.8,9434.01,0},43.6106},
			{"Land_Campfire_F",{10679.6,9435.56,0.000465393},359.367},
			{"Land_WoodPile_F",{10675.9,9441.61,0.00293732},359.088},
			{"Land_CncBarrier_F",{10677,9430.56,3.8147e-005},38.2729},
			{"Land_Axe_F",{10676.6,9441.46,-0.00322723},73.9678},
			{"Land_HelipadEmpty_F",{10686.6,9418.95,4.57764e-005},0.0323291},
			{"Land_ClutterCutter_large_F",{10686.8,9435.84,-7.62939e-006},359.153},
			{"Land_Garbage_square5_F",{10690.6,9430.02,0.000267029},0.00641501},
			{"Land_Slums02_4m",{10684.4,9427.61,0.00271606},33.3528},
			{"Land_Slums02_4m",{10694.4,9429.21,0.0391235},116.206},
			{"Land_Slums02_4m",{10690.7,9442.29,0.0845108},48.305},
			{"Land_Slums02_4m",{10694.1,9436.97,0.0754395},67.0969},
			{"Land_Slums02_4m",{10695.1,9433.24,0.0348969},86.0347},
			{"Land_Slums02_4m",{10687.4,9444.58,0.0864868},22.401},
			{"Land_Slums02_4m",{10687.7,9426.84,0.00393677},356.182},
			{"Land_Slums02_4m",{10680.9,9446.4,0.0634003},1.21943},
			{"Land_Slums02_4m",{10681,9429.68,0.00272369},33.3528},
			{"Land_Slums02_4m",{10691.6,9426.76,-0.00839233},160.21},
			{"Land_TentDome_F",{10687.7,9442.09,-0.0244064},290.361},
			{"Land_InvisibleBarrier_F",{10680.9,9445.82,0},182.266},
			{"Land_InvisibleBarrier_F",{10684.1,9427.22,0},33.8221},
			{"Land_InvisibleBarrier_F",{10680.8,9429.46,0},33.8225},
			{"Land_InvisibleBarrier_F",{10690.3,9441.82,0},227.277},
			{"Land_InvisibleBarrier_F",{10694.5,9433.07,0},268.195},
			{"Land_InvisibleBarrier_F",{10687,9444.06,7.62939e-006},196.736},
			{"Land_InvisibleBarrier_F",{10687.7,9426.38,0},351.992},
			{"Land_InvisibleBarrier_F",{10691.6,9427.21,-7.62939e-006},334.964},
			{"Land_InvisibleBarrier_F",{10693.8,9436.79,0},248.547},
			{"Land_InvisibleBarrier_F",{10687.7,9426.38,0},352.452},
			{"Land_InvisibleBarrier_F",{10693.9,9429.35,0},297.599},
			{"Land_WorkStand_F",{10689.6,9431.71,0.00012207},0.4623},
			{"Land_FieldToilet_F",{10700.1,9449.24,0.0270386},229.999},
			{"Land_PortableLight_double_F",{10688.4,9426.99,-7.62939e-006},152.941},
			{"Land_Cages_F",{10691,9428.64,9.91821e-005},359.15},
			{"Land_WoodenTable_large_F",{10685.9,9434.16,0.000358582},143.934},
			{"Land_Pallets_stack_F",{10692.5,9430.88,0.0114899},359.393},
			{"Land_WheelCart_F",{10683.8,9441.73,0.0119476},181.87},
			{"Land_ShelvesWooden_khaki_F",{10685.5,9440.39,0.0146866},238.174},
			{"Land_CampingChair_V1_F",{10683.2,9430.95,0.00310516},0.668239},
			{"Land_CratesPlastic_F",{10699.1,9449.65,0.00570679},110.237},
			{"Land_BarrelWater_F",{10684.7,9440.29,0.0127869},2.49711},
			{"Land_Slums02_pole",{10682.8,9445.84,0.00499725},0.672715},
			{"Land_Slums02_pole",{10691.6,9440.46,0.00566864},321.615},
			{"Land_GasTank_01_khaki_F",{10690.6,9431.43,0.00012207},200.712},
			// South East
			{ "Land_spp_Mirror_F", { 12021.8, 5100.76, -7.62939e-006 }, 182.521 },
			{ "Land_spp_Mirror_Broken_F", { 12031.5, 5104.48, 0 }, 182.521 },
			{ "Land_Slums01_8m", { 12050.9, 5109.1, -0.00202179 }, 359.933 },
			{ "Land_Slums01_8m", { 12051, 5121.93, 0.0187302 }, 118.143 },
			{ "Land_Slums01_8m", { 12054.5, 5128.94, 0.0217743 }, 118.269 },
			{ "Land_WoodPile_large_F", { 12057.6, 5121.48, -9.15527e-005 }, 21.8792 },
			{ "Land_WoodPile_large_F", { 12057.1, 5119.12, 9.91821e-005 }, 203.739 },
			{ "Land_WoodPile_large_F", { 12058.9, 5123.89, -0.00171661 }, 197.098 },
			{ "Land_WoodPile_large_F", { 12055.8, 5119.65, -9.15527e-005 }, 16.6504 },
			{ "Land_Garbage_square3_F", { 12058.5, 5119.32, -0.000190735 }, 200.54 },
			{ "Land_Cages_F", { 12051, 5119.59, 0.00479126 }, 22.0683 },
			{ "Land_HelipadEmpty_F", { 12058.1, 5100.99, 0 }, 359.533 },
			{ "Land_cargo_addon02_V2_F", { 12075.8, 5110.74, 0 }, 313.277 },
			{ "Land_Slums01_8m", { 12067.6, 5108.54, -0.00462341 }, 194.501 },
			{ "Land_Slums01_8m", { 12067, 5122.79, -0.00128937 }, 106.496 },
			{ "Land_Slums01_8m", { 12078.5, 5109.96, -0.00531769 }, 302.472 },
			{ "Land_Slums01_8m", { 12080.8, 5125.66, -0.0038147 }, 62.4229 },
			{ "Land_Slums01_8m", { 12071.9, 5107.49, -0.00380707 }, 194.501 },
			{ "Land_Wreck_Offroad_F", { 12074.4, 5127.79, 0.0411682 }, 325.773 },
			{ "Land_LampShabby_F", { 12070.6, 5109.13, -0.0195618 }, 0 },
			{ "Land_Wreck_Car3_F", { 12078.6, 5126.01, 0.0244293 }, 146.6 },
			{ "Land_TentDome_F", { 12076.8, 5111.69, 3.8147e-005 }, 359.62 },
			{ "Land_Garbage_line_F", { 12078, 5124.46, -0.0770569 }, 142.344 },
			{ "Land_JunkPile_F", { 12073.8, 5125.85, -0.0101395 }, 359.544 },
			{ "Land_InvisibleBarrier_F", { 12065.4, 5108.95, 0 }, 16.7308 },
			{ "Land_InvisibleBarrier_F", { 12074.6, 5106.78, 0 }, 19.2329 },
			{ "Land_InvisibleBarrier_F", { 12081.8, 5123.84, 0 }, 243.383 },
			{ "Land_InvisibleBarrier_F", { 12070.3, 5107.81, 0 }, 16.7344 },
			{ "Land_InvisibleBarrier_F", { 12079.7, 5111.63, 0 }, 122.723 },
			{ "Land_InvisibleBarrier_F", { 12080.1, 5127.47, 0 }, 239.065 },
			{ "Land_InvisibleBarrier_F", { 12077.2, 5107.93, 0 }, 122.631 },
			{ "Land_InvisibleBarrier_F", { 12069.1, 5128.14, 0 }, 122.279 },
			{ "Land_InvisibleBarrier_F", { 12067.6, 5124.65, 0 }, 112.368 },
			{ "Land_InvisibleBarrier_F", { 12066.5, 5120.62, 0 }, 104.748 },
			{ "Land_Campfire_F", { 12070.3, 5113.58, 0.00119019 }, 0 },
			{ "Land_WoodPile_F", { 12073, 5117.34, -0.00229645 }, 236.097 },
			{ "Land_CncBarrier_F", { 12065.4, 5116.71, 0 }, 103.32 },
			{ "Land_CncBarrier_stripes_F", { 12082.8, 5121.11, 0.0150528 }, 90.5238 },
			{ "Land_CncBarrier_stripes_F", { 12082.3, 5117.84, 0.0185394 }, 104.536 },
			{ "Land_CncBarrier_stripes_F", { 12064.5, 5112.14, 0.0020752 }, 279.748 },
			{ "Land_CncBarrier_stripes_F", { 12081.2, 5114.26, 0.0116425 }, 300.824 },
			{ "Land_WheelCart_F", { 12073, 5108.21, 0.00278473 }, 301.42 },
			{ "Land_Slums01_pole", { 12068.4, 5126.9, 0.000801086 }, 260.084 },
			{ "Land_Portable_generator_F", { 12069.8, 5108.61, 0.00123596 }, 359.87 },
			{ "Land_CampingChair_V2_F", { 12076.1, 5109.27, 0.00286865 }, 99.2684 },
			{ "Land_CratesPlastic_F", { 12072.4, 5118.94, 3.05176e-005 }, 359.993 },
			{ "Land_BarrelWater_F", { 12073.1, 5110.06, 0.00231171 }, 359.255 },
			{ "Land_Axe_fire_F", { 12077.1, 5109.95, -0.00322723 }, 359.907 },
			{ "Land_Slums01_8m", { 12070.5, 5130.62, 0.0177002 }, 300.964 },
			{ "Land_Slums01_8m", { 12075.7, 5131.46, 0.00196838 }, 40.0636 },
			{ "Land_Slums01_8m", { 12060.6, 5133.4, 0.000160217 }, 168.792 },
			{ "Land_LampShabby_F", { 12063, 5131.89, 0 }, 169.228 },
			{ "Land_InvisibleBarrier_F", { 12073.8, 5133.13, -7.62939e-006 }, 221.588 },
			{ "Land_InvisibleBarrier_F", { 12071.2, 5131.82, 0 }, 122.469 },
			{ "Land_InvisibleBarrier_F", { 12077.1, 5130.37, 0 }, 221.588 },
			{ "Land_Slums01_pole", { 12072.6, 5134.17, 0.00662994 }, 359.468 },
			{ "Land_Slums01_pole", { 12064.7, 5134.13, 0.0012207 }, 359.827 },
			{ "Land_Garbage_square5_F", { 12093.4, 5120.34, 0.00907135 }, 359.692 },
			{ "Land_FieldToilet_F", { 12093.7, 5119.73, 0.0153198 }, 155.607 },
			{ "Land_Grave_rocks_F", { 12116.8, 5130.7, 0 }, 0 },
			// South West
			{ "Flag_US_F", { 4542.15, 4522, -1.52588e-005 }, 209.275 },
			{ "Land_HelipadEmpty_F", { 4552.98, 4515.85, 0 }, 0 },
			{ "Land_ToiletBox_F", { 4556.27, 4549.86, 0.175018 }, 0.00193372 },
			{ "Land_Timbers_F", { 4564.65, 4516.04, 0.199997 }, 325.751 },
			{ "Land_Wreck_Van_F", { 4573.34, 4506.86, 0.199997 }, 151.285 },
			{ "Land_Garbage_square5_F", { 4588.59, 4516.25, 0.199997 }, 0 },
			{ "Land_LampStreet_small_F", { 4577.73, 4514.35, 0.199997 }, 239.902 },
			{ "Land_Pipes_large_F", { 4581.84, 4521.72, 0.174988 }, 146.546 },
			{ "Land_Pallets_F", { 4586.84, 4514.64, 0.275681 }, 335.695 },
			{ "Land_EngineCrane_01_F", { 4581.71, 4510.71, 0.174988 }, 95.9295 },
			{ "Land_GarbageContainer_open_F", { 4582.15, 4523.48, 0.175003 }, 151.569 },
			{ "Land_Workbench_01_F", { 4585.25, 4521.76, 0.174988 }, 50.0718 },
			{ "Barrels", { 4589.08, 4516.4, 0.225494 }, 239.1 },
			{ "SignAd_SponsorS_Redstone_F", { 4585.1, 4511.84, 0 }, 142.53 },
			{ "Land_WoodenTable_large_F", { 4579.26, 4513.71, 0.175003 }, 142.285 },
			{ "Land_Sink_F", { 4573.95, 4519.14, 0.175003 }, 51.2154 },
			{ "Land_CncBarrier_stripes_F", { 4578.63, 4513.11, 0.199997 }, 231.189 },
			{ "Land_CncBarrier_stripes_F", { 4577.53, 4518.75, 0.199997 }, 325.531 },
			{ "Land_CncBarrier_stripes_F", { 4576.61, 4515.73, 0.199997 }, 231.189 },
			{ "Land_WoodenTable_small_F", { 4578.02, 4515.24, 0.174988 }, 319.098 },
			{ "Land_WeldingTrolley_01_F", { 4585.96, 4513.3, 0.174988 }, 236.669 },
			{ "Land_Bench_F", { 4573.12, 4520.15, 0.175003 }, 232.492 },
			{ "Land_ToolTrolley_01_F", { 4586.23, 4520.34, 0.175018 }, 228.625 },
			{ "Land_ToolTrolley_02_F", { 4587.01, 4519.39, 0.174973 }, 320.682 },
			{ "Land_PlasticCase_01_large_F", { 4588.17, 4518.07, 0.174988 }, 321.256 },
			{ "Land_WheelieBin_01_F", { 4581.21, 4522.58, 0.175003 }, 139.325 },
			{ "Land_WaterCooler_01_old_F", { 4575.21, 4518.16, 0.175064 }, 226.8 },
			{ "Land_ChairWood_F", { 4583.23, 4521.15, 0.175018 }, 270.935 },
			{ "Land_BarrelWater_F", { 4574.63, 4517.66, 0.175049 }, 354.242 },
			{ "Land_PlasticCase_01_medium_F", { 4579.23, 4513.68, 0.175003 }, 120.138 },
			{ "Land_Tyre_F", { 4576.11, 4505.51, 0.0297241 }, 358.563 },
			{ "Land_GasTank_01_blue_F", { 4588.49, 4515.58, 0.175034 }, 327.133 },
			{ "Land_GasTank_01_yellow_F", { 4588.23, 4515.09, 0.175034 }, 247.551 },
			{ "Land_PlasticCase_01_small_F", { 4578.02, 4515.24, 0.174988 }, 137.793 },
			{ "Land_SurvivalRadio_F", { 4586.07, 4521.12, 0.941803 }, 269.968 },
			{ "Fridge_01_closed_F", { 4576.98, 4516.48, 0.175064 }, 238.777 },
			// Boat Vendor
			{ "Land_WorkStand_F", { 13678.8, 4032.35, -0.00124931 }, 359.908 },
			{ "Land_WheelCart_F", { 13671.7, 4037.31, 0.00549078 }, 0.0201131 },
			{ "Land_TentDome_F", { 13661.6, 4027.37, -0.014101 }, 359.452 },
			{ "Land_Pier_Box_F", { 13696.5, 4033.33, 0.599987 }, 0 },
			{ "Land_Campfire_F", { 13681.2, 4035.13, 0.00247145 }, 0.1179 },
			{ "Land_Wreck_Traw_F", { 13710.9, 3862.6, 0.242525 }, 0.611813 },
			{ "Land_WavePowerPlant_F", { 13878.7, 3932.25, 9.53635 }, 345.483 },
			// Stary Sobor Military
			{ "Land_HBarrierBig_F", { 6296.66, 7795.88, -0.00692749 }, 219.542 },
			{ "Land_HBarrier_5_F", { 6290.16, 7793.43, 0.0203857 }, 218.553 },
			{ "Land_HBarrier_5_F", { 6297.02, 7790.79, 0.110291 }, 130.462 },
			{ "Land_HBarrier_5_F", { 6285.72, 7796.98, 0.0177002 }, 219.491 },
			{ "Land_PaperBox_closed_F", { 6292.73, 7799.57, -0.00213623 }, 221.545 },
			{ "Land_WaterTank_F", { 6299.27, 7797.89, 0.00109863 }, 219.43 },
			{ "Land_HBarrierBig_F", { 6272.08, 7813.91, 0.00427246 }, 193.847 },
			{ "Land_HBarrierBig_F", { 6297.31, 7802.14, -0.00527954 }, 307.543 },
			{ "Land_HBarrierBig_F", { 6276.2, 7808.03, 0.000549316 }, 83.8871 },
			{ "Land_HBarrierBig_F", { 6280.2, 7801.39, -0.00228882 }, 37.4585 },
			{ "Land_HBarrier_5_F", { 6288.43, 7824.38, 0.00488281 }, 217.5 },
			{ "Land_HBarrier_5_F", { 6293.44, 7822.44, -0.00402832 }, 175.45 },
			{ "Land_PortableLight_double_F", { 6278.42, 7808.37, 0 }, 261.498 },
			{ "Land_Pallets_stack_F", { 6291.09, 7800.92, 0.000518799 }, 203.664 },
			{ "Land_HBarrierBig_F", { 6293.92, 7846.05, -0.000823975 }, 37.5492 },
			{ "Land_HBarrier_5_F", { 6288.87, 7844.77, 0.0146179 }, 125.61 },
			{ "Land_HBarrier_5_F", { 6287.4, 7836.51, 0.00183105 }, 36.5104 },
			{ "Land_HBarrier_5_F", { 6285.68, 7840.26, 0.00210571 }, 125.565 },
			{ "Land_PortableLight_double_F", { 6288.7, 7841.98, 0 }, 125.471 },
			{ "Land_Cargo_Patrol_V1_F", { 6291.25, 7840.74, 0 }, 125.498 },
			{ "Land_BagBunker_Large_F", { 6284.77, 7830.87, 0.000396729 }, 125.544 },
			{ "Land_Cargo_Patrol_V1_F", { 6315.33, 7798.51, 0 }, 306.498 },
			{ "Land_HBarrierBig_F", { 6304.61, 7794.26, -0.00469971 }, 164.31 },
			{ "Land_HBarrierBig_F", { 6312.32, 7793.03, -0.00683594 }, 219.624 },
			{ "Land_HBarrier_5_F", { 6317.45, 7794.16, 0.0157166 }, 307.501 },
			{ "Land_HBarrier_5_F", { 6320.83, 7798.61, 0.0254822 }, 307.457 },
			{ "Land_PortableLight_double_F", { 6317.92, 7796.97, 0 }, 307.493 },
			{ "Land_PortableLight_double_F", { 6309.06, 7797.2, 0 }, 188.5 },
			{ "Land_ToiletBox_F", { 6314.53, 7793.88, 0.000274658 }, 132.45 },
			{ "Land_BagBunker_Large_F", { 6326.43, 7813.56, -0.000640869 }, 307.499 },
			{ "Land_HBarrier_5_F", { 6319.26, 7802.51, -0.00213623 }, 219.502 },
			{ "Land_HBarrier_5_F", { 6318.51, 7814.62, -0.00192261 }, 219.497 },
			{ "Land_HBarrier_5_F", { 6329.87, 7820.18, 0.0175171 }, 299.066 },
			{ "Land_HBarrier_5_F", { 6301.78, 7807.92, -0.00479126 }, 307.524 },
			{ "Land_HBarrier_5_F", { 6313.51, 7816.39, -0.000457764 }, 171.499 },
			{ "Land_TentA_F", { 6325.46, 7824.22, 9.15527e-005 }, 94.5132 },
			{ "Land_TentA_F", { 6323.97, 7829.37, 0.00863647 }, 82.3408 },
			{ "Land_Campfire_F", { 6317.24, 7829.11, -0.0592346 }, 26.001 },
			{ "Land_WoodPile_F", { 6312.93, 7826.2, 0.00164795 }, 1.00009 },
			{ "Land_WaterBarrel_F", { 6304.27, 7808.83, -3.05176e-005 }, 136.44 },
			{ "Land_Sack_F", { 6326, 7822.95, 0.010437 }, 353.513 },
			{ "Land_Basket_F", { 6325.17, 7822.36, 9.15527e-005 }, 137.301 },
			{ "Land_MetalBarrel_F", { 6305.22, 7808.31, 0 }, 244.342 },
			{ "Land_BarrelTrash_grey_F", { 6305.45, 7807.6, 0.000549316 }, 313.436 },
			{ "Land_BarrelEmpty_grey_F", { 6304.88, 7807.12, 0 }, 307.487 },
			{ "Land_WoodenLog_F", { 6317.17, 7827.17, 0.000335693 }, 77.1906 },
			{ "Land_Axe_F", { 6313.81, 7826.37, -0.00338745 }, 248.999 },
			{ "Land_CanisterFuel_F", { 6313.75, 7825.28, 6.10352e-005 }, 34.3382 },
			{ "Land_Canteen_F", { 6323.97, 7823.34, 9.15527e-005 }, 347.753 },
			{ "Land_TinContainer_F", { 6317.53, 7827.55, 0.00189209 }, 235.145 },
			{ "Land_Camping_Light_F", { 6317.18, 7827.1, 0.481659 }, 78.9907 },
			{ "Land_HBarrierBig_F", { 6325.11, 7838.57, 0.00241089 }, 219.523 },
			{ "Land_HBarrierBig_F", { 6301.64, 7845.13, -0.00299072 }, 342.464 },
			{ "Land_HBarrierBig_F", { 6309.64, 7843.89, -0.00140381 }, 37.508 },
			{ "Land_HBarrierBig_F", { 6317.6, 7841.65, 0.00088501 }, 187.754 },
			{ "Land_HBarrierBig_F", { 6309.25, 7837.67, 0.0010376 }, 125.494 },
			{ "Land_HBarrierBig_F", { 6328.96, 7831.3, 0.000183105 }, 265.544 },
			{ "Land_HBarrier_5_F", { 6305.08, 7831.75, 0.013855 }, 306.499 },
			{ "Land_TentA_F", { 6323.29, 7833.88, -3.05176e-005 }, 56.9963 },
			{ "Land_ToiletBox_F", { 6306.66, 7840.59, 0.000305176 }, 37.4933 },
			{ "Land_Pallets_F", { 6305.09, 7836.28, 0.00402832 }, 301.498 },
			{ "Land_WoodenBox_F", { 6315.52, 7830.8, 0.000152588 }, 135.939 },
			{ "Land_HBarrierBig_F", { 6355.05, 7758.61, 0.01651 }, 180.899 },
			{ "Land_HBarrier_3_F", { 6341.05, 7763.39, -0.024231 }, 230.09 },
			{ "Land_PaperBox_closed_F", { 6355.89, 7769.34, 0.000213623 }, 300.988 },
			{ "Land_HBarrierBig_F", { 6356.52, 7790.86, -0.0449524 }, 90.0002 },
			{ "Land_HBarrierBig_F", { 6334.66, 7777.03, 0.000701904 }, 260.011 },
			{ "Land_HBarrierBig_F", { 6356.92, 7782.55, -0.0672607 }, 89.0069 },
			{ "Land_HBarrier_5_F", { 6358.21, 7796.04, -0.00231934 }, 178 },
			{ "Land_HBarrier_5_F", { 6359.02, 7777.34, -0.0152588 }, 177.997 },
			{ "Land_HBarrier_3_F", { 6345.2, 7793.81, 0.00137329 }, 299 },
			{ "Land_HBarrier_3_F", { 6349.54, 7771.55, -0.00192261 }, 230.001 },
			{ "Land_HBarrier_3_F", { 6332.6, 7798.95, 0.00323486 }, 299 },
			{ "Land_PaperBox_closed_F", { 6357.05, 7771.16, 0 }, 270 },
			{ "Land_Pallets_stack_F", { 6348.26, 7791.23, 3.05176e-005 }, 225.003 },
			{ "Land_Pallets_stack_F", { 6348.28, 7788.84, 0.00216675 }, 263.003 },
			{ "Land_HBarrierBig_F", { 6350.34, 7814.14, -0.000396729 }, 134.998 },
			{ "Land_Razorwire_F", { 6352.86, 7822.44, 0.000793457 }, 196.803 },
			{ "Land_HBarrier_5_F", { 6330.96, 7824.57, -0.0115967 }, 68.0471 },
			{ "Land_HBarrierBig_F", { 6375.54, 7759.76, 0.0117493 }, 178.122 },
			{ "Land_HBarrier_3_F", { 6386.83, 7765.76, 0.0414429 }, 128.913 },
			{ "Land_Cargo_Tower_V1_F", { 6364.71, 7786.91, 0.00137329 }, 269 },
			{ "Land_HBarrierBig_F", { 6371.91, 7791.33, -0.0449524 }, 90 },
			{ "Land_HBarrierBig_F", { 6372.13, 7782.9, -0.0224304 }, 90.0001 },
			{ "Land_HBarrier_5_F", { 6370.43, 7777.76, -0.0215149 }, 177.996 },
			{ "Land_HBarrier_5_F", { 6369.94, 7796.64, -0.00372314 }, 179 },
			{ "Land_HBarrier_3_F", { 6380.18, 7795.26, 0.00366211 }, 244.001 },
			{ "Land_HBarrier_3_F", { 6378.41, 7772.92, -0.0100403 }, 129 },
			{ "Land_ToiletBox_F", { 6360.83, 7789.36, -3.05176e-005 }, 269.005 },
			{ "Land_WaterTank_F", { 6375.86, 7785.65, 0.00012207 }, 0.000633659 },
			{ "Land_WaterTank_F", { 6375.74, 7788.49, 0.000183105 }, 0.000302211 },
			{ "Land_PortableLight_double_F", { 6360.99, 7782.88, 8.57773 }, 88.0059 },
			{ "Land_PortableLight_double_F", { 6363.69, 7791.14, 4.66943 }, 272 },
			{ "Land_HBarrierBig_F", { 6375.25, 7815.47, 0.00146484 }, 226.006 },
			{ "Land_Razorwire_F", { 6361.44, 7821.18, -0.0170898 }, 353.994 },
			{ "Land_HBarrier_3_F", { 6363.49, 7807.3, 0.00195313 }, 357.999 },
			{ "Land_HBarrierBig_F", { 6390.12, 7781.39, -0.000366211 }, 275 },
			{ "Land_HBarrier_3_F", { 6391.39, 7801.7, 0.00195313 }, 244 },
			// NW Airfield
			{ "Land_Airport_Tower_F", { 4327.37, 10905.9, 0 }, 61.1295 },
			{ "Land_Offices_01_V1_F", { 4573.46, 9819.88, 0 }, 244.926 },
			{ "Land_i_Barracks_V2_F", { 4598.97, 9720.41, 0 }, 100.719 },
			// Wind Farm
			{"Land_wpp_Turbine_V2_F", { 5449.11, 13270.3, -0.00350952 }, 0 },
			{"Land_wpp_Turbine_V2_F", { 5477.64, 13280.7, 3.05176e-005 }, 0 },
			{"Land_spp_Transformer_F", { 5478.29, 13300.4, 0 }, 0},
			{"Land_dp_transformer_F", { 5482.13, 13300.9, -3.05176e-005 }, 0 },
			{"Land_wpp_Turbine_V2_F", { 5503.9, 13291.3, 0.0585327 }, 0 },
			// Old Hero small military post.
			{ "Land_HBarrier_5_F", { 12899.8, 12748.4, 0.02034 }, 354.796 },
			{ "Land_HBarrier_5_F", { 12894.1, 12748, 0.013916 }, 354.737 },
			{ "Land_Cargo_Patrol_V2_F", { 12897.5, 12750.2, 0 }, 85.8348 },
			{ "Land_HBarrier_5_F", { 12898.8, 12763.6, 0.00309753 }, 354.799 },
			{ "Land_HBarrier_5_F", { 12891.9, 12751.4, 0.132568 }, 85.9089 },
			{ "Land_HBarrier_5_F", { 12893.1, 12763.1, 0.0252838 }, 354.791 },
			{ "Land_Garbage_square5_F", { 12898.5, 12754.1, 0.403336 }, 356.786 },
			{ "Land_HBarrier_3_F", { 12894.2, 12753.5, -0.00849915 }, 176.727 },
			{ "Land_Sign_WarningMilitaryArea_F", { 12878.3, 12753.7, 0 }, 86.9098 },
			{ "Land_Cargo_HQ_V2_F", { 12921.2, 12747.4, 1.52588e-005 }, 354.835 },
			{ "Land_HBarrier_5_F", { 12906.8, 12739.5, 0.185944 }, 32.8205 },
			{ "Land_HBarrier_5_F", { 12928.2, 12739.4, -0.0260773 }, 353.715 },
			{ "Land_HBarrier_5_F", { 12922.9, 12739.1, -0.00527954 }, 353.753 },
			{ "Land_HBarrier_5_F", { 12917.2, 12738.6, -0.00486755 }, 353.757 },
			{ "Land_HBarrier_5_F", { 12912.2, 12738.2, -0.0137329 }, 353.744 },
			{ "Land_HBarrier_5_F", { 12901.8, 12744.8, 0.200394 }, 86.3687 },
			{ "Land_Garbage_square5_F", { 12909.3, 12746, 1.08038 }, 303.574 },
			{ "Land_HBarrier_3_F", { 12903.3, 12741.9, -0.0743713 }, 214.774 },
			{ "Land_Cargo_Patrol_V2_F", { 12924.7, 12773.8, 0 }, 210.835 },
			{ "Land_ScrapHeap_2_F", { 12915.2, 12759.6, 0.0301971 }, 169.814 },
			{ "Land_Loudspeakers_F", { 12915.6, 12750.6, 0 }, 356.835 },
			{ "Land_ScrapHeap_1_F", { 12921.4, 12760.3, 0.0139313 }, 349.801 },
			{ "Land_HBarrier_5_F", { 12921.6, 12756, -0.0275116 }, 353.819 },
			{ "Land_HBarrier_5_F", { 12929.5, 12770.1, 0.118179 }, 84.8375 },
			{ "Land_HBarrier_5_F", { 12929.9, 12764.5, 0.142838 }, 84.8577 },
			{ "Land_HBarrier_5_F", { 12918.7, 12776.7, -0.0367279 }, 353.82 },
			{ "Land_HBarrier_5_F", { 12913.2, 12776.2, -0.0335236 }, 353.831 },
			{ "Land_HBarrier_5_F", { 12919.8, 12776.8, -0.0367126 }, 353.82 },
			{ "Land_HBarrier_5_F", { 12916, 12755.5, -0.0212097 }, 353.818 },
			{ "Land_HBarrier_5_F", { 12927.1, 12773.9, 0.00674438 }, 30.819 },
			{ "Land_HBarrier_5_F", { 12927.1, 12756.5, -0.0491486 }, 353.797 },
			{ "Land_HBarrier_5_F", { 12900.6, 12767.1, 0.0879211 }, 86.4439 },
			{ "Land_HBarrier_5_F", { 12903.9, 12773.6, -0.0444031 }, 307.87 },
			{ "Land_HBarrier_5_F", { 12901.7, 12752, 0.132278 }, 86.4207 },
			{ "Land_HBarrier_5_F", { 12907.7, 12775.7, -0.0238953 }, 353.847 },
			{ "Land_HBarrier_5_F", { 12905.2, 12754.4, 0.00515747 }, 354.814 },
			{ "Land_GarbageBags_F", { 12904.7, 12751, -0.0263214 }, 26.6415 },
			{ "Land_Garbage_square5_F", { 12917.5, 12761.8, 0.00386047 }, 19.7988 },
			{ "Land_HBarrier_3_F", { 12901.2, 12770.2, 0.0333557 }, 130.704 },
			{ "Land_HBarrier_3_F", { 12923.5, 12776.2, -0.00253296 }, 212.829 },
			{ "Land_JunkPile_F", { 12907.2, 12769.1, 0.00367737 }, 354.816 },
			{ "Land_Pallets_stack_F", { 12909, 12767.7, 0.000915527 }, 128.791 },
			{ "Land_CratesShabby_F", { 12910.4, 12768, 0.0017395 }, 245.684 },
			{ "Land_GarbageBarrel_01_F", { 12914.8, 12763.5, -0.00370789 }, 182.87 },
			{ "Land_HBarrier_5_F", { 12931.5, 12742.2, -0.338425 }, 264.829 },
			{ "Land_HBarrier_5_F", { 12931.2, 12747.7, -0.208801 }, 264.774 },
			{ "Land_HBarrier_5_F", { 12930.4, 12758.9, 0.141861 }, 84.8576 },
			{ "Land_HBarrier_5_F", { 12930.8, 12753.3, -0.150925 }, 264.812 }
	};
	staticNpcPos[] = {
			// South West
			{ "C_man_hunter_1_F", { 4585.05, 4516.51, 0.201431 }, 273.197 },
			// South East
			{ "C_man_hunter_1_F", { 12075.5, 5109.38, 0.00123596 }, 313.34},
			// North East
			{ "C_man_hunter_1_F", { 10686.8,9437.87,0.00151825 }, 231.976},
			//Boat Trader
			{ "C_man_hunter_1_F", { 13694, 4033.22, 0.0021317 }, 93.5839  }
	};
};
