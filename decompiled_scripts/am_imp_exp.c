#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	float fLocal_60 = 0f;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	struct<14> Local_75 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_89 = 0;
	bool bLocal_90 = 0;
	bool bLocal_91 = 0;
	int iLocal_92 = 0;
	bool bLocal_93 = 0;
	bool bLocal_94 = 0;
	bool bLocal_95 = 0;
	bool bLocal_96 = 0;
	bool bLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	bool bLocal_100 = 0;
	bool bLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	bool bLocal_107 = 0;
	bool bLocal_108 = 0;
	int iLocal_109 = 0;
	bool bLocal_110 = 0;
	bool bLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 16;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	int iLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	int iLocal_290[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_301 = 0;
	bool bLocal_302 = 0;
	bool bLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	float fLocal_311 = 0f;
	float fLocal_312 = 0f;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338[4] = { 0, 0, 0, 0 };
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<12> Local_360 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0 } ;
	struct<70> Local_372 = { 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, -1, 0, 0, -15, -1, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	struct<4> Local_448[32];
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	char* sLocal_580 = NULL;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_18 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_60 = ((0.05f + 0.275f) - 0.01f);
	iLocal_106 = 1;
	bLocal_108 = true;
	bLocal_110 = true;
	iLocal_115 = -1;
	bLocal_303 = true;
	bLocal_304 = true;
	iLocal_307 = -1;
	iLocal_308 = -1;
	iLocal_332 = -1;
	iLocal_335 = -1;
	if (!func_541(ScriptParam_0))
	{
		func_537();
	}
	iLocal_347[0] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-891.3f, 807.9f, 188.1f));
	iLocal_347[1] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-276.5f, -206.3f, 38.4f));
	iLocal_347[2] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1485.5f, -644.5f, 30.1f));
	iLocal_347[3] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1746.3f, -939.5f, 7.7f));
	iLocal_347[4] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-2106.4f, -345.3f, 13f));
	iLocal_347[5] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1520f, 74.4f, 61.3f));
	iLocal_347[6] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1333f, -286f, 40.3f));
	iLocal_347[7] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1178.1f, 54.8f, 53.9f));
	iLocal_347[8] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1298.7f, -359.4f, 36.7f));
	iLocal_347[9] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-355.2f, 147.5f, 75.8f));
	iLocal_347[10] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-982.1f, -1064.7f, 2.2f));
	iLocal_347[11] = ZONE::GET_ZONE_POPSCHEDULE(ZONE::GET_ZONE_AT_COORDS(-1313.1f, -1560.2f, 4.3f));
	while (true)
	{
		func_536();
		bLocal_91 = false;
		bLocal_93 = false;
		bLocal_96 = false;
		bLocal_99 = false;
		bLocal_101 = false;
		Global_2540384.f_1747 = 0;
		if (func_526() || func_525())
		{
			func_537();
		}
		if (func_519())
		{
			if (!func_518())
			{
				if (!func_517())
				{
					if (func_515())
					{
						if (!iLocal_89)
						{
							func_511();
							func_510(&Local_360, 5);
							func_509();
							bLocal_110 = true;
							bLocal_111 = true;
							if (MISC::IS_BIT_SET(iLocal_577, 1))
							{
								MISC::CLEAR_BIT(&iLocal_577, 1);
							}
							iLocal_89 = 1;
							iLocal_335 = -999;
						}
					}
				}
			}
			else if (!func_517())
			{
				if (!bLocal_111)
				{
					if (!func_508(&uLocal_288))
					{
						func_507(&uLocal_288, 0, 0);
					}
					else if (func_506(&uLocal_288, 100, 0))
					{
						if (!MISC::IS_BIT_SET(iLocal_577, 1))
						{
							if (func_515())
							{
								func_496(&Local_360, 5, Global_2097152[func_505() /*10931*/].f_6175.f_37);
								bLocal_110 = false;
								bLocal_111 = true;
								iLocal_89 = 1;
								iLocal_335 = -999;
							}
						}
					}
				}
			}
			func_399();
			func_395();
			func_381();
			func_374();
			func_265();
			func_176();
		}
		func_172();
		func_142();
		func_76();
		func_73();
		if (!iLocal_113)
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 471.9266f, -1308.596f, 28.2359f) < 1000f)
			{
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvcheetah"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvjb700"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uventity"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvmonroe"), true);
				ENTITY::CREATE_MODEL_HIDE(471.9266f, -1308.596f, 28.2359f, 2f, joaat("v_ilev_uvtext"), true);
				iLocal_113 = 1;
			}
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	int iVar1;
	
	if (!bLocal_108)
	{
	}
	else
	{
		if (iLocal_109 >= Local_448)
		{
			iLocal_109 = 0;
			MISC::CLEAR_BIT(&iLocal_577, 10);
			MISC::CLEAR_BIT(&(Local_372.f_23), 7);
			MISC::CLEAR_BIT(&iLocal_577, 11);
			MISC::CLEAR_BIT(&iLocal_577, 23);
			if (MISC::IS_BIT_SET(Local_372.f_23, 0))
			{
				MISC::SET_BIT(&(Local_372.f_23), 1);
				MISC::CLEAR_BIT(&(Local_372.f_23), 3);
			}
		}
		iVar0 = iLocal_109;
		if (Local_448[iVar0 /*4*/].f_1 == 2)
		{
			iVar1 = 0;
			while (iVar1 < 5)
			{
				if (!Local_372[iVar1] == -1)
				{
					if (!Local_372.f_6[iVar1])
					{
						if (Local_372[iVar1] == Local_448[iVar0 /*4*/])
						{
							if (Local_372[iVar1] == Local_372.f_28)
							{
								func_72();
							}
							Local_372.f_33 = 0;
							Local_372.f_32++;
						}
					}
				}
				iVar1++;
			}
		}
		if (MISC::IS_BIT_SET(Local_372.f_23, 0))
		{
			if (!MISC::IS_BIT_SET(Local_372.f_23, 7))
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
				{
					if (Local_448[iVar0 /*4*/].f_3 > 0 || func_71(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)), 6))
					{
						if (Local_448[iVar0 /*4*/].f_3 < 3)
						{
							MISC::SET_BIT(&(Local_372.f_23), 7);
						}
					}
				}
			}
		}
		if (MISC::IS_BIT_SET(Local_372.f_23, 0))
		{
			if (!MISC::IS_BIT_SET(iLocal_577, 11))
			{
				if (MISC::IS_BIT_SET(Local_448[iVar0 /*4*/].f_2, 2))
				{
					MISC::SET_BIT(&iLocal_577, 11);
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_577, 21))
			{
				if (!MISC::IS_BIT_SET(iLocal_577, 3))
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
					{
						if (MISC::IS_BIT_SET(Local_448[iVar0 /*4*/].f_2, 3))
						{
							MISC::SET_BIT(&iLocal_577, 21);
						}
					}
				}
			}
		}
		iLocal_109++;
		if (iLocal_109 >= Local_448)
		{
			MISC::SET_BIT(&iLocal_577, 10);
			if (MISC::IS_BIT_SET(Local_372.f_23, 7) || MISC::IS_BIT_SET(iLocal_577, 23))
			{
				MISC::CLEAR_BIT(&(Local_372.f_23), 1);
			}
			if (MISC::IS_BIT_SET(iLocal_577, 11))
			{
				MISC::SET_BIT(&(Local_372.f_23), 3);
			}
			if (MISC::IS_BIT_SET(iLocal_577, 21))
			{
				MISC::SET_BIT(&(Local_372.f_23), 6);
			}
		}
	}
	if (func_70())
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_372.f_29) > 180000)
		{
			func_69();
		}
	}
	switch (Local_372.f_20)
	{
		case 0:
			func_66();
			Local_372.f_32++;
			Local_372.f_20 = 1;
			func_65();
			break;
		
		case 1:
			if (func_64())
			{
				iLocal_331 = NETWORK::GET_NETWORK_TIME();
				Local_372.f_20 = 2;
			}
			else if (Local_372.f_28 == -1)
			{
				func_72();
			}
			break;
		
		case 2:
			if (!Local_372.f_17 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_331) > Global_262145.f_11477)
			{
				Local_372.f_20 = 0;
			}
			break;
		
		case 3:
			break;
	}
	func_2();
}

void func_2()
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	switch (Local_372.f_26)
	{
		case 0:
			if (!MISC::IS_BIT_SET(Local_372.f_23, 0))
			{
				if (bLocal_303)
				{
					if (bLocal_304)
					{
						if (Global_2540384.f_1720)
						{
							MISC::CLEAR_BIT(&(Local_372.f_23), 2);
							MISC::CLEAR_BIT(&(Local_372.f_23), 6);
							MISC::CLEAR_BIT(&iLocal_577, 21);
							NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(0);
							Local_372.f_34 = 0;
							MISC::SET_BIT(&(Local_372.f_23), 0);
							Global_2540384.f_1720 = 0;
						}
					}
					else if (Local_372.f_27 == -15)
					{
						MISC::CLEAR_BIT(&(Local_372.f_23), 2);
						MISC::CLEAR_BIT(&(Local_372.f_23), 6);
						MISC::CLEAR_BIT(&iLocal_577, 21);
						NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(0);
						Local_372.f_34 = 0;
						iVar4 = func_63();
						func_49(&(Local_372.f_27), func_62(iVar4), func_61(iVar4), func_60(iVar4), func_59(iVar4), func_58(iVar4), func_56(iVar4));
						func_48(&(Local_372.f_27), 0, MISC::GET_RANDOM_INT_IN_RANGE(0, 60), MISC::GET_RANDOM_INT_IN_RANGE(0, 8), 1, 0, 0);
					}
					else if (!func_47(6))
					{
						if (!func_508(&uLocal_320))
						{
							func_507(&uLocal_320, 0, 0);
						}
						else if (func_506(&uLocal_320, 10000, 0))
						{
							func_46(&uLocal_320);
							if (func_42(Local_372.f_27))
							{
								MISC::SET_BIT(&(Local_372.f_23), 0);
							}
						}
					}
				}
			}
			else if (Local_372.f_67 == 0)
			{
				if (func_36(1, 1, 1))
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_372.f_24))
					{
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_372.f_24);
					}
					Local_372.f_24 = -1;
					iLocal_306 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
					iVar5 = func_33();
					if (iVar5 != 0)
					{
						Local_372.f_67 = iVar5;
						NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
						Local_372.f_34 = 1;
					}
				}
			}
			else if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
			{
				if (func_32(Local_372.f_67))
				{
					if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_372.f_22))
					{
						if (func_21(&Var0, &fVar3))
						{
							if (func_18(&(Local_372.f_22), Local_372.f_67, Var0, fVar3, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0))
							{
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
								{
									if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_372.f_22), "MPBitset"))
									{
										iVar6 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_372.f_22), "MPBitset");
									}
									MISC::SET_BIT(&iVar6, 5);
									DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_372.f_22), "MPBitset", iVar6);
								}
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
								{
									if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_372.f_22), "MPBitset"))
									{
										iVar7 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_372.f_22), "MPBitset");
									}
									MISC::SET_BIT(&iVar7, 10);
									DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_372.f_22), "MPBitset", iVar7);
								}
								if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
								{
									DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_372.f_22), "Not_Allow_As_Saved_Veh", 1);
								}
								MISC::SET_BIT(&(Local_372.f_23), 0);
								MISC::CLEAR_BIT(&(Local_372.f_23), 2);
								MISC::CLEAR_BIT(&(Local_372.f_23), 4);
								MISC::CLEAR_BIT(&(Local_372.f_23), 3);
								MISC::CLEAR_BIT(&iLocal_577, 11);
								MISC::CLEAR_BIT(&(Local_372.f_23), 6);
								MISC::SET_BIT(&iLocal_577, 23);
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_372.f_67);
								Local_372.f_26 = 1;
								func_46(&(Local_372.f_30));
								func_507(&(Local_372.f_30), 0, 0);
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_372.f_22), 7);
								VEHICLE::SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(NETWORK::NET_TO_VEH(Local_372.f_22), true);
								VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_372.f_67, true);
								NETWORK::_0x3FA36981311FA4FF(Local_372.f_22, true);
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Local_372.f_23, 2))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_372.f_22), false))
					{
						Local_75.f_2 = -1825697370;
						func_16(Local_75, func_17(1));
						MISC::SET_BIT(&(Local_372.f_23), 2);
					}
				}
			}
			if (MISC::IS_BIT_SET(iLocal_577, 3) || (MISC::IS_BIT_SET(iLocal_577, 10) && MISC::IS_BIT_SET(Local_372.f_23, 1)))
			{
				if (!MISC::IS_BIT_SET(iLocal_577, 3))
				{
					if (!MISC::IS_BIT_SET(Local_372.f_23, 2))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_372.f_22), false))
							{
								Local_75.f_2 = -1825697370;
								func_16(Local_75, func_17(1));
								MISC::SET_BIT(&(Local_372.f_23), 2);
							}
						}
					}
				}
				Local_372.f_26 = 2;
			}
			if (func_15(NETWORK::NET_TO_VEH(Local_372.f_22)))
			{
				Local_372.f_26 = 2;
				Local_75.f_2 = -1198496331;
				func_16(Local_75, func_17(1));
			}
			if (!MISC::IS_BIT_SET(Local_372.f_23, 4))
			{
				if (func_506(&(Local_372.f_30), 360000, 0))
				{
					MISC::SET_BIT(&(Local_372.f_23), 4);
					func_46(&(Local_372.f_30));
					func_507(&(Local_372.f_30), 0, 0);
				}
			}
			else if (MISC::IS_BIT_SET(iLocal_577, 10))
			{
				if (!MISC::IS_BIT_SET(Local_372.f_23, 3))
				{
					if (func_508(&(Local_372.f_30)))
					{
						if (func_506(&(Local_372.f_30), 120000, 0))
						{
							Local_372.f_26 = 2;
							Local_75.f_2 = -1198496331;
							func_16(Local_75, func_17(1));
						}
					}
					else
					{
						func_507(&(Local_372.f_30), 0, 0);
					}
				}
				else if (func_508(&(Local_372.f_30)))
				{
					func_46(&(Local_372.f_30));
				}
			}
			if (MISC::IS_BIT_SET(Local_372.f_23, 6))
			{
				if (!MISC::IS_BIT_SET(iLocal_577, 3))
				{
					if (Local_372.f_26 == 1)
					{
						Local_372.f_26 = 2;
					}
				}
			}
			if (func_11(6))
			{
				if (Local_372.f_26 == 1)
				{
					Local_372.f_26 = 2;
				}
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
			{
				if (func_10(Local_372.f_22))
				{
					func_9(&(Local_372.f_22));
					Local_372.f_26 = 3;
				}
			}
			else
			{
				Local_372.f_26 = 3;
			}
			break;
		
		case 3:
			if (MISC::IS_BIT_SET(iLocal_577, 10))
			{
				if (MISC::IS_BIT_SET(Local_372.f_23, 1))
				{
					Local_372.f_26 = 0;
					MISC::CLEAR_BIT(&(Local_372.f_23), 0);
					Local_372.f_27 = -15;
					if (Local_372.f_67 != 0)
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_372.f_67, false);
					}
					Local_372.f_67 = 0;
					if (bLocal_304)
					{
						func_7(func_8(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("AM_LAUNCHER", -1, 0)), 0);
					}
				}
			}
			break;
	}
	func_3();
}

void func_3()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_372.f_69)
		{
			case 0:
				if (MISC::IS_BIT_SET(Local_372.f_23, 8))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
					{
						if (!func_6())
						{
							if (ENTITY::GET_ENTITY_COLLISION_DISABLED(NETWORK::NET_TO_VEH(Local_372.f_22)))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(NETWORK::NET_TO_VEH(Local_372.f_22), 1204.053f, -3102.311f, 1.770506f, 1204.265f, -3121.974f, 17.92032f, 31.625f, false, true, 0))
								{
									if (!MISC::IS_BIT_SET(Local_372.f_23, 9))
									{
										MISC::SET_BIT(&(Local_372.f_23), 9);
									}
								}
							}
						}
						else if (MISC::IS_BIT_SET(Local_372.f_23, 9))
						{
							MISC::CLEAR_BIT(&(Local_372.f_23), 9);
						}
					}
				}
				break;
			}
	}
	if (MISC::IS_BIT_SET(Local_372.f_23, 9))
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
		{
			if (func_4(Local_372.f_22))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_372.f_22))
				{
					ENTITY::SET_ENTITY_COLLISION(NETWORK::NET_TO_VEH(Local_372.f_22), true, false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_372.f_22), 1);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_372.f_22), false);
					NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_372.f_22), true, 1);
					MISC::CLEAR_BIT(&(Local_372.f_23), 9);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_372.f_22);
				}
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_372.f_23), 9);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_372.f_23), 9);
		}
	}
}

int func_4(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_5(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_5(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_6()
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
	{
		if (func_4(Local_372.f_22))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_372.f_22), -1, false);
			if (iVar0 != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1)
{
	struct<3> Var0;
	
	Var0.x = 889825697;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

int func_8(int iParam0)
{
	var uVar0;
	
	if (iParam0 != -1)
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

void func_9(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_10(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

bool func_11(int iParam0)
{
	return !func_12(iParam0);
}

int func_12(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6661)
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6662)
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6663)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6664)
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 0) || MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_26, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_13(4))
			{
				return 0;
			}
			if (func_71(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_13(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_14(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_2425869[iVar0 /*443*/].f_212, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_14(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2440049.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_15(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec1", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec1"))
			{
				return 1;
			}
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombdec", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombdec"))
			{
				return 1;
			}
		}
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("bombowner", 3))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "bombowner"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_16(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	Param0 = -1949011582;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam14 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam14);
	}
}

int func_17(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_14(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_18(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(Param2, fVar0, false, false, false, false, false, false);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, bParam7, bParam6, bParam14);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2540384.f_6583 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, true);
			}
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar1, bParam10);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, false);
				}
				if (bParam13)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), true);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam9);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, true);
			if (bParam12)
			{
				VEHICLE::SET_CAR_BOOT_OPEN(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_19(Param2, fParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_19(struct<3> Param0, float fParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_20(PLAYER::PLAYER_ID(), Param0, iParam4) > -1)
	{
		if ((Global_2405074.f_2914[1 /*6*/].f_5 == iParam5 && Global_2405074.f_2914[1 /*6*/].f_4 == iParam4) && SYSTEM::VDIST(Global_2405074.f_2914[1 /*6*/], Param0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405074.f_2914[iVar0 /*6*/] = { Global_2405074.f_2914[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405074.f_2914[1 /*6*/] = { Param0 };
		Global_2405074.f_2914[1 /*6*/].f_3 = fParam3;
		Global_2405074.f_2914[1 /*6*/].f_4 = iParam4;
		Global_2405074.f_2914[1 /*6*/].f_5 = iParam5;
	}
}

int func_20(int iParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = iParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				Var2 = { Param1 };
				if (MISC::ABSF((Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - Var2.f_2)) < 2f)
				{
					Var2.f_2 = Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (SYSTEM::VDIST(Global_2417956.f_461[iVar0 /*11*/][iVar1 /*5*/], Var2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_21(var uParam0, var uParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (!func_31(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_306)
	{
		case 0:
			Var0 = { -810.8889f, -126.9419f, 33f };
			Var3 = { -807.2521f, -116.098f, 38f };
			Var6 = { -809.0935f, -121.9038f, 36.504f };
			fVar9 = 240.8011f;
			break;
		
		case 1:
			Var0 = { -804.004f, -1317.293f, 0.0005f };
			Var3 = { -797.881f, -1310.998f, 7.0005f };
			Var6 = { -801.6295f, -1313.865f, 4.0005f };
			fVar9 = 350.3062f;
			break;
		
		case 2:
			Var0 = { -194.8607f, -1955.005f, 25.6205f };
			Var3 = { -189.4078f, -1945.248f, 28.6205f };
			Var6 = { -191.5592f, -1950.239f, 26.6205f };
			fVar9 = 288.8187f;
			break;
		
		case 3:
			Var0 = { -2966.875f, 459.3981f, 13.4644f };
			Var3 = { -2961.456f, 466.0484f, 16.1725f };
			Var6 = { -2963.887f, 462.7986f, 14.2156f };
			fVar9 = 30.4415f;
			break;
		
		case 4:
			Var0 = { -420.6335f, 1217.742f, 322.7591f };
			Var3 = { -411.9892f, 1220.346f, 326.6421f };
			Var6 = { -416.0102f, 1219.771f, 324.6421f };
			fVar9 = 230.4509f;
			break;
		
		case 5:
			Var0 = { -1634.708f, -890.849f, 6.97f };
			Var3 = { -1633.903f, -879.869f, 9.1264f };
			Var6 = { -1634.006f, -885.3531f, 8.0518f };
			fVar9 = 321.31f;
			break;
		
		case 6:
			Var0 = { -338.4312f, -947.4233f, 28.0788f };
			Var3 = { -331.5926f, -944.408f, 32.0788f };
			Var6 = { -334.8547f, -945.2789f, 30.0788f };
			fVar9 = 69.0442f;
			break;
		
		case 7:
			Var0 = { 1093.925f, 245.6548f, 77.9908f };
			Var3 = { 1094.243f, 255.0715f, 82.8556f };
			Var6 = { 1093.686f, 250.4772f, 79.8556f };
			fVar9 = 328.5602f;
			break;
		
		case 8:
			Var0 = { -1407.823f, 58.1796f, 50.8018f };
			Var3 = { -1400.19f, 63.9074f, 54.3222f };
			Var6 = { -1404.459f, 62.1459f, 52.0258f };
			fVar9 = 241.2814f;
			break;
		
		case 9:
			Var0 = { -1230.324f, -1656.814f, 2.0412f };
			Var3 = { -1226.429f, -1648.143f, 4.1986f };
			Var6 = { -1228.901f, -1652.397f, 3.1204f };
			fVar9 = 305.0972f;
			break;
	}
	if (!func_31(Var0, 0f, 0f, 0f, 0))
	{
		if (iLocal_306 < 10)
		{
			if (Local_372.f_24 == -1)
			{
				Local_372.f_24 = NETWORK::NETWORK_ADD_ENTITY_AREA(Var0, Var3);
			}
			else if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_372.f_24))
			{
				if (NETWORK::_0x4DF7CFFF471A7FB1(Local_372.f_24))
				{
					if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Local_372.f_24))
					{
						if (!func_22(Var6, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
						{
							*uParam0 = { Var6 };
							*uParam1 = fVar9;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_372.f_24);
							Local_372.f_24 = -1;
							return 1;
						}
						else
						{
							iLocal_306++;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_372.f_24);
							Local_372.f_24 = -1;
						}
					}
					else
					{
						iLocal_306++;
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_372.f_24);
						Local_372.f_24 = -1;
					}
				}
			}
		}
		else
		{
			iLocal_306 = 0;
		}
	}
	return 0;
}

int func_22(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_14(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_27(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_14(iVar1, 1, 1))
		{
			if (!func_24(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_23(iVar1) || !bParam10) && !Global_2425869[iVar1 /*443*/].f_263)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_27(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_27(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_23(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2425869[iParam0 /*443*/].f_249)
	{
		return 1;
	}
	return 0;
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_25(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1590682[iParam0 /*883*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
	}
	if (Global_1312876[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312757[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_26()
{
	return Global_1312763;
}

Vector3 func_27(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_30() && Global_1590682[iVar0 /*883*/].f_854) && !func_29(Global_1590682[iVar0 /*883*/].f_855))
	{
		return Global_1590682[iVar0 /*883*/].f_855;
	}
	return func_28(iParam0);
}

Vector3 func_28(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_29(struct<3> Param0)
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_30()
{
	return Global_2451787.f_18;
}

bool func_31(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.x == Param3.x && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_32(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_33()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (Global_262145.f_2335 != 0)
	{
		iVar1 = Global_262145.f_2335;
		if (STREAMING::IS_MODEL_IN_CDIMAGE(iVar1))
		{
			if (STREAMING::IS_MODEL_A_VEHICLE(iVar1))
			{
				iVar0 = iVar1;
			}
		}
	}
	if (iVar0 == 0)
	{
		iVar2 = func_35(&Local_372);
		iVar0 = func_34(iVar2);
	}
	return iVar0;
}

int func_34(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return joaat("zion");
		
		case 1:
			return joaat("serrano");
		
		case 2:
			return joaat("jackal");
		
		case 3:
			return joaat("schafter2");
		
		case 4:
			return joaat("dubsta");
		
		case 5:
			return joaat("f620");
		
		case 6:
			return joaat("schwarzer");
		
		case 7:
			return joaat("rocoto");
		
		case 8:
			return joaat("sentinel2");
		
		case 9:
			return joaat("felon2");
		
		case 10:
			return joaat("comet2");
		
		case 11:
			return joaat("banshee");
		
		case 12:
			return joaat("surano");
		
		case 13:
			return joaat("coquette");
		
		case 14:
			return joaat("carbonizzare");
		
		case 15:
			return joaat("exemplar");
		
		case 16:
			return joaat("feltzer2");
		
		case 17:
			return joaat("bullet");
		
		case 18:
			return joaat("superd");
		
		case 19:
			return joaat("infernus");
		
		default:
	}
	return 0;
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = (iVar1 + iVar0);
		if (iVar2 >= 5)
		{
			iVar2 = (iVar2 - 5);
		}
		if (!(*uParam0)[iVar2] == -1)
		{
			if (uParam0->f_6[iVar2] == 0)
			{
				return (*uParam0)[iVar2];
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_36(int iParam0, bool bParam1, bool bParam2)
{
	return func_37(1, iParam0, 1, bParam1, bParam2);
}

int func_37(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_1389439, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_41(iParam0) - func_40(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_40(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_41(iParam0) - func_39(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_40(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_41(iParam0) - func_40(iParam0, 1));
		}
		if (!bParam4 && Global_1590682[PLAYER::PLAYER_ID() /*883*/] != 3)
		{
			iVar1 = (iVar1 - func_38(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_38(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_39(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389439.f_1;
			break;
		
		case 1:
			return Global_1389439.f_2;
			break;
		
		case 2:
			return Global_1389439.f_3;
			break;
	}
	return 0;
}

int func_40(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425869[iVar0 /*443*/].f_213;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425869[iVar0 /*443*/].f_214;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2425869[iVar0 /*443*/].f_215;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1389447;
			break;
		
		case 1:
			return Global_1389448;
			break;
		
		case 2:
			return Global_1389449;
			break;
	}
	return 0;
}

bool func_42(int iParam0)
{
	return func_43(func_63(), iParam0);
}

int func_43(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_44(iParam1) || !func_44(iParam0))
	{
		return 1;
	}
	iVar0 = func_56(iParam0);
	iVar1 = func_56(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_58(iParam0);
	iVar1 = func_58(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_59(iParam0);
	iVar1 = func_59(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_60(iParam0);
	iVar1 = func_60(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_61(iParam0);
	iVar1 = func_61(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_62(iParam0);
	iVar1 = func_62(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_44(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_62(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_61(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_60(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_56(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_58(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_59(iParam0);
	if (iVar5 < 1 || iVar5 > func_45(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_45(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

void func_46(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_47(int iParam0)
{
	return !func_12(iParam0);
}

void func_48(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_56(*uParam0);
	iVar1 = func_58(*uParam0);
	iVar2 = func_59(*uParam0);
	iVar3 = func_60(*uParam0);
	iVar4 = func_61(*uParam0);
	iVar5 = func_62(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_45(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_45(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_49(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_49(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_55(uParam0, iParam1);
	func_54(uParam0, iParam2);
	func_53(uParam0, iParam3);
	func_52(uParam0, iParam5);
	func_51(uParam0, iParam4);
	func_50(uParam0, iParam6);
}

void func_50(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_51(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_58(*uParam0);
	iVar1 = func_56(*uParam0);
	if (iParam1 < 1 || iParam1 > func_45(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_52(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_53(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_54(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_55(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_56(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_57(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_57(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_58(int iParam0)
{
	return iParam0 & 15;
}

int func_59(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_60(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_61(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_62(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_63()
{
	var uVar0;
	
	func_55(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_54(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_53(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_51(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_52(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_50(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

int func_64()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!Local_372.f_6[iVar0])
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_65()
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(Local_372.f_23, 5))
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Local_372.f_35[iVar0] = -1;
			iVar0++;
		}
		MISC::SET_BIT(&(Local_372.f_23), 5);
	}
}

void func_66()
{
	int iVar0;
	
	func_510(&Local_372, 5);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Local_372.f_12[iVar0] = func_67();
		iVar0++;
	}
	Local_372.f_33 = 1;
}

int func_67()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	while (func_68(iVar0))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	}
	return iVar0;
}

int func_68(int iParam0)
{
	int iVar0;
	
	if (!iParam0 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (Local_372.f_12[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

void func_69()
{
	int iVar0;
	
	iVar0 = func_35(&Local_372);
	if (iVar0 != Local_372.f_28)
	{
		Local_372.f_28 = iVar0;
		Local_372.f_29 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_70()
{
	if (Local_372.f_20 > 0)
	{
		if (Local_372[0] != Local_372[1])
		{
			return 1;
		}
	}
	return 0;
}

bool func_71(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_212, iParam1);
}

void func_72()
{
	Local_372.f_29 = 0;
}

void func_73()
{
	int iVar0;
	
	if (func_70())
	{
		if (Global_2540384.f_4447 == 0 || MISC::IS_BIT_SET(Global_2540384.f_4448, 0))
		{
			if (!func_508(&uLocal_326) || func_506(&uLocal_326, 2000, 0))
			{
				iVar0 = func_35(&Local_360);
				if (iVar0 > -1)
				{
					Global_2540384.f_4447 = func_34(iVar0);
					func_46(&uLocal_324);
					func_507(&uLocal_324, 0, 0);
					if (MISC::IS_BIT_SET(Global_2540384.f_4448, 0))
					{
						MISC::CLEAR_BIT(&(Global_2540384.f_4448), 0);
					}
				}
				else
				{
					func_46(&uLocal_326);
					func_507(&uLocal_326, 0, 0);
				}
			}
		}
		else if (Global_2540384.f_4447 != 0)
		{
			if (func_506(&uLocal_324, 20000, 0))
			{
				if (!func_74(&Local_360, Global_2540384.f_4447))
				{
					Global_2540384.f_4447 = 0;
				}
				func_46(&uLocal_324);
				func_507(&uLocal_324, 0, 0);
			}
		}
	}
}

int func_74(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(iParam1);
	if (!iVar0 == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!(*uParam0)[iVar1] == -1)
			{
				if (!uParam0->f_6[iVar1])
				{
					if ((*uParam0)[iVar1] == iVar0)
					{
						return 1;
					}
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_75(int iParam0)
{
	switch (iParam0)
	{
		case joaat("zion"):
			return 0;
		
		case joaat("serrano"):
			return 1;
		
		case joaat("jackal"):
			return 2;
		
		case joaat("schafter2"):
			return 3;
		
		case joaat("dubsta"):
			return 4;
		
		case joaat("f620"):
			return 5;
		
		case joaat("schwarzer"):
			return 6;
		
		case joaat("rocoto"):
			return 7;
		
		case joaat("sentinel2"):
			return 8;
		
		case joaat("felon2"):
			return 9;
		
		case joaat("comet2"):
			return 10;
		
		case joaat("banshee"):
			return 11;
		
		case joaat("surano"):
			return 12;
		
		case joaat("coquette"):
			return 13;
		
		case joaat("carbonizzare"):
			return 14;
		
		case joaat("exemplar"):
			return 15;
		
		case joaat("feltzer2"):
			return 16;
		
		case joaat("bullet"):
			return 17;
		
		case joaat("superd"):
			return 18;
		
		case joaat("infernus"):
			return 19;
		
		default:
	}
	return -1;
}

void func_76()
{
	int iVar0;
	
	if (((((bLocal_95 || bLocal_96) || bLocal_97) || bLocal_99) || bLocal_98) || bLocal_100)
	{
		if (((((Global_2540384.f_28.f_41 || func_139(PLAYER::PLAYER_ID(), 1, 0)) || func_138(PLAYER::PLAYER_ID())) || !func_136()) || func_124()) || func_118())
		{
			bLocal_95 = false;
			bLocal_97 = false;
			bLocal_96 = false;
			bLocal_99 = false;
			bLocal_98 = false;
			func_117();
		}
	}
	if ((func_116("FM_CTUT_RSP") || func_116("FM_CTUT_REP")) || func_116("FM_CTUT_LLS"))
	{
		if (!func_115() || func_118())
		{
			func_117();
		}
	}
	if (bLocal_100)
	{
		if (!func_116("FM_IHELP_LCP"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_98())
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						if (func_97())
						{
							func_91("FM_IHELP_LCP", 0);
						}
					}
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_577, 18))
	{
		if (func_116("FM_IHELP_LCP"))
		{
			func_84("FM_IHELP_LCP");
		}
	}
	if (bLocal_95)
	{
		if (!func_116("FM_CTUT_MOD"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_98())
				{
					if (MISC::IS_BIT_SET(iLocal_330, 2))
					{
						if (func_97())
						{
							func_91("FM_CTUT_MOD", 0);
						}
					}
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_577, 18))
	{
		if (func_116("FM_CTUT_MOD"))
		{
			func_84("FM_CTUT_MOD");
		}
	}
	if (bLocal_97)
	{
		if (!func_116("FM_CTUT_RSP"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!func_139(PLAYER::PLAYER_ID(), 1, 0))
						{
							if (func_97())
							{
								if (func_115())
								{
									func_91("FM_CTUT_RSP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_577, 18))
	{
		if (func_116("FM_CTUT_RSP"))
		{
			func_84("FM_CTUT_RSP");
		}
	}
	if (bLocal_98)
	{
		if (!func_116("FM_CTUT_RSP"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (CAM::IS_SCREEN_FADED_IN())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!func_139(PLAYER::PLAYER_ID(), 1, 0))
						{
							if (func_97())
							{
								if (func_115())
								{
									func_91("FM_CTUT_REP", 0);
								}
							}
						}
					}
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_577, 18))
	{
		if (func_116("FM_CTUT_REP"))
		{
			func_84("FM_CTUT_REP");
		}
	}
	if (bLocal_99)
	{
		if (!func_116("FM_CTUT_LLS"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_98() || func_77())
				{
					if (func_97())
					{
						if (func_115())
						{
						}
					}
				}
			}
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_577, 18))
	{
		if (func_116("FM_CTUT_LLS"))
		{
			func_84("FM_CTUT_LLS");
		}
	}
	if (bLocal_96)
	{
		if (!func_116("FM_IMP_SIM"))
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (func_98() || func_77())
				{
					if (MISC::IS_BIT_SET(iLocal_330, 3))
					{
						if (!iLocal_102)
						{
							if (func_97())
							{
								func_91("FM_IMP_SIM", 0);
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										iLocal_345 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									}
								}
							}
						}
						else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iVar0 != iLocal_345)
								{
									iLocal_102 = 0;
									func_46(&uLocal_328);
								}
							}
						}
					}
				}
			}
		}
		else if (!func_508(&uLocal_328))
		{
			func_507(&uLocal_328, 0, 0);
		}
		else if (func_506(&uLocal_328, 20000, 0))
		{
			func_117();
			iLocal_102 = 1;
		}
	}
	else if (!MISC::IS_BIT_SET(iLocal_577, 18))
	{
		if (func_116("FM_IMP_SIM"))
		{
			func_84("FM_IMP_SIM");
		}
	}
}

bool func_77()
{
	return (((((func_78(39) || func_78(40)) || func_78(41)) || func_78(42)) || func_78(43)) || func_78(44));
}

int func_78(int iParam0)
{
	return func_79(iParam0, 6, 1);
}

int func_79(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_99007.f_1364[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_83() == 0)
		{
			return MISC::IS_BIT_SET(func_80(func_82(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_111858.f_668[iParam0], iParam1);
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 11771)
	{
		if (iParam2 == 0)
		{
		}
		iVar0 = Global_2551832[iParam0 /*3*/][func_81(iParam1)];
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_81(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
		if (iVar1 > -1)
		{
			Global_2551544 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2551544 = 1;
		}
	}
	return iVar0;
}

int func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 10099;
			break;
		
		case 45:
			return 3809;
			break;
		
		case 46:
			return 5384;
			break;
		
		case 47:
			return 6156;
			break;
		
		case 48:
			return 7233;
			break;
		
		case 49:
			return 7879;
			break;
		
		case 52:
			return 8913;
			break;
		
		case 50:
			return 8266;
			break;
		
		case 51:
			return 8268;
			break;
		
		case 53:
			return 9553;
			break;
		
		default:
			break;
	}
	return 11771;
}

int func_83()
{
	return Global_30968;
}

void func_84(char* sParam0)
{
	bool bVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_90())
	{
		if (Global_1312603 == 11)
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
			{
				return;
			}
			bVar0 = MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_16));
		}
		else
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
			{
				return;
			}
			bVar0 = MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_12));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_85();
}

void func_85()
{
	func_87();
	func_86(0);
}

void func_86(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312603 = 20;
	StringCopy(&(Global_1312603.f_1), "", 32);
	Global_1312603.f_9 = 0;
	if (bVar0)
	{
		Global_1312603.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312603.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312603.f_12), "", 16);
	StringCopy(&(Global_1312603.f_16), "", 64);
	StringCopy(&(Global_1312603.f_32), "", 64);
	Global_1312603.f_52 = 0;
	Global_1312603.f_53 = 0;
	Global_1312603.f_54 = 0;
	Global_1312603.f_55 = -1;
	Global_1312603.f_56 = 0;
	Global_1312603.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_87()
{
	if (!func_89())
	{
	}
	if (func_90())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312603.f_12));
		func_88();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_88()
{
	switch (Global_1312603)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312603.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312603.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 13:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 11:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312603.f_16));
			return;
		
		case 14:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 15:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_48));
			return;
		
		case 16:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			return;
		
		case 19:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_16));
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312603.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312603.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312603.f_32));
			return;
		
		default:
	}
}

bool func_89()
{
	if (!func_90())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312603.f_12));
	func_88();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_90()
{
	if (Global_1312603 == 20)
	{
		return 0;
	}
	return 1;
}

void func_91(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_95(sParam0))
	{
		return;
	}
	func_85();
	Global_1312603 = 0;
	StringCopy(&(Global_1312603.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312603.f_9 = MISC::GET_HASH_KEY(&(Global_1312603.f_1));
	StringCopy(&(Global_1312603.f_12), sParam0, 16);
	func_94();
	func_93(bParam1);
	func_92();
}

void func_92()
{
	MISC::SET_BIT(&(Global_1312603.f_59), 1);
}

void func_93(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312603.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312603.f_59), 0);
}

void func_94()
{
	Global_1312603.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312603.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_95(char* sParam0)
{
	if (!func_90())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		return func_96(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_12));
}

bool func_96(char* sParam0)
{
	if (!func_90())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312603.f_16));
}

bool func_97()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
	{
		if (func_4(Local_372.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_372.f_22)))
				{
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_578, 0))
	{
		if (!MISC::IS_BIT_SET(iLocal_578, 1))
		{
			bVar0 = true;
		}
		else if (!MISC::IS_BIT_SET(iLocal_578, 2))
		{
			bVar0 = true;
		}
		else if (!MISC::IS_BIT_SET(iLocal_578, 3))
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
			MISC::SET_BIT(&iLocal_578, 0);
		}
	}
	return bVar0;
}

int func_98()
{
	if ((((((((((((((((((!func_14(PLAYER::PLAYER_ID(), 1, 1) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_114(8, -1)) || func_114(15, -1)) || func_113()) || func_114(3, -1)) || func_139(PLAYER::PLAYER_ID(), 1, 0)) || func_112()) || func_115()) || func_111()) || func_110()) || func_108()) || func_107()) || HUD::IS_MESSAGE_BEING_DISPLAYED()) || func_106() > 0) || !func_136()) || func_99()) || func_118())
	{
		return 0;
	}
	return 1;
}

int func_99()
{
	if (func_71(PLAYER::PLAYER_ID(), 8))
	{
		return 1;
	}
	if (func_71(PLAYER::PLAYER_ID(), 10))
	{
		return 1;
	}
	if (func_71(PLAYER::PLAYER_ID(), 12))
	{
		return 1;
	}
	if (func_71(PLAYER::PLAYER_ID(), 14))
	{
		return 1;
	}
	if (func_71(PLAYER::PLAYER_ID(), 13))
	{
		return 1;
	}
	if (func_105())
	{
		return 1;
	}
	if (func_104())
	{
		return 1;
	}
	if (!func_103() && !func_102())
	{
		if (!func_101())
		{
			if (!func_100())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_100()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(Global_2540384.f_1791, 7))
	{
		return 1;
	}
	iVar0 = Global_1388185[func_81(-1)];
	if (MISC::IS_BIT_SET(iVar0, 6))
	{
		MISC::SET_BIT(&(Global_2540384.f_1791), 7);
		return 1;
	}
	if (func_103())
	{
		return 1;
	}
	if (func_102())
	{
		return 1;
	}
	return 0;
}

bool func_101()
{
	return MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_142, 2);
}

bool func_102()
{
	return Global_1312884;
}

bool func_103()
{
	return Global_1312886;
}

int func_104()
{
	if (MISC::IS_BIT_SET(Global_2540384.f_1791, 28) && !MISC::IS_BIT_SET(Global_2540384.f_1791, 29))
	{
		return 1;
	}
	return 0;
}

bool func_105()
{
	return MISC::IS_BIT_SET(Global_2540384.f_1792, 3);
}

int func_106()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_197;
}

int func_107()
{
	if (Global_21005 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_108()
{
	return func_109();
}

bool func_109()
{
	return Global_1370593.f_40 == 3;
}

bool func_110()
{
	return Global_2440049.f_3158.f_578;
}

bool func_111()
{
	return Global_99007.f_352 > 0;
}

bool func_112()
{
	return MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, 0);
}

var func_113()
{
	return Global_2394809;
}

bool func_114(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1377236.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1377236.f_1048, iParam0);
}

bool func_115()
{
	return MISC::GET_GAME_TIMER() <= Global_22550.f_5878 + 100;
}

int func_116(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_90())
	{
		return 0;
	}
	if (Global_1312603 == 11)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return func_95(sParam0);
}

void func_117()
{
	if (!func_90())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312603.f_9)
	{
		return;
	}
	func_85();
}

int func_118()
{
	if (func_123(17))
	{
		return 1;
	}
	if (func_123(0))
	{
		return 1;
	}
	if (func_122(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (func_119(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_119(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_120(Global_2425869[iParam0 /*443*/].f_314.f_6) == 14;
			}
		}
	}
	return 0;
}

int func_120(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case joaat("MPSV_LP0_31"):
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
	}
	return -1;
}

int func_121()
{
	return -1;
}

int func_122(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 || (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

bool func_123(int iParam0)
{
	int iVar0;
	
	iVar0 = func_80(2481, -1, 0);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

int func_124()
{
	if (func_128())
	{
		return 1;
	}
	if (func_125(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	if (func_122(PLAYER::PLAYER_ID(), 1))
	{
		return 1;
	}
	return 0;
}

int func_125(int iParam0, int iParam1)
{
	if (Global_1630317[iParam0 /*595*/].f_11.f_33 != -1 && func_126(Global_1630317[iParam0 /*595*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1630317[iParam0 /*595*/].f_11.f_32 != -1)
	{
		if (func_126(Global_1630317[iParam0 /*595*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_126(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
		case 240:
		case 239:
			return 1;
		
		default:
	}
	return func_127(iParam0, 0);
	return 0;
}

int func_127(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

int func_128()
{
	if (!func_135(PLAYER::PLAYER_ID()))
	{
		if (func_131(PLAYER::PLAYER_ID()) || func_130(PLAYER::PLAYER_ID()) != -1)
		{
			return 1;
		}
		if (func_129(PLAYER::PLAYER_ID()) && Global_1574656.f_4 == 133)
		{
			return 1;
		}
	}
	return 0;
}

bool func_129(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 4);
}

int func_130(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1630317[iVar0 /*595*/];
	}
	return -1;
}

int func_131(int iParam0)
{
	if (func_134(iParam0))
	{
		return 1;
	}
	if (func_132(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_132(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_133(iParam0, 9);
	}
	return 0;
}

bool func_133(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_11.f_4, iParam1);
}

int func_134(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1630317[iVar0 /*595*/].f_1, 0);
	}
	return 0;
}

bool func_135(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1630317[iParam0 /*595*/].f_1, 2);
}

int func_136()
{
	if (func_137() == 0)
	{
		return 1;
	}
	return 0;
}

int func_137()
{
	return Global_1312485.f_18;
}

int func_138(int iParam0)
{
	if (!func_14(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1590682[iParam0 /*883*/].f_35;
}

int func_139(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_140(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1590682[iParam0 /*883*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_140(int iParam0)
{
	return func_141(iParam0);
}

bool func_141(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_13.f_1, 0);
}

void func_142()
{
	if (bLocal_93)
	{
		if (!HUD::DOES_BLIP_EXIST(Global_1663732))
		{
			Global_1663732 = HUD::ADD_BLIP_FOR_COORD(Global_1663733);
			HUD::SET_BLIP_SPRITE(Global_1663732, 293);
			HUD::SET_BLIP_SCALE(Global_1663732, 1f);
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_1663732, false);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1663732, "IMPEX_BLIP_FM");
			if (func_171())
			{
				HUD::SET_BLIP_FLASHES(Global_1663732, true);
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(Global_1663732))
	{
		HUD::REMOVE_BLIP(&Global_1663732);
		if (bLocal_302)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					if (!func_166(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1215605247, &uLocal_333, 0, 500, 1, 0))
					{
						if (func_118())
						{
							func_165("IMPEX_HIPR_DAM", -1);
						}
					}
				}
			}
		}
	}
	if (bLocal_94)
	{
		if (iLocal_115 == -1)
		{
			iLocal_115 = func_149(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 4, -1);
			if (iLocal_115 != -1)
			{
				func_143(iLocal_115, 1);
			}
		}
	}
	else if (iLocal_115 != -1)
	{
		func_143(iLocal_115, 0);
		iLocal_115 = -1;
	}
}

void func_143(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 39:
			func_144(39, bParam1);
			break;
		
		case 40:
			func_144(40, bParam1);
			break;
		
		case 41:
			func_144(41, bParam1);
			break;
		
		case 42:
			func_144(42, bParam1);
			break;
		
		case 43:
			func_144(43, bParam1);
			break;
		
		case 44:
			func_144(44, bParam1);
			break;
		
		default:
			break;
	}
}

void func_144(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_79(iParam0, 8, 0))
		{
			func_148(iParam0, 8, 0);
			func_147(iParam0);
		}
	}
	else if (func_79(iParam0, 8, 0))
	{
		func_145(iParam0, 8, 0);
		func_147(iParam0);
	}
}

void func_145(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_99007.f_1364[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_83() == 0)
		{
			iVar0 = func_80(func_82(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_146(func_82(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_111858.f_668[iParam0]), iParam1);
	}
}

void func_146(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2551832[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
}

void func_147(int iParam0)
{
	Global_99007.f_184[iParam0] = 1;
	Global_99007.f_183 = 1;
}

void func_148(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_99007.f_1364[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_83() == 0)
		{
			iVar0 = func_80(func_82(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_146(func_82(iParam0), iVar0, -1, 1, 0);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_111858.f_668[iParam0]), iParam1);
	}
}

int func_149(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 53)
	{
		if (iParam3 == 6 || iParam3 == func_164(iVar0))
		{
			iVar4 = iVar0;
			if (func_163(iVar4))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_150(iVar0, 0), true);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_150(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_160(Global_101058);
			break;
		
		case 46:
			if (Global_1590519 != func_121())
			{
				if (func_159(Global_1590519))
				{
					return func_152(2, 2);
				}
				else if (func_151(Global_1590519))
				{
					return func_152(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
		
		case 52:
			return 2714.547f, -354.2701f, -55.1867f;
			break;
		
		case 50:
			return Global_1696916;
			break;
		
		case 51:
			return 1100f, 220f, -50f;
			break;
		
		case 53:
			return 1560f, 400f, -50f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_151(int iParam0)
{
	if (iParam0 != func_121())
	{
		if ((MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 0) || MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 1)) || MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_152(int iParam0, int iParam1)
{
	struct<3> Var0;
	struct<3> Var6;
	
	Var6 = { 1000000f, 1000000f, 1000000f };
	if (Global_1590519 != func_121())
	{
		if (iParam1 == 3)
		{
			if (func_153(iParam0, 1, &Var0, 0, 0))
			{
				Var6 = { Var0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (MISC::IS_BIT_SET(Global_1590682[Global_1590519 /*883*/].f_274.f_259, 4))
			{
				if (func_153(iParam0, 1, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
			else if (MISC::IS_BIT_SET(Global_1590682[Global_1590519 /*883*/].f_274.f_259, 5))
			{
				if (func_153(iParam0, 2, &Var0, 0, 0))
				{
					Var6 = { Var0 };
				}
			}
		}
	}
	return Var6;
}

int func_153(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	struct<3> Var6;
	struct<4> Var12;
	struct<3> Var18;
	
	if (!func_158(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_158(iParam1, &Var6))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var12 = { func_156(iParam0) };
	}
	else
	{
		Var12 = { func_155(iParam0) };
	}
	Var18 = { Var12 - Var0 };
	Var18 = { func_154(Var18, -Var0.f_3.f_2) };
	Var18 = { func_154(Var18, Var6.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var6, 0f, Var18) };
	uParam2->f_3 = { Var12.f_3 };
	return 1;
}

Vector3 func_154(struct<3> Param0, float fParam3)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	fVar3 = SYSTEM::SIN(fParam3);
	fVar4 = SYSTEM::COS(fParam3);
	Var0.x = ((Param0.x * fVar4) - (Param0.f_1 * fVar3));
	Var0.f_1 = ((Param0.x * fVar3) + (Param0.f_1 * fVar4));
	Var0.f_2 = Param0.f_2;
	return Var0;
}

struct<6> func_155(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_156(int iParam0)
{
	return func_157(iParam0);
}

struct<6> func_157(int iParam0)
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_158(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_159(int iParam0)
{
	if (iParam0 != func_121())
	{
		if ((MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 3) || MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 4)) || MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_259, 5))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_160(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_161() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_161()
{
	return func_162(PLAYER::PLAYER_ID());
}

int func_162(int iParam0)
{
	return MISC::GET_BITS_IN_RANGE(Global_2425869[iParam0 /*443*/].f_314.f_3, 28, 31);
}

bool func_163(int iParam0)
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 39:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_99007.f_239[39]);
			break;
		
		case 40:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_99007.f_239[40]);
			break;
		
		case 41:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_99007.f_239[41]);
			break;
		
		case 42:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_99007.f_239[42]);
			break;
		
		case 43:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_99007.f_239[43]);
			break;
		
		case 44:
			bVar0 = HUD::DOES_BLIP_EXIST(Global_99007.f_239[44]);
			break;
	}
	return bVar0;
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
	}
	return 6;
}

void func_165(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_166(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4, bool bParam5, int iParam6)
{
	if (!func_508(uParam2))
	{
		func_507(uParam2, 0, 0);
	}
	fParam3 = 0f;
	if (func_167(iParam0, iParam1, 1, uParam2, fParam3, iParam4, bParam5, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_167(int iParam0, int iParam1, bool bParam2, var uParam3, float fParam4, int iParam5, bool bParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<8> Var3;
	
	if (!func_508(uParam3))
	{
		func_507(uParam3, 0, 0);
	}
	func_170(&Var3, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			if (func_168(iParam0, iParam1, 30))
			{
				if (ENTITY::IS_ENTITY_A_PED(iParam0))
				{
					iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (PED::IS_PED_A_PLAYER(iVar0))
						{
							iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
							if (bParam2)
							{
								if (OBJECT::IS_PLAYER_ENTIRELY_INSIDE_GARAGE(iParam1, iVar2, fParam4, -1))
								{
									if (uParam7 || (!OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, iVar2, 2) && !(Var3.f_7 != 0 && OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, iVar2, 3))))
									{
										if (bParam6)
										{
											return 1;
										}
										else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
										{
											return 1;
										}
										else
										{
											return 0;
										}
									}
								}
							}
							else if (OBJECT::IS_PLAYER_ENTIRELY_INSIDE_GARAGE(iParam1, iVar2, fParam4, -1))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, iVar2, 2))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
							else if (Var3.f_7 != 0 && OBJECT::IS_PLAYER_PARTIALLY_INSIDE_GARAGE(iParam1, iVar2, 3))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
						{
							iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
							if (ENTITY::DOES_ENTITY_EXIST(iVar1))
							{
								if (bParam2)
								{
									if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iVar1, fParam4, -1))
									{
										if (uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 3))))
										{
											if (bParam6)
											{
												return 1;
											}
											else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
											{
												return 1;
											}
											else
											{
												return 0;
											}
										}
									}
								}
								else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iVar1, fParam4, -1))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 2))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
								else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iVar1, 3))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (bParam2)
						{
							if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
							{
								if (uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))))
								{
									if (bParam6)
									{
										return 1;
									}
									else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
									{
										return 1;
									}
									else
									{
										return 0;
									}
								}
							}
						}
						else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
						else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))
						{
							if (bParam6)
							{
								return 1;
							}
							else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
							{
								return 1;
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0) || ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
				{
					if (bParam2)
					{
						if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
						{
							if (uParam7 || (!OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2) && !(Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))))
							{
								if (bParam6)
								{
									return 1;
								}
								else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
								{
									return 1;
								}
								else
								{
									return 0;
								}
							}
						}
					}
					else if (OBJECT::IS_OBJECT_ENTIRELY_INSIDE_GARAGE(iParam1, iParam0, fParam4, -1))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 2))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
					else if (Var3.f_7 != 0 && OBJECT::IS_OBJECT_PARTIALLY_INSIDE_GARAGE(iParam1, iParam0, 3))
					{
						if (bParam6)
						{
							return 1;
						}
						else if (iParam5 <= 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam3)) >= iParam5)
						{
							return 1;
						}
						else
						{
							return 0;
						}
					}
				}
			}
		}
	}
	func_46(uParam3);
	return 0;
}

int func_168(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != -1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), func_169(iParam1), true) <= IntToFloat(iParam2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_169(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 1204.429f, -3110.847f, 4.3988f;
			break;
		
		case -1710530912:
			return 725.1831f, -1089.349f, 21.1692f;
			break;
		
		case 1131590004:
			return -1164.887f, -2011.105f, 12.25371f;
			break;
		
		case 916723671:
			return -330.44f, -143.39f, 39.33f;
			break;
		
		case 1340820069:
			return 106.28f, 6620.01f, 32.12f;
			break;
		
		case -866958545:
			return 1182.65f, 2641.9f, 38.05f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_170(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1215605247:
			*uParam0 = 99;
			uParam0->f_1 = 1215605247;
			uParam0->f_2 = 0;
			uParam0->f_3 = { 1204.429f, -3110.847f, 4.3988f };
			uParam0->f_6 = -247372382;
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_SIMEON";
			uParam0->f_9.f_1 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_4 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_7 = 32.498f;
			uParam0->f_9.f_8 = { 1210.884f, -3122.402f, 5.2118f };
			uParam0->f_9.f_11 = { 4.0534f, 0f, 32.6363f };
			uParam0->f_9.f_14 = 32.498f;
			uParam0->f_27 = { 1204.157f, -3122.599f, 3.795331f };
			uParam0->f_27.f_3 = { 1204.24f, -3099.772f, 8.400777f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 1:
		case -1710530912:
			*uParam0 = 99;
			uParam0->f_1 = -1710530912;
			uParam0->f_2 = 1;
			uParam0->f_3 = { 725.1831f, -1089.349f, 21.1692f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_2";
			uParam0->f_9.f_1 = { 734.3793f, -1078.791f, 23.4305f };
			uParam0->f_9.f_4 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_7 = 60.0199f;
			uParam0->f_9.f_8 = { 734.3027f, -1079.004f, 23.4973f };
			uParam0->f_9.f_11 = { -16.432f, 0f, -19.7978f };
			uParam0->f_9.f_14 = 60.0199f;
			uParam0->f_27 = { 738.8857f, -1088.516f, 20.55957f };
			uParam0->f_27.f_3 = { 718.613f, -1088.78f, 24.83263f };
			uParam0->f_27.f_6 = 7f;
			return;
			break;
		
		case 2:
		case 1131590004:
			*uParam0 = 99;
			uParam0->f_1 = 1131590004;
			uParam0->f_2 = 2;
			uParam0->f_3 = { -1164.887f, -2011.105f, 12.25371f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_NEUT_PNS_3";
			uParam0->f_9.f_1 = { -1161.774f, -2010.27f, 14.2468f };
			uParam0->f_9.f_4 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_7 = 64.5334f;
			uParam0->f_9.f_8 = { -1161.639f, -2010.211f, 14.2928f };
			uParam0->f_9.f_11 = { -17.3415f, 0f, 113.6889f };
			uParam0->f_9.f_14 = 64.5334f;
			uParam0->f_27 = { -1169.723f, -2015.923f, 11.50441f };
			uParam0->f_27.f_3 = { -1160.558f, -2007.005f, 15.68027f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 3:
		case 916723671:
			*uParam0 = 99;
			uParam0->f_1 = 916723671;
			uParam0->f_2 = 3;
			uParam0->f_3 = { -330.44f, -143.39f, 39.33f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_4";
			uParam0->f_9.f_1 = { -332.1567f, -141.0546f, 40.2864f };
			uParam0->f_9.f_4 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_7 = 60.0241f;
			uParam0->f_9.f_8 = { -332.3621f, -140.8507f, 40.3956f };
			uParam0->f_9.f_11 = { -20.6629f, 0f, -134.7887f };
			uParam0->f_9.f_14 = 60.0241f;
			uParam0->f_27 = { -323.7998f, -146.2539f, 37.81492f };
			uParam0->f_27.f_3 = { -334.3432f, -141.7261f, 40.75964f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 4:
		case 1340820069:
			*uParam0 = 99;
			uParam0->f_1 = 1340820069;
			uParam0->f_2 = 4;
			uParam0->f_3 = { 106.28f, 6620.01f, 32.12f };
			uParam0->f_7 = 0;
			uParam0->f_8 = "MP_GAR_PNS_5";
			uParam0->f_9.f_1 = { 106.688f, 6617.322f, 32.5026f };
			uParam0->f_9.f_4 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_7 = 67.562f;
			uParam0->f_9.f_8 = { 106.7971f, 6617.048f, 32.5586f };
			uParam0->f_9.f_11 = { -10.7437f, 0f, 21.7154f };
			uParam0->f_9.f_14 = 67.562f;
			uParam0->f_27 = { 100.9759f, 6625.046f, 30.60301f };
			uParam0->f_27.f_3 = { 111.2522f, 6615.657f, 33.62929f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
		
		case 5:
		case -866958545:
			*uParam0 = 99;
			uParam0->f_1 = -866958545;
			uParam0->f_2 = 5;
			uParam0->f_3 = { 1182.65f, 2641.9f, 38.05f };
			uParam0->f_7 = 0;
			uParam0->f_9.f_1 = { 1184.206f, 2644.004f, 38.7458f };
			uParam0->f_9.f_4 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_7 = 67.3374f;
			uParam0->f_9.f_8 = { 1184.345f, 2644.418f, 38.866f };
			uParam0->f_9.f_11 = { -15.4014f, 0f, 161.4493f };
			uParam0->f_9.f_14 = 67.3374f;
			uParam0->f_27 = { 1182.835f, 2634.775f, 36.55006f };
			uParam0->f_27.f_3 = { 1182.578f, 2647.955f, 39.58602f };
			uParam0->f_27.f_6 = 5.5f;
			return;
			break;
	}
}

int func_171()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_80(1199, -1, 0);
	if (!MISC::IS_BIT_SET(iVar1, 1))
	{
		iVar0 = 1;
	}
	else if (!MISC::IS_BIT_SET(iVar1, 2))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_172()
{
	if (bLocal_91)
	{
		if (!iLocal_92)
		{
			func_174(1215605247, 1, 0);
			func_173(1);
			iLocal_92 = 1;
		}
	}
	else if (iLocal_92)
	{
		func_174(1215605247, 0, 0);
		func_173(0);
		iLocal_92 = 0;
	}
}

void func_173(bool bParam0)
{
	if (Global_2540384.f_4582 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2540384.f_4582 = bParam0;
	}
}

void func_174(int iParam0, bool bParam1, bool bParam2)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2540384.f_4561, func_175(iParam0)))
		{
			if (bParam2)
			{
				MISC::SET_BIT(&(Global_2540384.f_4561.f_1), func_175(iParam0));
			}
			MISC::SET_BIT(&(Global_2540384.f_4561), func_175(iParam0));
		}
	}
	else if (MISC::IS_BIT_SET(Global_2540384.f_4561, func_175(iParam0)))
	{
		if (bParam2)
		{
			MISC::CLEAR_BIT(&(Global_2540384.f_4561.f_1), func_175(iParam0));
		}
		MISC::CLEAR_BIT(&(Global_2540384.f_4561), func_175(iParam0));
	}
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 1215605247:
			return 0;
			break;
		
		case -1710530912:
			return 1;
			break;
		
		case 1131590004:
			return 2;
			break;
		
		case 916723671:
			return 3;
			break;
		
		case 1340820069:
			return 4;
			break;
		
		case -866958545:
			return 5;
			break;
	}
	return 0;
}

void func_176()
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_BIT_SET(Local_372.f_23, 0))
	{
		if (iLocal_336 >= 32)
		{
			MISC::CLEAR_BIT(&iLocal_577, 5);
			iLocal_336 = 0;
			iLocal_308 = -1;
		}
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_336)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_336));
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (func_14(iVar0, 0, 1))
			{
				if (!MISC::IS_BIT_SET(iLocal_577, 3))
				{
					if (MISC::IS_BIT_SET(Local_448[iLocal_336 /*4*/].f_2, 1))
					{
						MISC::SET_BIT(&iLocal_577, 3);
					}
				}
				if (iLocal_308 == -1)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
					{
						if (func_4(Local_372.f_22))
						{
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_372.f_22)))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_372.f_22), -1, false) == iVar1)
									{
										iLocal_308 = iLocal_336;
									}
								}
							}
						}
					}
				}
			}
		}
		iLocal_336++;
		if (iLocal_336 >= 32)
		{
			MISC::SET_BIT(&iLocal_577, 5);
		}
		func_263();
		if (!MISC::IS_BIT_SET(iLocal_577, 3))
		{
			if (!MISC::IS_BIT_SET(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
			{
				if (!MISC::IS_BIT_SET(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 1))
				{
					if (func_261())
					{
						MISC::SET_BIT(&(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
					}
				}
			}
		}
	}
	if (iLocal_305 != Local_372.f_34)
	{
		if (Local_372.f_34 == 0)
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
			{
				iLocal_305 = Local_372.f_34;
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_305);
			}
		}
		else
		{
			iLocal_305 = Local_372.f_34;
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_305);
		}
	}
	if (MISC::IS_BIT_SET(Local_372.f_23, 0))
	{
		switch (Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3)
		{
			case 0:
				if (!Global_2540384.f_1719)
				{
				}
				if (MISC::IS_BIT_SET(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
				{
					MISC::CLEAR_BIT(&(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
				}
				if (MISC::IS_BIT_SET(iLocal_577, 21))
				{
					MISC::CLEAR_BIT(&iLocal_577, 21);
				}
				if (MISC::IS_BIT_SET(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 1))
				{
					MISC::CLEAR_BIT(&(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 1);
				}
				if (((!func_139(PLAYER::PLAYER_ID(), 1, 0) && !func_112()) && !func_260(PLAYER::PLAYER_ID(), 1, 0)) || func_71(PLAYER::PLAYER_ID(), 6))
				{
					if (MISC::IS_BIT_SET(iLocal_577, 3))
					{
						MISC::CLEAR_BIT(&iLocal_577, 3);
					}
					if (MISC::IS_BIT_SET(iLocal_577, 19))
					{
						MISC::CLEAR_BIT(&iLocal_577, 19);
					}
					if (MISC::IS_BIT_SET(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 3))
					{
						MISC::CLEAR_BIT(&(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 3);
					}
					if (iLocal_307 != -1)
					{
						iLocal_307 = -1;
					}
					if (MISC::IS_BIT_SET(Local_372.f_23, 0))
					{
						if (!MISC::IS_BIT_SET(iLocal_577, 16))
						{
							MISC::SET_BIT(&iLocal_577, 16);
							func_259(6, 1);
							MISC::SET_BIT(&iLocal_577, 7);
							Global_2540384.f_1718 = 1;
							Global_2540384.f_1719 = 0;
						}
						if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
							{
								if (func_253())
								{
									if (Local_372.f_67 != 0)
									{
										VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_372.f_67, true);
									}
									Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 1;
									Global_1663742 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_372.f_22));
									if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_372.f_22))))
									{
										HUD::SET_BLIP_SPRITE(Global_1663742, 348);
										func_165("IMPEX_HIPB_INT", -1);
									}
									else
									{
										HUD::SET_BLIP_SPRITE(Global_1663742, 225);
										func_165("IMPEX_HIPR_INT", -1);
									}
									HUD::SET_BLIP_COLOUR(Global_1663742, 2);
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1663742, "IMPEX_HIPR_BLP");
									func_259(6, 1);
									MISC::SET_BIT(&iLocal_577, 7);
									Global_2540384.f_1718 = 1;
									if (func_118())
									{
										HUD::SET_BLIP_DISPLAY(Global_1663742, 0);
									}
								}
							}
						}
					}
				}
				else if (!Global_2540384.f_1719)
				{
					Global_2540384.f_1719 = 1;
				}
				break;
			
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_372.f_22), false))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_372.f_22)))
							{
								func_252(1);
								if (func_251())
								{
									func_246(2, 0, 1);
								}
								if (HUD::DOES_BLIP_EXIST(Global_1663742))
								{
									HUD::REMOVE_BLIP(&Global_1663742);
								}
							}
							else
							{
								func_252(0);
								if (!func_245(NETWORK::NET_TO_VEH(Local_372.f_22), 0))
								{
									if (!HUD::DOES_BLIP_EXIST(Global_1663742))
									{
										if (!iLocal_114)
										{
											func_244();
										}
									}
								}
							}
						}
						if (!MISC::IS_BIT_SET(iLocal_577, 19))
						{
							if (func_253())
							{
								if (func_242())
								{
									if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_372.f_22)))
									{
										if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_372.f_22), true)) < 2500f)
										{
											if (func_118())
											{
												func_165("FM_IMP_JAC", -1);
											}
											MISC::SET_BIT(&iLocal_577, 19);
										}
									}
								}
							}
						}
						if (func_241())
						{
						}
						func_239();
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Global_1663742))
						{
							HUD::REMOVE_BLIP(&Global_1663742);
						}
						func_259(6, 0);
						MISC::CLEAR_BIT(&iLocal_577, 7);
						Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
					}
				}
				else
				{
					if (Local_372.f_67 != 0)
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_372.f_67, false);
					}
					if (HUD::DOES_BLIP_EXIST(Global_1663742))
					{
						HUD::REMOVE_BLIP(&Global_1663742);
					}
					func_259(6, 0);
					MISC::CLEAR_BIT(&iLocal_577, 7);
					Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
				}
				if (MISC::IS_BIT_SET(iLocal_577, 3))
				{
					func_259(6, 0);
					MISC::CLEAR_BIT(&iLocal_577, 7);
					if (HUD::DOES_BLIP_EXIST(Global_1663742))
					{
						HUD::REMOVE_BLIP(&Global_1663742);
					}
					Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
				}
				if (Local_372.f_26 == 3)
				{
					if (Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 1)
					{
						if (Local_372.f_67 != 0)
						{
							VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_372.f_67, false);
						}
						if (HUD::DOES_BLIP_EXIST(Global_1663742))
						{
							HUD::REMOVE_BLIP(&Global_1663742);
						}
						if (MISC::IS_BIT_SET(iLocal_577, 16))
						{
							MISC::CLEAR_BIT(&iLocal_577, 16);
						}
						func_259(6, 0);
						MISC::CLEAR_BIT(&iLocal_577, 7);
						Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
					}
				}
				break;
			
			case 3:
				func_252(0);
				break;
		}
		if (func_236())
		{
			if (func_235("IMPEX_HIPR_INT"))
			{
				HUD::CLEAR_HELP(true);
			}
			if (HUD::DOES_BLIP_EXIST(Global_1663742))
			{
				HUD::REMOVE_BLIP(&Global_1663742);
			}
			if (Local_372.f_67 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_372.f_67, false);
			}
			Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 3;
			func_259(6, 0);
			MISC::CLEAR_BIT(&iLocal_577, 7);
			if (MISC::IS_BIT_SET(iLocal_577, 16))
			{
				MISC::CLEAR_BIT(&iLocal_577, 16);
			}
			func_252(0);
		}
		func_191();
		if (Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 > 0 && Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 < 3)
		{
			func_188();
		}
	}
	else
	{
		if (Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 != 0)
		{
			if (Local_372.f_67 != 0)
			{
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_372.f_67, false);
			}
			Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 = 0;
		}
		if (MISC::IS_BIT_SET(iLocal_577, 21))
		{
			MISC::CLEAR_BIT(&iLocal_577, 21);
		}
		if (Global_2540384.f_1718)
		{
			if (!func_508(&uLocal_318))
			{
				func_507(&uLocal_318, 0, 0);
			}
			else if (func_506(&uLocal_318, 5000, 0))
			{
				func_46(&uLocal_318);
				Global_2540384.f_1718 = 0;
			}
		}
		if (MISC::IS_BIT_SET(iLocal_577, 16))
		{
			if (Local_372.f_34 == 0)
			{
				MISC::CLEAR_BIT(&iLocal_577, 16);
			}
		}
	}
	func_177();
}

void func_177()
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	var uVar7;
	bool bVar8;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
	{
		if (func_4(Local_372.f_22))
		{
			if (!func_242())
			{
				if (!func_508(&uLocal_583))
				{
					func_507(&uLocal_583, 0, 0);
				}
				if (func_506(&uLocal_583, 1000, 0))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_372.f_22))
					{
						Var3 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_372.f_22), true) };
						if (func_185(Var3, func_186(39), func_150(39, 0)))
						{
							if (func_180(39, 0, &Var0, &fVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_185(Var3, func_186(40), func_150(40, 0)))
						{
							if (func_180(40, 0, &Var0, &fVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_185(Var3, func_186(41), func_150(41, 0)))
						{
							if (func_180(41, 0, &Var0, &fVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_185(Var3, func_186(42), func_150(42, 0)))
						{
							if (func_180(42, 0, &Var0, &fVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_185(Var3, func_186(43), func_150(43, 0)))
						{
							if (func_180(43, 0, &Var0, &fVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
						else if (func_185(Var3, func_186(44), func_150(44, 0)))
						{
							if (func_180(44, 0, &Var0, &fVar6, &uVar7, 0))
							{
								bVar8 = true;
							}
						}
					}
					func_46(&uLocal_583);
				}
				if (bVar8)
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_372.f_22))
					{
						if (func_178(NETWORK::NET_TO_VEH(Local_372.f_22), 1, 0, 0, 0, 0, 1, 0, 1))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_VEH(Local_372.f_22), Var0, false, false, true);
							ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_VEH(Local_372.f_22), fVar6);
							NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_VEH(Local_372.f_22), true, 1);
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_372.f_22), false);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_372.f_22), 1);
						}
					}
				}
			}
		}
	}
}

int func_178(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_179(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_121()) && func_14(iVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
								{
									return 0;
								}
							}
							else
							{
								return 0;
							}
						}
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_179(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

bool func_180(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5)
{
	*uParam2 = { 0f, 0f, 0f };
	*uParam3 = 0f;
	*uParam4 = 1f;
	if (iParam0 == 39)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1136.491f, -1991.127f, 12.1674f };
			*uParam3 = 312.0856f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1133.253f, -1993.854f, 12.1687f };
			*uParam3 = 314.389f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1130.806f, -1997.875f, 12.1713f };
			*uParam3 = 317.9671f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1127.329f, -2001.548f, 12.1741f };
			*uParam3 = 315.1484f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1123.286f, -2006.263f, 12.1791f };
			*uParam3 = 236.5043f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1115.469f, -2012.307f, 12.1802f };
			*uParam3 = 264.1943f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1110.562f, -2015.446f, 12.1999f };
			*uParam3 = 302.6618f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1121.69f, -2000.23f, 12.1718f };
			*uParam3 = 238.2144f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1111.589f, -2006.454f, 12.1692f };
			*uParam3 = 238.336f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1138.648f, -1979.826f, 12.1634f };
			*uParam3 = 278.7886f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1124.321f, -1978.124f, 12.1856f };
			*uParam3 = 276.276f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1110.264f, -1975.971f, 12.1588f };
			*uParam3 = 279.4681f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { -1128.293f, -1984.828f, 12.1659f };
			*uParam3 = 295.1603f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { -1126.066f, -1991.346f, 12.1683f };
			*uParam3 = 227.6551f;
			*uParam4 = 0.7f;
		}
	}
	else if (iParam0 == 40)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 717.5009f, -1082.013f, 21.2916f };
			*uParam3 = 3.6761f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 716.7202f, -1069.264f, 21.2546f };
			*uParam3 = 3.5291f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 717.009f, -1058.204f, 21.0152f };
			*uParam3 = 355.8705f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 712.7385f, -1083.534f, 21.3647f };
			*uParam3 = 359.9393f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 712.7766f, -1072.967f, 21.307f };
			*uParam3 = 359.9453f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 712.8783f, -1061.094f, 21.1883f };
			*uParam3 = 357.2739f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 708.5093f, -1081.285f, 21.3978f };
			*uParam3 = 358.5361f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 708.9708f, -1068.358f, 21.3519f };
			*uParam3 = 357.9787f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 710.7449f, -1053.611f, 21.2011f };
			*uParam3 = 339.2883f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 704.6691f, -1079.536f, 21.3804f };
			*uParam3 = 359.4009f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 704.4818f, -1065.911f, 21.4447f };
			*uParam3 = 0.9557f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 716.4031f, -1044.615f, 20.9157f };
			*uParam3 = 280.6607f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 725.7982f, -1044.226f, 21.046f };
			*uParam3 = 271.6107f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { 727.0708f, -1047.951f, 21.2648f };
			*uParam3 = 270.6534f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 41)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -365.9221f, -125.5196f, 37.6785f };
			*uParam3 = 65.4762f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -362.3411f, -122.0465f, 37.6788f };
			*uParam3 = 68.8025f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -363.4988f, -117.1944f, 37.6792f };
			*uParam3 = 78.9594f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -372.3338f, -115.238f, 37.6796f };
			*uParam3 = 74.7182f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -371.1733f, -121.0303f, 37.6797f };
			*uParam3 = 62.123f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -369.2153f, -127.0247f, 37.6784f };
			*uParam3 = 61.9032f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -371.8094f, -130.2364f, 37.6798f };
			*uParam3 = 52.11f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -378.4785f, -130.0621f, 37.6796f };
			*uParam3 = 36.469f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -387.4156f, -118.9469f, 37.6829f };
			*uParam3 = 38.3679f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -382.709f, -112.8489f, 37.6985f };
			*uParam3 = 65.0749f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -397.1963f, -107.1517f, 37.6834f };
			*uParam3 = 33.315f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -404.3896f, -96.5394f, 39.0491f };
			*uParam3 = 34.1156f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 42)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 120.3574f, 6599.573f, 31.0156f };
			*uParam3 = 269.5703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 123.4549f, 6594.44f, 30.9958f };
			*uParam3 = 269.5584f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 126.712f, 6589.798f, 30.9386f };
			*uParam3 = 269.5731f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 133.9324f, 6585.555f, 30.9551f };
			*uParam3 = 269.4128f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 136.8265f, 6580.12f, 31.013f };
			*uParam3 = 269.4126f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 141.8716f, 6575.214f, 30.9522f };
			*uParam3 = 270.5616f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 140.8046f, 6606.312f, 30.8449f };
			*uParam3 = 178.8423f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 145.8316f, 6601.099f, 30.85f };
			*uParam3 = 180.9941f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 150.5503f, 6596.533f, 30.8449f };
			*uParam3 = 177.9041f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 155.6983f, 6591.292f, 30.8449f };
			*uParam3 = 177.9025f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 159.1213f, 6580.544f, 30.841f };
			*uParam3 = 208.1021f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 153.3835f, 6581.357f, 30.843f };
			*uParam3 = 208.9007f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 12)
		{
			*uParam2 = { 160.6086f, 6567.498f, 30.8061f };
			*uParam3 = 210.3887f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 13)
		{
			*uParam2 = { 166.7977f, 6567.135f, 30.7544f };
			*uParam3 = 210.3833f;
			*uParam4 = 0.2f;
		}
	}
	else if (iParam0 == 43)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 1182.498f, 2653.582f, 36.8099f };
			*uParam3 = 304.7889f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 1190.678f, 2661.143f, 36.8165f };
			*uParam3 = 321.483f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 1196.733f, 2669.66f, 36.7883f };
			*uParam3 = 345.6812f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 1200.466f, 2666.494f, 36.8099f };
			*uParam3 = 347.5349f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 1205.586f, 2667.136f, 36.8099f };
			*uParam3 = 352.7466f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 1210.698f, 2666.592f, 36.8099f };
			*uParam3 = 7.6557f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 1193.573f, 2688.714f, 36.7457f };
			*uParam3 = 87.5179f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 1181.127f, 2689.26f, 36.8532f };
			*uParam3 = 87.4959f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 1162.459f, 2689.204f, 37.1039f };
			*uParam3 = 87.5173f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 1162.663f, 2677.458f, 37.078f };
			*uParam3 = 268.6483f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 1171.858f, 2677.125f, 36.995f };
			*uParam3 = 267.8824f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 1224.358f, 2677.226f, 36.6702f };
			*uParam3 = 272.1325f;
			*uParam4 = 0.1f;
		}
	}
	else if (iParam0 == 44)
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -199.5331f, -1301.69f, 30.296f };
			*uParam3 = 263.703f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -205.9477f, -1303.868f, 30.2575f };
			*uParam3 = 1.5267f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -200.7847f, -1298.636f, 30.296f };
			*uParam3 = 89.6847f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -193.9668f, -1305.65f, 30.3643f };
			*uParam3 = 86.5508f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -213.389f, -1305.822f, 30.3533f };
			*uParam3 = 88.0277f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -210.4487f, -1301.42f, 30.296f };
			*uParam3 = 50.2894f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -193.1976f, -1302.892f, 30.296f };
			*uParam3 = 310.5602f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -198.882f, -1304.772f, 30.325f };
			*uParam3 = 268.713f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -230.2501f, -1305.596f, 30.3533f };
			*uParam3 = 89.1508f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -186.4736f, -1305.746f, 30.3495f };
			*uParam3 = 270.2632f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -236.5289f, -1302.071f, 30.296f };
			*uParam3 = 270.2677f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -181.8344f, -1299.311f, 30.296f };
			*uParam3 = 88.0286f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_184(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -795.6738f, 306.1536f, 84.7005f };
			*uParam3 = 175.3352f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_183(iParam0, iParam5))
	{
		switch (iParam5)
		{
			case 6:
				if (iParam1 == 0)
				{
					*uParam2 = { -1574.907f, -569.6819f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -1573.983f, -570.0646f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -1575.289f, -570.6058f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -1575.83f, -569.2993f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -1574.524f, -568.7581f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -1574.365f, -570.9885f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -1576.213f, -570.2231f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -1575.448f, -568.3754f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -1573.6f, -569.1407f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -1573.059f, -570.4473f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -1575.672f, -571.5297f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -1576.754f, -568.9166f, 104.2001f };
					*uParam3 = 104.9486f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 7:
				if (iParam1 == 0)
				{
					*uParam2 = { -1387.561f, -481.637f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -1386.637f, -482.0197f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -1387.944f, -482.5609f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -1388.485f, -481.2543f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -1387.178f, -480.7131f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -1387.02f, -482.9435f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -1388.868f, -482.1782f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -1388.102f, -480.3304f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -1386.255f, -481.0958f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -1385.713f, -482.4024f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -1388.327f, -483.4847f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -1389.409f, -480.8716f, 77.2001f };
					*uParam3 = 353.0411f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 8:
				if (iParam1 == 0)
				{
					*uParam2 = { -142.5312f, -590.6586f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -141.6073f, -591.0413f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -142.9139f, -591.5825f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -143.4551f, -590.2759f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -142.1485f, -589.7347f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -141.99f, -591.9651f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -143.8378f, -591.1998f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -143.0724f, -589.352f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -141.2247f, -590.1174f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -141.2247f, -590.1174f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -140.6835f, -591.424f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -143.2966f, -592.5063f, 166.0001f };
					*uParam3 = 110.9811f;
					*uParam4 = 0.1f;
				}
				break;
			
			case 9:
				if (iParam1 == 0)
				{
					*uParam2 = { -74.8035f, -814.8599f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 1f;
				}
				else if (iParam1 == 1)
				{
					*uParam2 = { -73.8796f, -815.2426f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.9f;
				}
				else if (iParam1 == 2)
				{
					*uParam2 = { -75.1862f, -815.7838f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.8f;
				}
				else if (iParam1 == 3)
				{
					*uParam2 = { -75.7274f, -814.4772f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.7f;
				}
				else if (iParam1 == 4)
				{
					*uParam2 = { -74.4208f, -813.936f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.6f;
				}
				else if (iParam1 == 5)
				{
					*uParam2 = { -74.2623f, -816.1664f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.5f;
				}
				else if (iParam1 == 6)
				{
					*uParam2 = { -76.11f, -815.4011f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.4f;
				}
				else if (iParam1 == 7)
				{
					*uParam2 = { -75.3447f, -813.5533f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.3f;
				}
				else if (iParam1 == 8)
				{
					*uParam2 = { -73.4969f, -814.3187f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 9)
				{
					*uParam2 = { -72.9557f, -815.6252f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.2f;
				}
				else if (iParam1 == 10)
				{
					*uParam2 = { -75.5689f, -816.7076f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.1f;
				}
				else if (iParam1 == 11)
				{
					*uParam2 = { -76.6513f, -814.0945f, 284.0001f };
					*uParam3 = 146.2765f;
					*uParam4 = 0.1f;
				}
				break;
		}
	}
	else if (func_182(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { -1200.862f, -1737.385f, 3.1713f };
			*uParam3 = 284.5345f;
			*uParam4 = 0.1f;
		}
	}
	else if (func_181(iParam0, iParam5))
	{
		if (iParam1 == 0)
		{
			*uParam2 = { 2799.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 1f;
		}
		else if (iParam1 == 1)
		{
			*uParam2 = { 2801.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.9f;
		}
		else if (iParam1 == 2)
		{
			*uParam2 = { 2799.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.8f;
		}
		else if (iParam1 == 3)
		{
			*uParam2 = { 2801.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.7f;
		}
		else if (iParam1 == 4)
		{
			*uParam2 = { 2799.313f, -3927.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.6f;
		}
		else if (iParam1 == 5)
		{
			*uParam2 = { 2801.313f, -3927.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.5f;
		}
		else if (iParam1 == 6)
		{
			*uParam2 = { 2799.313f, -3925.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.4f;
		}
		else if (iParam1 == 7)
		{
			*uParam2 = { 2801.313f, -3925.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.3f;
		}
		else if (iParam1 == 8)
		{
			*uParam2 = { 2801.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 9)
		{
			*uParam2 = { 2799.313f, -3929.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.2f;
		}
		else if (iParam1 == 10)
		{
			*uParam2 = { 2801.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.1f;
		}
		else if (iParam1 == 11)
		{
			*uParam2 = { 2799.313f, -3931.387f, 147.0031f };
			*uParam3 = 0f;
			*uParam4 = 0.1f;
		}
	}
	return !func_31(*uParam2, 0f, 0f, 0f, 0);
}

int func_181(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 17)
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (iParam1 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_183(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if (((iParam1 == 6 || iParam1 == 7) || iParam1 == 8) || iParam1 == 9)
		{
			return 1;
		}
	}
	return 0;
}

int func_184(int iParam0, int iParam1)
{
	if (iParam0 == 45)
	{
		if ((iParam1 == 1 || iParam1 == 2) || iParam1 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_185(struct<3> Param0, char* sParam3, struct<3> Param4)
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param4, sParam3);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

char* func_186(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "";
			break;
		
		case 0:
			return "v_hairdresser";
			break;
		
		case 1:
			return "v_barbers";
			break;
		
		case 2:
			return "v_barbers";
			break;
		
		case 3:
			return "v_barbers";
			break;
		
		case 4:
			return "v_barbers";
			break;
		
		case 5:
			return "v_barbers";
			break;
		
		case 6:
			return "v_barbers";
			break;
		
		case 7:
			return "v_clotheslo";
			break;
		
		case 8:
			return "v_clotheslo";
			break;
		
		case 9:
			return "v_clotheslo";
			break;
		
		case 10:
			return "v_clotheslo";
			break;
		
		case 11:
			return "v_clotheslo";
			break;
		
		case 12:
			return "v_clotheslo";
			break;
		
		case 13:
			return "v_clotheslo";
			break;
		
		case 14:
			return "v_clothesmid";
			break;
		
		case 15:
			return "v_clothesmid";
			break;
		
		case 16:
			return "v_clothesmid";
			break;
		
		case 17:
			return "v_clothesmid";
			break;
		
		case 18:
			return "v_clotheshi";
			break;
		
		case 19:
			return "v_clotheshi";
			break;
		
		case 20:
			return "v_clotheshi";
			break;
		
		case 21:
			return "";
			break;
		
		case 22:
			return "v_tattoo";
			break;
		
		case 23:
			return "v_tattoo2";
			break;
		
		case 24:
			return "v_tattoo2";
			break;
		
		case 25:
			return "v_tattoo";
			break;
		
		case 26:
			return "v_tattoo";
			break;
		
		case 27:
			return "v_tattoo";
			break;
		
		case 28:
			return "v_gun";
			break;
		
		case 29:
			return "v_gun2";
			break;
		
		case 30:
			return "v_gun2";
			break;
		
		case 31:
			return "v_gun2";
			break;
		
		case 32:
			return "v_gun2";
			break;
		
		case 33:
			return "v_gun2";
			break;
		
		case 34:
			return "v_gun2";
			break;
		
		case 35:
			return "v_gun2";
			break;
		
		case 36:
			return "v_gun2";
			break;
		
		case 37:
			return "v_gun2";
			break;
		
		case 38:
			return "v_gun";
			break;
		
		case 39:
			return "v_carmod";
			break;
		
		case 40:
			return "v_lockup";
			break;
		
		case 41:
			return "v_carmod";
			break;
		
		case 42:
			return "v_carmod3";
			break;
		
		case 43:
			return "v_carmod3";
			break;
		
		case 44:
			return "lr_supermod_int";
			break;
		
		case 45:
			return func_187(Global_101058);
			break;
		
		case 46:
			return "gr_grdlc_int_01";
			break;
		
		case 47:
			return "xm_x17dlc_int_01";
			break;
		
		case 48:
			return "ba_dlc_int_03_ba";
			break;
		
		case 49:
			return "xs_x18_int_mod";
			break;
		
		case 52:
			return "ch_dlc_plan";
			break;
		
		case 50:
			return "vw_dlc_casino_apart";
			break;
		
		case 51:
			return "vw_dlc_casino_main";
			break;
		
		case 53:
			return "h4_int_sub_h4";
			break;
	}
	return "";
}

char* func_187(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "imp_impexp_intwaremed";
			break;
		
		case 2:
			return "imp_impexp_intwaremed";
			break;
		
		case 3:
			return "imp_impexp_intwaremed";
			break;
		
		case 6:
		case 7:
		case 8:
		case 9:
			return "imp_imptexp_mod_int_01";
			break;
		
		case 4:
			return "Bkr_Biker_DLC_INT_01";
			break;
		
		case 5:
			return "Bkr_Biker_DLC_INT_02";
			break;
		
		case 10:
			return "gr_grdlc_int_01";
			break;
		
		case 11:
			return "gr_grdlc_int_02";
			break;
		
		case 12:
			return "sm_smugdlc_int_01";
			break;
		
		case 13:
			return "xm_x17dlc_int_01";
			break;
		
		case 14:
			return "xm_x17dlc_int_02";
			break;
		
		case 15:
			return "ba_dlc_int_01_ba";
			break;
		
		case 16:
			return "ba_dlc_int_03_ba";
			break;
		
		case 17:
			if (func_161() == 0)
			{
				return "xs_x18_int_mod";
			}
			else
			{
				return "xs_x18_int_mod2";
			}
			break;
		
		default:
			return "";
			break;
	}
	return "";
}

void func_188()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (iLocal_308 > -1)
	{
		if (iLocal_308 != NETWORK::PARTICIPANT_ID_TO_INT())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_308)))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_308));
				bVar1 = true;
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iVar0, PLAYER::PLAYER_ID()))
				{
					iVar2 = 1;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
	{
		if (func_4(Local_372.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_372.f_22), false))
				{
					if (Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 == 0)
					{
						if (!bVar1 || (bVar1 && iVar2))
						{
							func_189(NETWORK::NET_TO_VEH(Local_372.f_22), 0, 10);
						}
					}
				}
			}
		}
	}
}

void func_189(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	HUD::GET_HUD_COLOUR(iParam2, &iVar0, &iVar1, &iVar2, &uVar3);
	if (iParam1 == 0)
	{
	}
	VEHICLE::TRACK_VEHICLE_VISIBILITY(iParam0);
	if (func_14(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (func_190(iParam0) == 0)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
				{
					if (VEHICLE::IS_VEHICLE_VISIBLE(iParam0))
					{
						GRAPHICS::ADD_ENTITY_ICON(iParam0, "MP_Arrow");
						GRAPHICS::SET_ENTITY_ICON_COLOR(iParam0, iVar0, iVar1, iVar2, 190);
						GRAPHICS::SET_ENTITY_ICON_VISIBILITY(iParam0, true);
					}
				}
			}
		}
	}
}

int func_190(int iParam0)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar0) == 0 && VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) == 0)
	{
		return 0;
	}
	if (VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_191()
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(iLocal_577, 5))
	{
		if (iLocal_307 != iLocal_308)
		{
			if (iLocal_308 > -1)
			{
				if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_308)))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_308));
					if (iVar0 != PLAYER::PLAYER_ID())
					{
						if (!func_260(PLAYER::PLAYER_ID(), 1, 0))
						{
							func_192("IMPEX_TICK_DHPV", iVar0, 0, 0, 0, 1, 0);
						}
					}
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (!MISC::IS_BIT_SET(Local_372.f_23, 8))
						{
							MISC::SET_BIT(&(Local_372.f_23), 8);
						}
					}
				}
			}
			iLocal_307 = iLocal_308;
		}
	}
}

int func_192(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar18;
	bool bVar19;
	
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_4456448.f_77785[iVar1] != -1)
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_233(iVar1, iParam1, 0));
			}
			else
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_201(iParam1, -2, 1, 0, 0));
			}
		}
		else
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_201(iParam1, -2, 1, 0, 0));
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_199(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		}
		else
		{
			Global_2515173 = { func_198(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2515103, 35, &Global_2515173))
			{
				bVar18 = false;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2515103.f_22), "Leader") && Global_2515103.f_30 == 0)
				{
					bVar18 = true;
				}
				if (Global_2515103.f_21 > 0)
				{
					bVar19 = false;
				}
				else
				{
					bVar19 = true;
				}
				if (bParam5)
				{
					if (bParam6)
					{
						Var2 = { func_197(&Var2) };
					}
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2515103, 35), &(Global_2515103.f_17), Global_2515103.f_30, bVar18, false, Global_2515103, &Var2, Global_1314053, Global_1314054, Global_1314055);
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2515103, 35), &(Global_2515103.f_17), Global_2515103.f_30, bVar18, false, Global_2515103, Global_1314053, Global_1314054, Global_1314055);
				}
			}
			else
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
		}
		func_193(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_193(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_196() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_24(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_194(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1672611.f_5[iVar0 /*53*/] = iParam0;
		Global_1672611.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1672611.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1672611.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1672611.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1672611.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1672611.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1672611.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_194(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1672611 - 1))
	{
		if (iParam0 > Global_1672611.f_5[iVar0 /*53*/].f_1)
		{
			func_195(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1672611++;
	if (Global_1672611 > 5)
	{
		Global_1672611 = 5;
		return Global_1672611;
	}
	return (Global_1672611 - 1);
}

void func_195(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1672611.f_5[iVar0 /*53*/] = { Global_1672611.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_196()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_197(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

struct<13> func_198(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

var func_199(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_200(&cVar0);
}

var func_200(char[4] cParam0)
{
	return cParam0;
}

int func_201(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (func_231(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_77785[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_231(PLAYER::PLAYER_ID()) || (func_230() && func_229())) && !MISC::IS_BIT_SET(Global_2540384.f_4655, 31)) && !bParam4)
	{
		iVar1 = func_228();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_14(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_77785[iParam1] != -1)
							{
								return func_233(iParam1, iParam0, 0);
							}
							else
							{
								return func_214(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_214(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_77785[iParam1] != -1)
				{
					return func_233(iParam1, iParam0, 0);
				}
				else
				{
					return func_202(0, -1, 0);
				}
			}
			else
			{
				return func_202(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_77785[iParam1] != -1)
		{
			return func_233(iParam1, iParam0, 0);
		}
		else
		{
			return func_214(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_214(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_202(bool bParam0, int iParam1, bool bParam2)
{
	return func_203(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_203(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((func_213() || (func_212() && func_210())) && Global_1388252.f_1)
	{
		if (bParam1)
		{
			return func_209(iParam2, iVar0);
		}
		else
		{
			return func_209(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_208(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_207(1);
				}
				else
				{
					return func_207(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_204(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_204(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_207(1);
	}
	return func_207(0);
}

int func_204(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_206(iParam0, iParam1, iParam3);
	if (func_205(Global_4456448.f_82708, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_205(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_129348 == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9021[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_206(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_208(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_207(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_208(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_541, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_209(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_206(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

bool func_210()
{
	if (func_211())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_4456448.f_133494, 4);
}

bool func_211()
{
	return MISC::IS_BIT_SET(Global_4456448.f_123318, 12);
}

bool func_212()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return MISC::IS_BIT_SET(Global_4456448.f_133494, 0);
	}
	return ((MISC::IS_BIT_SET(Global_4456448.f_133494, 0) || Global_1655243) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_213()
{
	if (func_211() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1590682[iVar2 /*883*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_223())
			{
				iVar3 = func_219(iParam0);
				if (!iVar3 == -1)
				{
					return func_217(iVar3);
				}
			}
			if ((func_216(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_208(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_207(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_215(1);
			}
			else
			{
				return func_203(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574416 || Global_1574407) || Global_1590682[iParam0 /*883*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574416 == 1 && Global_1574426 == 0))
			{
				return func_207(1);
			}
			else
			{
				return func_203(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574411 && Global_1573907.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_219(iParam0);
	if (!iVar4 == -1)
	{
		return func_217(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_215(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_216(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_217(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_218(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_218(int iParam0)
{
	return Global_2417956.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_219(int iParam0)
{
	if (!iParam0 == func_121())
	{
		if (func_221(iParam0, 1))
		{
			return Global_2417956.f_818.f_11[func_220(iParam0)];
		}
	}
	return -1;
}

int func_220(int iParam0)
{
	if (iParam0 != func_121())
	{
		return Global_1630317[iParam0 /*595*/].f_11;
	}
	return func_121();
}

bool func_221(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_222(iParam0))
		{
			return 0;
		}
	}
	return Global_1630317[iParam0 /*595*/].f_11 != func_121();
}

int func_222(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_121())
		{
			return Global_1630317[iParam0 /*595*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_223()
{
	if ((((func_227() || func_226()) || func_30()) || func_225()) || func_224())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && MISC::IS_BIT_SET(Global_4456448.f_36, 1))
	{
		return 1;
	}
	return 0;
}

var func_224()
{
	return Global_2451787.f_23;
}

var func_225()
{
	return Global_2451787.f_20;
}

var func_226()
{
	return Global_2451787.f_17;
}

var func_227()
{
	return Global_2451787.f_16;
}

var func_228()
{
	return Global_2359302.f_2;
}

bool func_229()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_230()
{
	return MISC::IS_BIT_SET(Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_18, 14);
}

int func_231(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_232())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2425869[iParam0 /*443*/].f_199, 2))
	{
		return 1;
	}
	return 0;
}

bool func_232()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_233(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_969055.f_14[iParam0];
	if (func_223())
	{
		iVar2 = func_219(iParam1);
		if (!iVar2 == -1)
		{
			return func_217(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_592[iParam0 /*16355*/].f_7079[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_121())
	{
		if (Global_4456448.f_77785[iParam0] != -1 && Global_4456448.f_77785[iParam0] <= 4)
		{
			if (Global_4456448.f_77785[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_77785[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_77785[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_77785[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4456448.f_15, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4456448.f_77785[iParam0];
			}
		}
		else
		{
			iVar0 = func_203(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_234(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_15, 26) && !func_208(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_215(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_234(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_129476;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_129477;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_129478;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_129479;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

bool func_235(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_236()
{
	if ((Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 > 0 && Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 < 3) || (Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 0 && func_71(PLAYER::PLAYER_ID(), 6)))
	{
		if (func_139(PLAYER::PLAYER_ID(), 1, 0) || func_112())
		{
			if ((!func_237(PLAYER::PLAYER_ID(), 5) && !func_237(PLAYER::PLAYER_ID(), 32)) && !func_237(PLAYER::PLAYER_ID(), 148))
			{
				return 1;
			}
			else if (!iLocal_114)
			{
				if (HUD::DOES_BLIP_EXIST(Global_1663742))
				{
					HUD::REMOVE_BLIP(&Global_1663742);
				}
				iLocal_114 = 1;
			}
		}
		else if (iLocal_114)
		{
			func_244();
			iLocal_114 = 0;
		}
		if (Local_372.f_26 == 3)
		{
			if (Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_3 == 0 && func_71(PLAYER::PLAYER_ID(), 6))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_237(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_83() != 0)
	{
		return 0;
	}
	if (!func_238(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1590682[iVar0 /*883*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

int func_238(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2440049.f_1, iParam0);
	}
	return 1;
}

void func_239()
{
	if (HUD::DOES_BLIP_EXIST(Global_1663742))
	{
		if (func_118() || func_240())
		{
			HUD::SET_BLIP_DISPLAY(Global_1663742, 0);
		}
		else
		{
			HUD::SET_BLIP_DISPLAY(Global_1663742, 4);
		}
		if (!iLocal_103)
		{
			if (func_260(PLAYER::PLAYER_ID(), 1, 0))
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Global_1663742, true);
				iLocal_103 = 1;
			}
		}
		else if (!func_260(PLAYER::PLAYER_ID(), 1, 0))
		{
			HUD::SET_BLIP_AS_SHORT_RANGE(Global_1663742, false);
			iLocal_103 = 0;
		}
	}
}

var func_240()
{
	return Global_2416085.f_1864;
}

int func_241()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
	{
		if (func_4(Local_372.f_22))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_372.f_22), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_372.f_22), 1, 40000))
			{
				if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(Local_372.f_22))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_372.f_22))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_372.f_22), -2000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_372.f_22), 0f);
					}
					return 1;
				}
				else if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (func_10(Local_372.f_22))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_372.f_22), -2000f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_372.f_22), 0f);
						return 1;
					}
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_242()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_308 == -1 && MISC::IS_BIT_SET(iLocal_577, 5))
	{
		return 0;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
	{
		if (func_4(Local_372.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_372.f_22)))
				{
					if (func_243(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_372.f_22), -1))
					{
						return 1;
					}
				}
			}
			if (iLocal_308 >= 0)
			{
				if (iLocal_308 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_308)))
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_308));
						if (func_14(iVar0, 1, 1))
						{
							iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
							if (PED::IS_PED_SITTING_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_372.f_22)))
							{
								if (func_243(iVar1, NETWORK::NET_TO_VEH(Local_372.f_22), -1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_243(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iParam2, false) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_244()
{
	Global_1663742 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_372.f_22));
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_372.f_22))))
	{
		HUD::SET_BLIP_SPRITE(Global_1663742, 348);
	}
	else
	{
		HUD::SET_BLIP_SPRITE(Global_1663742, 225);
	}
	HUD::SET_BLIP_COLOUR(Global_1663742, 2);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_1663742, "IMPEX_HIPR_BLP");
	if (func_118())
	{
		HUD::SET_BLIP_DISPLAY(Global_1663742, 0);
	}
}

int func_245(int iParam0, int iParam1)
{
	if (func_166(iParam0, 1215605247, &uLocal_333, 0f, 500, 1, iParam1))
	{
		return 1;
	}
	return 0;
}

void func_246(int iParam0, int iParam1, bool bParam2)
{
	if (func_251())
	{
		if (iParam1 == 1)
		{
			if (Global_2540384.f_4458 == -1)
			{
				Global_2540384.f_4458 = Global_262145.f_26466;
			}
			func_250(&(Global_2540384.f_4456), 0, 0);
			if (bParam2)
			{
				if (Global_2540384.f_4461 == -1)
				{
					Global_2540384.f_4461 = Global_262145.f_26467;
				}
				func_250(&(Global_2540384.f_4459), 0, 0);
			}
			else
			{
				Global_1312436 = 0;
				Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_8 = 0;
				func_249(1);
			}
		}
		else
		{
			Global_1312436 = 0;
			Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_8 = 0;
			func_249(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_248()) && !func_247(PLAYER::PLAYER_ID()))
		{
			Global_968396 = 0;
		}
		STATS::_PLAYSTATS_PASSIVE_MODE(false, -1, -1, iParam0);
	}
}

int func_247(int iParam0)
{
	if (func_139(iParam0, 1, 0))
	{
		if (Global_1590682[iParam0 /*883*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_248()
{
	return Global_2451787.f_838;
}

void func_249(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_251())
		{
			if (func_14(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(false);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(true);
			if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
			{
				Global_1312436.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(false, false);
				}
			}
		}
		else
		{
			if (func_14(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), false);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312436.f_1 == 0 || Global_1312436.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(true, false);
				}
			}
			NETWORK::NETWORK_SET_PLAYER_IS_PASSIVE(true);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(false);
		}
	}
}

void func_250(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

bool func_251()
{
	return Global_1312436;
}

void func_252(int iParam0)
{
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(Global_2540384.f_4655, 28))
		{
			MISC::SET_BIT(&(Global_2540384.f_4655), 28);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2540384.f_4655, 28))
	{
		MISC::CLEAR_BIT(&(Global_2540384.f_4655), 28);
	}
}

int func_253()
{
	if (func_118())
	{
		return 0;
	}
	if (!func_254(0, 1, 1, 1))
	{
		return 0;
	}
	return 1;
}

int func_254(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_139(PLAYER::PLAYER_ID(), 1, 0))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_258(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_110())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1574190)
	{
		return 0;
	}
	if (func_257())
	{
		return 0;
	}
	if (func_256())
	{
		return 0;
	}
	if (func_525())
	{
		return 0;
	}
	if (Global_74030)
	{
		return 0;
	}
	if (Global_2550454)
	{
		return 0;
	}
	if (func_255(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_255(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2515846;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_256()
{
	return Global_2451787.f_689;
}

bool func_257()
{
	return Global_2451787.f_842;
}

int func_258(int iParam0)
{
	if (Global_2425869[iParam0 /*443*/].f_212 == 0)
	{
		return 0;
	}
	return 1;
}

void func_259(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_212, iParam0))
		{
			MISC::SET_BIT(&(Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_212), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_212, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_212), iParam0);
	}
}

int func_260(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_121())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1590682[iParam0 /*883*/].f_274.f_26, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_261()
{
	struct<3> Var0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
	{
		if (func_4(Local_372.f_22))
		{
			if (!func_242())
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_372.f_22), true) };
				if (func_262(Var0, 1215605247, 18))
				{
					if (func_245(NETWORK::NET_TO_VEH(Local_372.f_22), 1))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_262(struct<3> Param0, int iParam3, int iParam4)
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_169(iParam3), true) <= IntToFloat(iParam4))
	{
		return 1;
	}
	return 0;
}

void func_263()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
	{
		if (func_4(Local_372.f_22))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_372.f_22), false))
				{
					if (!MISC::IS_BIT_SET(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
					{
						MISC::SET_BIT(&(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
					}
				}
				else if (func_264(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_372.f_22), 1) < 180f)
				{
					if (!MISC::IS_BIT_SET(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
					{
						MISC::SET_BIT(&(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
					}
				}
				else if (MISC::IS_BIT_SET(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2, 2))
				{
					MISC::CLEAR_BIT(&(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 2);
				}
			}
		}
	}
}

float func_264(int iParam0, int iParam1, bool bParam2)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, bParam2);
}

void func_265()
{
	int iVar0;
	
	if (iLocal_89)
	{
		func_370();
		if (!MISC::IS_BIT_SET(iLocal_577, 1))
		{
			if (Global_2540384.f_1743 > 0)
			{
				if (Global_2540384.f_1746 == 0)
				{
					Global_2540384.f_1746 = NETWORK::GET_NETWORK_TIME();
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2540384.f_1746) > Global_262145.f_11477)
				{
					if (!func_107())
					{
						if (func_70())
						{
							if (func_253())
							{
								if (!func_369())
								{
									if (!func_368(0) && !func_124())
									{
										Global_22110 = 0;
										iVar0 = func_80(1199, -1, 0);
										if (!MISC::IS_BIT_SET(iVar0, 0))
										{
											if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2540384.f_1746) > 20000)
											{
												if (func_367(18, "CELL_CLTEST6", 2, "NULL", Global_2540384.f_1743, "TestSender1", 4, 0, 1, 0, 0, bLocal_110, 0, 0, 0, 0, 0))
												{
													MISC::SET_BIT(&iVar0, 0);
													func_146(1199, iVar0, -1, 1, 0);
													MISC::SET_BIT(&iLocal_577, 1);
													func_365(0f, 0f, 0f, func_366(19), "");
													Global_2540384.f_1745 = 1;
													iLocal_89 = 0;
												}
											}
										}
										else if (func_367(18, "CELL_CLTEST1", 2, "NULL", Global_2540384.f_1743, "TestSender1", 4, 0, 1, 0, 0, bLocal_110, 0, 0, 0, 0, 0))
										{
											func_365(0f, 0f, 0f, func_366(19), "");
											MISC::SET_BIT(&iLocal_577, 1);
											Global_2540384.f_1745 = 1;
											iLocal_89 = 0;
										}
									}
								}
								else
								{
									Global_2540384.f_1746 = NETWORK::GET_NETWORK_TIME();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_577, 1))
	{
		if (!MISC::IS_BIT_SET(iLocal_330, 5))
		{
			if (func_253())
			{
				if (bLocal_110)
				{
					func_165("IMPEX_HELP_LNCH", -1);
				}
				MISC::SET_BIT(&iLocal_330, 5);
				func_507(&uLocal_316, 0, 0);
			}
		}
	}
	if (iLocal_112)
	{
		if (func_515())
		{
			if (!func_508(&uLocal_120))
			{
				func_507(&uLocal_120, 0, 0);
			}
			else if (func_506(&uLocal_120, 10000, 0))
			{
				if (func_266(18, "CELL_IMPT", 0, 0))
				{
					iLocal_112 = 0;
					func_46(&uLocal_120);
				}
			}
		}
	}
}

bool func_266(int iParam0, char* sParam1, bool bParam2, int iParam3)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_267(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_267(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_268(&uVar0, iParam0, func_364(), sParam1, iVar165, 3, iParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_268(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_363(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_362(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_358(iParam6))
	{
		return 0;
	}
	if (func_355(iVar0, iVar1, iVar2))
	{
		if (func_354())
		{
			return 0;
		}
		func_353();
		return func_275(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_274(iParam4))
	{
		return 0;
	}
	func_269(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_269(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1370593.f_40.f_1 = iParam0;
	Global_1370593.f_40.f_2 = iParam1;
	Global_1370593.f_40.f_3 = iParam2;
	StringCopy(&(Global_1370593.f_40.f_4), sParam3, 16);
	Global_1370593.f_40.f_8 = iParam4;
	Global_1370593.f_40.f_9 = iParam5;
	Global_1370593.f_40.f_14 = iParam6;
	func_270(iParam4);
	func_353();
	Global_1370593.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_270(int iParam0)
{
	if (func_273(iParam0))
	{
		func_272();
		return;
	}
	func_271();
}

void func_271()
{
	Global_1370593.f_40.f_10 = 0;
}

void func_272()
{
	Global_1370593.f_40.f_10 = 1;
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_274(int iParam0)
{
	return iParam0 > Global_1370593.f_40.f_8;
}

int func_275(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_352();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_349(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_346(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_349(uParam0, sParam3, sParam4);
		}
		return func_329(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_328(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_317(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_316(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_276(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_276(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_315();
	bVar0 = true;
	if (func_278(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_277(120000);
		return 1;
	}
	return 0;
}

void func_277(int iParam0)
{
	Global_1370593.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1370593.f_40.f_12 = 1;
}

int func_278(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_121();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_309(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1370593.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_308(sParam5, bParam6, &iVar3);
	uVar5 = func_306(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_305(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_282(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_281();
	}
	func_315();
	func_280();
	func_279();
	return 1;
}

void func_279()
{
	Global_1370593.f_57 = 0;
	Global_1370593.f_57.f_1 = 0;
}

void func_280()
{
	Global_1370593.f_40 = 3;
}

void func_281()
{
	MISC::SET_BIT(&Global_7551, 8);
}

int func_282(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_283(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8258 = iParam6;
			MISC::SET_BIT(&Global_4271024, 0);
		}
		return 1;
	}
	return 0;
}

int func_283(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_298();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19681 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19681 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19681 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4271009 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_297() == 0)
	{
		func_295();
		return 0;
	}
	func_294(Global_4271008);
	StringCopy(&(Global_4269759[Global_4271008 /*104*/]), sParam1, 64);
	Global_4269759[Global_4271008 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4269759[Global_4271008 /*104*/].f_24 = iParam2;
	}
	Global_4269759[Global_4271008 /*104*/].f_25 = iParam7;
	Global_4269759[Global_4271008 /*104*/].f_26 = uParam8;
	Global_4269759[Global_4271008 /*104*/].f_29 = uParam9;
	Global_4269759[Global_4271008 /*104*/].f_30 = uParam12;
	Global_4269759[Global_4271008 /*104*/].f_31 = uParam11;
	Global_4269759[Global_4271008 /*104*/].f_28 = 0;
	Global_4269759[Global_4271008 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_33), sParam4, 64);
	Global_4269759[Global_4271008 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_50), sParam5, 64);
	Global_4269759[Global_4271008 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4269759[Global_4271008 /*104*/].f_83), sParam15, 64);
	func_298();
	switch (iParam16)
	{
		case 3:
			Global_4269759[Global_4271008 /*104*/].f_99[Global_19681] = 1;
			break;
		
		case 0:
			Global_4269759[Global_4271008 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4269759[Global_4271008 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4269759[Global_4271008 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_19681)
		{
			case 0:
				func_293(0);
				break;
			
			case 1:
				func_293(1);
				break;
			
			case 2:
				func_293(2);
				break;
			
			case 3:
				func_293(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4271009 = 1;
				break;
			
			case 0:
				Global_4271009 = 1;
				break;
			
			case 2:
				Global_4271009 = 1;
				break;
			
			case 1:
				Global_4271009 = 1;
				break;
			}
	}
	Global_22074[Global_4271008] = 0;
	if (bParam10)
	{
		func_298();
		if (Global_19624)
		{
			StringCopy(&Global_19670, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19681)
			{
				case 0:
					StringCopy(&Global_19670, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19670, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19670, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19670, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_292())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19670, true);
			}
		}
	}
	if (!Global_19865)
	{
		if (Global_19681.f_1 == 6)
		{
			func_291(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_287(1);
			func_291(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432, -1082130432, -1082130432);
		}
	}
	func_284(iParam0, sParam1);
	return 1;
}

void func_284(int iParam0, char* sParam1)
{
	if (!func_285())
	{
		return;
	}
	STATS::_0x0077F15613D36993(iParam0, -1180597171, MISC::GET_HASH_KEY(sParam1), 0);
}

int func_285()
{
	if (!Global_262145.f_28160)
	{
		return 0;
	}
	if (!Global_76833)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_121())
	{
		return 0;
	}
	if (func_286(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_286(int iParam0)
{
	return func_133(iParam0, 20);
}

void func_287(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_22073 = 0;
	Global_8156 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_8120[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_290(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_7552, 3))
								{
									iVar2 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_19868 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_289(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2462245)
							{
								if (iVar1 == 14)
								{
									func_288(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_7558[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_7558[iVar1 /*15*/].f_4)
					{
						if (Global_8120[iVar0] == 0)
						{
							Global_8084[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_111858.f_14137[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_111858.f_14137[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_111858.f_14137[iVar3 /*104*/].f_99[Global_19681] == 1)
											{
												Global_22073++;
											}
										}
									}
									iVar3++;
								}
								func_288(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22073), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_76833)
								{
									iVar4 = 0;
									iVar4 = Global_4269758;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4269759[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4269759[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4269759[iVar5 /*104*/].f_99[Global_19681] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_288(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_19681)
									{
										case 0:
											iVar6 = Global_42812;
											break;
										
										case 1:
											iVar6 = Global_42813;
											break;
										
										case 2:
											iVar6 = Global_42814;
											break;
										
										default:
											break;
									}
									func_288(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_288(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22068), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_289(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7557);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_7552, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_289(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_7552, 3))
								{
									iVar8 = 42;
									Global_19868 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_19868 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_289(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_289(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_7558[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_7552, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19662, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_7558[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_289(&(Global_7558[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_7558[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1627252.f_1;
								func_288(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_288(Global_19662, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_7558[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_7558[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_8120[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_288(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_289(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_289(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_289(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_289(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_289(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_289(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_290(int iParam0)
{
	return Global_41631 == iParam0;
}

void func_291(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_292()
{
	return Global_1312896;
}

void func_293(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_111858.f_14047[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_4269759[iParam0 /*104*/].f_18 = iVar0;
	Global_4269759[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4269759[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4269759[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4269759[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4269759[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_295()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4271008 = 11;
	Global_4269759[Global_4271008 /*104*/].f_18 = -1;
	Global_4269759[Global_4271008 /*104*/].f_18.f_1 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_2 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_3 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_296(Global_4269759[iVar2 /*104*/].f_18, Global_4269759[Global_4271008 /*104*/].f_18))
		{
			Global_4271008 = iVar2;
		}
		iVar2++;
	}
	Global_4269759[Global_4271008 /*104*/].f_24 = 1;
}

int func_296(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_297()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4269759[iVar2 /*104*/].f_24 == 0)
		{
			Global_4271008 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4271008 = 11;
	Global_4269759[Global_4271008 /*104*/].f_18 = -1;
	Global_4269759[Global_4271008 /*104*/].f_18.f_1 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_2 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_3 = 0;
	Global_4269759[Global_4271008 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4269759[iVar2 /*104*/].f_24 == 0 || Global_4269759[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_296(Global_4269759[iVar2 /*104*/].f_18, Global_4269759[Global_4271008 /*104*/].f_18))
			{
				Global_4271008 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4271008 == 11)
	{
		return 0;
	}
	Global_4269759[Global_4271008 /*104*/].f_99[0] = 0;
	Global_4269759[Global_4271008 /*104*/].f_99[1] = 0;
	Global_4269759[Global_4271008 /*104*/].f_99[2] = 0;
	return 1;
}

void func_298()
{
	if (func_290(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[0 /*29*/])
			{
				Global_19681 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[1 /*29*/])
			{
				Global_19681 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_111858.f_28046[2 /*29*/])
			{
				Global_19681 = 2;
			}
			else
			{
				Global_19681 = 0;
			}
		}
	}
	else
	{
		Global_19681 = func_299();
		if (Global_19681 == 145)
		{
			Global_19681 = 3;
		}
		if (Global_76833)
		{
			Global_19681 = 3;
		}
		if (Global_19681 > 3)
		{
			Global_19681 = 3;
		}
	}
}

var func_299()
{
	func_300();
	return Global_111858.f_2359.f_539.f_4321;
}

void func_300()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_303(Global_111858.f_2359.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_302(PLAYER::PLAYER_PED_ID());
			if (func_301(iVar0) && (!func_290(14) || Global_110809))
			{
				if (Global_111858.f_2359.f_539.f_4321 != iVar0 && func_301(Global_111858.f_2359.f_539.f_4321))
				{
					Global_111858.f_2359.f_539.f_4322 = Global_111858.f_2359.f_539.f_4321;
				}
				Global_111858.f_2359.f_539.f_4323 = iVar0;
				Global_111858.f_2359.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_111858.f_2359.f_539.f_4321 != 145)
			{
				Global_111858.f_2359.f_539.f_4323 = Global_111858.f_2359.f_539.f_4321;
			}
			return;
		}
	}
	Global_111858.f_2359.f_539.f_4321 = 145;
}

bool func_301(int iParam0)
{
	return iParam0 < 3;
}

int func_302(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_303(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_303(int iParam0)
{
	if (func_301(iParam0))
	{
		return func_304(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_304(int iParam0)
{
	return Global_1848[iParam0 /*29*/];
}

int func_305(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_283(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8258 = iParam10;
			MISC::SET_BIT(&Global_4271024, 0);
		}
		return 1;
	}
	return 0;
}

int func_306(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_307(2, iParam1);
	return iParam0;
}

void func_307(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_308(char* sParam0, bool bParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_307(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}

int func_309(int iParam0)
{
	int iVar0;
	
	iVar0 = func_312(iParam0);
	if (iVar0 == -1)
	{
		func_310(iParam0, 1);
		return 0;
	}
	Global_1389221[iVar0 /*5*/].f_4 = 1;
	return Global_1389221[iVar0 /*5*/].f_2;
}

void func_310(int iParam0, bool bParam1)
{
	if (!func_14(iParam0, 0, 1))
	{
		return;
	}
	if (func_312(iParam0) != -1)
	{
		return;
	}
	if (Global_1389384)
	{
		if (iParam0 == Global_1389384.f_1)
		{
			return;
		}
	}
	if (func_311(iParam0))
	{
		return;
	}
	if (Global_1389422 >= 32)
	{
		return;
	}
	Global_1389389[Global_1389422] = iParam0;
	Global_1389422++;
	if (bParam1)
	{
	}
}

int func_311(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389422)
	{
		if (Global_1389389[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_312(int iParam0)
{
	int iVar0;
	
	if (!func_14(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1389382 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1389382)
	{
		if (Global_1389221[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1389221[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1389221[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_313(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_313(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1389382)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1389221[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1389221[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1389221[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1389221[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1389382)
	{
		Global_1389221[iVar32 /*5*/] = { Global_1389221[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_314(&(Global_1389221[iVar32 /*5*/]));
	Global_1389382 = (Global_1389382 - 1);
}

void func_314(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_121();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_315()
{
	Global_1370593.f_40.f_9 = 4;
}

int func_316(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_315();
	bVar0 = false;
	return func_278(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_317(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_318(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_318(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_121();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_309(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1370593.f_40.f_13))
			{
				return 0;
			}
		}
		Global_22066 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_308(sParam5, bParam6, &iVar3);
	uVar5 = func_306(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_367(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_320(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_281();
	}
	func_319();
	func_280();
	func_279();
	return 1;
}

void func_319()
{
	Global_1370593.f_40.f_9 = 3;
}

int func_320(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_7551, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_322(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_8258 = iParam6;
			Global_8161[3 /*6*/] = { func_321(iParam0) };
			Global_8238 = iParam0;
			MISC::SET_BIT(&Global_7551, 1);
			MISC::SET_BIT(&Global_7551, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_321(int iParam0)
{
	return Global_1848[iParam0 /*29*/].f_3;
}

int func_322(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_298();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_19681 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_19681 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_19681 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_111858.f_14047[Global_19681 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_327() == 0)
	{
		func_325();
		return 0;
	}
	func_324(Global_22072);
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/]), sParam1, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_111858.f_14137[Global_22072 /*104*/].f_24 = iParam2;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_25 = iParam7;
	Global_111858.f_14137[Global_22072 /*104*/].f_26 = uParam8;
	Global_111858.f_14137[Global_22072 /*104*/].f_29 = uParam9;
	Global_111858.f_14137[Global_22072 /*104*/].f_30 = uParam12;
	Global_111858.f_14137[Global_22072 /*104*/].f_31 = uParam11;
	Global_111858.f_14137[Global_22072 /*104*/].f_28 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_33), sParam4, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_50), sParam5, 64);
	Global_111858.f_14137[Global_22072 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_111858.f_14137[Global_22072 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_7551, 10))
	{
		Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 1;
		Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 1;
		Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 1;
		Global_8257 = 4;
		func_293(0);
		func_293(2);
		func_293(1);
	}
	else
	{
		func_298();
		switch (iParam16)
		{
			case 3:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[Global_19681] = 1;
				break;
			
			case 0:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_19681)
			{
				case 0:
					func_293(0);
					Global_8257 = 0;
					break;
				
				case 1:
					func_293(1);
					Global_8257 = 1;
					break;
				
				case 2:
					func_293(2);
					Global_8257 = 2;
					break;
				
				case 3:
					func_293(3);
					Global_8257 = 3;
					break;
				
				default:
					Global_8257 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_7551, 10))
		{
			Global_111858.f_14047[0 /*20*/].f_17 = 1;
			Global_111858.f_14047[1 /*20*/].f_17 = 1;
			Global_111858.f_14047[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_111858.f_14047[Global_19681 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_111858.f_14047[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_111858.f_14047[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_111858.f_14047[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_22074[Global_22072] = 0;
	if (bParam10)
	{
		func_298();
		if (Global_19624)
		{
			StringCopy(&Global_19670, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_19681)
			{
				case 0:
					StringCopy(&Global_19670, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_19670, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_19670, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_19670, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_292())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_19670, true);
			}
		}
	}
	if (!Global_19865)
	{
		if (Global_19681.f_1 == 6)
		{
			func_291(Global_19662, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_287(1);
			func_291(Global_19662, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_19661), -1082130432, -1082130432, -1082130432);
		}
	}
	func_323(iParam0, sParam1);
	return 1;
}

void func_323(int iParam0, char* sParam1)
{
	if (!func_285())
	{
		return;
	}
	STATS::_0x0077F15613D36993(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0);
}

void func_324(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_111858.f_14137[iParam0 /*104*/].f_18 = iVar0;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_111858.f_14137[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_325()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_22072 = 34;
	Global_111858.f_14137[Global_22072 /*104*/].f_18 = -1;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_1 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_2 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_3 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_326(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
		{
			Global_22072 = iVar2;
		}
		iVar2++;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_24 = 1;
}

int func_326(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_327()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_76833)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 0)
		{
			Global_22072 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_22072 = 34;
	Global_111858.f_14137[Global_22072 /*104*/].f_18 = -1;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_1 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_2 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_3 = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 0 || Global_111858.f_14137[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_326(Global_111858.f_14137[iVar2 /*104*/].f_18, Global_111858.f_14137[Global_22072 /*104*/].f_18))
			{
				Global_22072 = iVar2;
			}
		}
		if (Global_111858.f_14137[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_22072 == 34)
	{
		return 0;
	}
	Global_111858.f_14137[Global_22072 /*104*/].f_99[0] = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_99[1] = 0;
	Global_111858.f_14137[Global_22072 /*104*/].f_99[2] = 0;
	return 1;
}

int func_328(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_319();
	bVar0 = true;
	if (func_318(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_277(120000);
		return 1;
	}
	return 0;
}

int func_329(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (MISC::IS_BIT_SET(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (MISC::IS_BIT_SET(iParam4, 4))
	{
		bVar0 = func_345(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_335(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (MISC::IS_BIT_SET(iParam4, 3))
		{
			func_334(1);
		}
		if (MISC::IS_BIT_SET(iParam4, 5))
		{
			func_333(1);
		}
		func_332();
		func_280();
		func_331();
		func_330();
		return 1;
	}
	return 0;
}

void func_330()
{
	Global_2549970 = 0;
}

void func_331()
{
	Global_1370593.f_57 = 1;
	Global_1370593.f_57.f_1 = 0;
}

void func_332()
{
	Global_1370593.f_40.f_9 = 1;
}

void func_333(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7553, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7553, 0);
	}
}

void func_334(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_7551, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_7551, 20);
	}
}

int func_335(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_344(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21053 = 0;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 0;
	Global_21059 = 0;
	Global_2621441 = 0;
	return func_336(sParam3, iParam4, bParam7);
}

int func_336(char* sParam0, int iParam1, bool bParam2)
{
	Global_21006 = 0;
	if (Global_21005 == 0 || Global_21007 == 2)
	{
		if (Global_21005 != 0)
		{
			if (iParam1 > Global_21007)
			{
				if (Global_21012 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_19681.f_1 = 3;
					Global_21005 = 0;
					Global_21006 = 1;
					Global_21058 = 0;
					Global_21001 = 0;
					Global_21002 = 0;
					Global_21016 = 0;
					Global_21015 = 0;
					Global_19680 = 0;
				}
				else
				{
					func_343();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_114(8, -1))
		{
			return 0;
		}
		Global_21081 = { Global_21075 };
		func_342();
		Global_20294 = { Global_20459 };
		Global_21011 = Global_21012;
		Global_21018 = Global_21019;
		Global_2621442 = Global_2621441;
		Global_21020 = { Global_21036 };
		Global_21013 = Global_21014;
		Global_21995 = Global_21996;
		Global_22003 = { Global_22009 };
		Global_21997 = Global_21998;
		Global_21999 = Global_22000;
		Global_22001 = Global_22002;
		Global_20624.f_370 = Global_21994;
		Global_20624.f_368 = Global_21992;
		Global_20624.f_369 = Global_21993;
		Global_21001 = Global_21002;
		if (Global_21011)
		{
			MISC::CLEAR_BIT(&Global_7551, 20);
			MISC::CLEAR_BIT(&Global_7552, 17);
			MISC::CLEAR_BIT(&Global_7553, 0);
			if (bParam2)
			{
				func_298();
				if (Global_8356[Global_19681 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_19681.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_19647 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_341())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_76833)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_340())
			{
				return 0;
			}
			else
			{
				switch (Global_19681.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_7551, 9))
				{
					return 0;
				}
			}
			func_339();
			Global_21015 = bParam2;
		}
		Global_21007 = iParam1;
		StringCopy(&Global_20624, sParam0, 24);
		Global_19871 = 0;
		func_338();
		func_337();
		return 1;
	}
	if (Global_21005 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_21007 || iParam1 == Global_21007)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_343();
	}
	return 0;
}

void func_337()
{
	if (!func_285())
	{
		return;
	}
	if (Global_21011)
	{
		MemCopy(&(Global_1703978.f_1), {Global_20624}, 4);
		Global_1703978 = Global_6866;
		Global_1703978.f_6 = Global_21015;
	}
}

void func_338()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_19873[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21005 = 1;
}

void func_339()
{
	Global_21058 = Global_21057;
	Global_21052 = Global_21053;
	Global_21099 = { Global_21087 };
	Global_21105 = { Global_21093 };
	Global_21060 = Global_21059;
	Global_21129 = { Global_21111 };
	Global_21135 = { Global_21117 };
	Global_21141 = { Global_21123 };
	Global_21147 = { Global_21153 };
	Global_6866 = Global_6867;
	Global_6868 = Global_6869;
	Global_21016 = Global_21017;
	Global_21018 = Global_21019;
	Global_21020 = { Global_21036 };
	Global_21009 = Global_21010;
	Global_22021 = 0;
	Global_21054 = 0;
	Global_21055 = 0;
	MISC::CLEAR_BIT(&Global_7552, 16);
}

int func_340()
{
	if (Global_19681.f_1 == 1 || Global_19681.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_341()
{
	int iVar0;
	int iVar1;
	
	if (Global_76833)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("WEAPON_SNIPERRIFLE") || iVar1 == joaat("WEAPON_HEAVYSNIPER")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_342()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_20294[iVar0 /*10*/] = 0;
		StringCopy(&(Global_20294[iVar0 /*10*/].f_1), "", 24);
		Global_20294[iVar0 /*10*/].f_7 = 0;
		Global_20294[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_20294.f_161 = -99;
	Global_20294.f_162 = { 0f, 0f, 0f };
}

void func_343()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22016 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_19681.f_1 == 9) || Global_19680 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21005 = 6;
		Global_19681.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21005 = 6;
		return;
	}
}

void func_344(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_20459 = { *uParam0 };
	Global_6867 = iParam1;
	StringCopy(&Global_21075, sParam2, 24);
	Global_21994 = iParam5;
	if (iParam3 == 0)
	{
		Global_21992 = 1;
		Global_21990 = 0;
	}
	else
	{
		Global_21992 = 0;
		Global_21990 = 1;
	}
	if (iParam4 == 0)
	{
		Global_21993 = 1;
		Global_21991 = 0;
	}
	else
	{
		Global_21993 = 0;
		Global_21991 = 1;
	}
}

int func_345(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_344(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_21053 = 1;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 0;
	Global_21059 = 0;
	Global_2621441 = 0;
	return func_336(sParam3, iParam4, bParam7);
}

int func_346(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_348(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_347();
		func_332();
		func_280();
		func_331();
		func_330();
		return 1;
	}
	return 0;
}

void func_347()
{
	Global_22023 = 0;
}

bool func_348(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_344(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21053 = 0;
	Global_21012 = 1;
	Global_21019 = 0;
	Global_21014 = 1;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_21010 = 0;
	Global_21057 = 1;
	Global_21059 = 0;
	StringCopy(&Global_21153, sParam5, 24);
	Global_2621441 = 0;
	return func_336(sParam3, iParam4, bParam8);
}

int func_349(var uParam0, char* sParam1, char* sParam2)
{
	if (func_351(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_350();
		func_280();
		func_331();
		return 1;
	}
	return 0;
}

void func_350()
{
	Global_1370593.f_40.f_9 = 2;
}

bool func_351(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_344(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21012 = 0;
	Global_21014 = 0;
	Global_21019 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_2621441 = 0;
	return func_336(sParam2, iParam3, 0);
}

void func_352()
{
	Global_1370593.f_55 = Global_1370593.f_40.f_1;
	Global_1370593.f_55.f_1 = Global_1370593.f_40.f_10;
}

void func_353()
{
	Global_1370593.f_40 = 1;
}

bool func_354()
{
	return Global_1370593.f_40 == 1;
}

int func_355(int iParam0, int iParam1, int iParam2)
{
	if (!func_356(iParam0))
	{
		return 0;
	}
	if (Global_1370593.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1370593.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_356(int iParam0)
{
	if (!func_357())
	{
		return 0;
	}
	if (!Global_1370593.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_357()
{
	if (Global_1370593.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_358(int iParam0)
{
	if (func_361())
	{
		return 0;
	}
	if (func_109())
	{
		return 0;
	}
	if (func_368(0))
	{
		return 0;
	}
	if (Global_1312485.f_18 != 0)
	{
		return 0;
	}
	if (Global_1663771 || func_360())
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0, 6))
	{
		if (func_359())
		{
			return 0;
		}
	}
	return 1;
}

bool func_359()
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1387851);
}

int func_360()
{
	if (Global_4254512.f_943 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_361()
{
	return func_340();
}

int func_362(int iParam0, int iParam1, int iParam2)
{
	if (!func_109())
	{
		return 0;
	}
	return func_355(iParam0, iParam1, iParam2);
}

int func_363(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

char* func_364()
{
	return "TXTMSG";
}

int func_365(struct<3> Param0, char* sParam3, char* sParam4)
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (!MISC::ARE_STRINGS_EQUAL(&(Global_2540384.f_4029[iVar0 /*26*/].f_4), sParam3))
			{
				if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2540384.f_4029[iVar0 /*26*/].f_4)))
				{
					Global_2540384.f_4029[iVar0 /*26*/] = 1;
					Global_2540384.f_4029[iVar0 /*26*/].f_1 = { Param0 };
					StringCopy(&(Global_2540384.f_4029[iVar0 /*26*/].f_4), sParam3, 24);
					StringCopy(&(Global_2540384.f_4029[iVar0 /*26*/].f_10), sParam4, 64);
					return 1;
				}
			}
			else if (!func_31(Global_2540384.f_4029[iVar0 /*26*/].f_1, Param0, 0))
			{
				Global_2540384.f_4029[iVar0 /*26*/] = 1;
				Global_2540384.f_4029[iVar0 /*26*/].f_1 = { Param0 };
				StringCopy(&(Global_2540384.f_4029[iVar0 /*26*/].f_4), sParam3, 24);
				StringCopy(&(Global_2540384.f_4029[iVar0 /*26*/].f_10), sParam4, 64);
				return 1;
			}
			else
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_366(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
	return "";
}

int func_367(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_7551, 10);
	iVar0 = 3;
	if (func_322(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_8258 = iParam10;
			Global_8161[3 /*6*/] = { func_321(iParam0) };
			Global_8238 = iParam0;
			StringCopy(&Global_8239, sParam5, 64);
			MISC::SET_BIT(&Global_7551, 1);
			MISC::SET_BIT(&Global_7551, 7);
		}
		return 1;
	}
	return 0;
}

int func_368(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_19681.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_7551, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_19681.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_369()
{
	return func_357();
}

void func_370()
{
	if (func_70())
	{
		if (!iLocal_335 == Local_372.f_32)
		{
			Global_2540384.f_1703 = { Local_360 };
			func_371();
			iLocal_335 = Local_372.f_32;
		}
	}
}

void func_371()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		StringCopy(&(Global_2540384.f_1722[iVar1 /*4*/]), "", 16);
		if (!Global_2540384.f_1703[iVar1] == -1 && Global_2540384.f_1703.f_6[iVar1] == 0)
		{
			StringCopy(&(Global_2540384.f_1722[iVar0 /*4*/]), func_372(Global_2540384.f_1703[iVar1], 1), 16);
			iVar0++;
		}
		iVar1++;
	}
	Global_2540384.f_1743 = iVar0;
}

char* func_372(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_373(bParam1, "IMPEX_2020_0B", "IMPEX_2020_0");
		
		case 1:
			return func_373(bParam1, "IMPEX_2020_1B", "IMPEX_2020_1");
		
		case 2:
			return func_373(bParam1, "IMPEX_2020_2B", "IMPEX_2020_2");
		
		case 3:
			return func_373(bParam1, "IMPEX_2020_3B", "IMPEX_2020_3");
		
		case 4:
			return func_373(bParam1, "IMPEX_2020_4B", "IMPEX_2020_4");
		
		case 5:
			return func_373(bParam1, "IMPEX_2020_5B", "IMPEX_2020_5");
		
		case 6:
			return func_373(bParam1, "IMPEX_2020_6B", "IMPEX_2020_6");
		
		case 7:
			return func_373(bParam1, "IMPEX_2020_7B", "IMPEX_2020_7");
		
		case 8:
			return func_373(bParam1, "IMPEX_2020_8B", "IMPEX_2020_8");
		
		case 9:
			return func_373(bParam1, "IMPEX_2020_9B", "IMPEX_2020_9");
		
		case 10:
			return func_373(bParam1, "IMPEX_2020_10B", "IMPEX_2020_10");
		
		case 11:
			return func_373(bParam1, "IMPEX_2020_11B", "IMPEX_2020_11");
		
		case 12:
			return func_373(bParam1, "IMPEX_2020_12B", "IMPEX_2020_12");
		
		case 13:
			return func_373(bParam1, "IMPEX_2020_13B", "IMPEX_2020_13");
		
		case 14:
			return func_373(bParam1, "IMPEX_2020_14B", "IMPEX_2020_14");
		
		case 15:
			return func_373(bParam1, "IMPEX_2020_15B", "IMPEX_2020_15");
		
		case 16:
			return func_373(bParam1, "IMPEX_2020_16B", "IMPEX_2020_16");
		
		case 17:
			return func_373(bParam1, "IMPEX_2020_17B", "IMPEX_2020_17");
		
		case 18:
			return func_373(bParam1, "IMPEX_2020_18B", "IMPEX_2020_18");
		
		case 19:
			return func_373(bParam1, "IMPEX_2020_19B", "IMPEX_2020_19");
		
		default:
	}
	return "";
}

char* func_373(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_374()
{
	int iVar0;
	
	if (!iLocal_104)
	{
		if (!func_379(PLAYER::PLAYER_ID(), 1))
		{
			if (!func_122(PLAYER::PLAYER_ID(), 0))
			{
				if (!Local_372.f_28 == -1)
				{
					if (!iLocal_337 == func_34(Local_372.f_28))
					{
						if (!func_378(PLAYER::PLAYER_PED_ID()))
						{
							if (!func_377(PLAYER::PLAYER_ID()))
							{
								iLocal_337 = func_34(Local_372.f_28);
								iVar0 = 0;
								while (iVar0 < iLocal_347)
								{
									ZONE::OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(iLocal_347[iVar0], iLocal_337);
									iVar0++;
								}
								iLocal_104 = 1;
								STREAMING::REQUEST_MODEL(iLocal_337);
								func_376();
								func_375(iLocal_337);
							}
						}
					}
				}
			}
		}
	}
	else if ((((func_379(PLAYER::PLAYER_ID(), 1) || (Local_372.f_28 > -1 && !iLocal_337 == func_34(Local_372.f_28))) || func_378(PLAYER::PLAYER_PED_ID())) || func_122(PLAYER::PLAYER_ID(), 0)) || func_377(PLAYER::PLAYER_ID()))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_337);
		iVar0 = 0;
		while (iVar0 < iLocal_347)
		{
			ZONE::CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(iLocal_347[iVar0]);
			iVar0++;
		}
		func_376();
		iLocal_337 = 0;
		iLocal_104 = 0;
	}
}

void func_375(int iParam0)
{
	if (MISC::IS_BIT_SET(Local_372.f_23, 0))
	{
		if (iParam0 == Local_372.f_67)
		{
			return;
		}
	}
	switch (iParam0)
	{
		case joaat("sentinel"):
		case joaat("serrano"):
		case joaat("dominator"):
		case joaat("schafter2"):
		case joaat("surge"):
			iLocal_290[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-54.2664f, -1679.549f, 28.4414f, 228.2736f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-47.0703f, -1115.41f, 25.4327f, 204.5124f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1227.06f, 2718.678f, 37.0051f, 359.6756f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1388.704f, 44.2178f, 52.6041f, 313.0655f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(430.9073f, -1154.745f, 28.2919f, 267.6113f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1123.513f, 243.2258f, 79.8556f, 237.5495f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-841.395f, -138.6138f, 36.5745f, 65.0431f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-150.0053f, -618.0887f, 31.4271f, 249.907f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-827.7974f, 170.3065f, 69.2223f, 158.4295f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_301 = 1;
			break;
		
		case joaat("jackal"):
		case joaat("ztype"):
		case joaat("tailgater"):
		case joaat("landstalker"):
		case joaat("penumbra"):
			iLocal_290[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1101.607f, -445.1016f, 34.6997f, 297.4066f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-3018.759f, 739.4393f, 26.5749f, 101.9264f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1550.796f, 881.1625f, 177.8996f, 223.4805f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_301 = 1;
			break;
		
		case joaat("f620"):
		case joaat("fq2"):
		case joaat("patriot"):
		case joaat("habanero"):
		case joaat("prairie"):
		case joaat("gresley"):
			iLocal_290[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(464.1028f, 226.5939f, 102.1875f, 247.3152f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-2437.372f, 3377.217f, 31.9214f, 29.7691f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1639.857f, -906.3636f, 7.7037f, 139.4463f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-2981.245f, 612.5886f, 19.1798f, 105.0653f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1542.332f, 887.9052f, 180.491f, 19.9514f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-420.3277f, 1202.552f, 324.6421f, 50.857f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-331.3999f, -935.0096f, 30.0798f, 249.9035f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-976.5854f, -2573.472f, 35.6066f, 240.851f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-350.7184f, 427.0929f, 109.5371f, 17.3499f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-208.5685f, -2077.887f, 26.6204f, 47.4426f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_301 = 1;
			break;
		
		case joaat("fusilade"):
		case joaat("bjxl"):
		case joaat("buccaneer"):
		case joaat("daemon"):
		case joaat("bagger"):
			iLocal_290[0] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-815.4279f, -1318.027f, 4.0003f, 170.2029f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[1] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1215.953f, -1675.18f, 2.9847f, 305.2072f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[2] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-195.9823f, -1960.096f, 26.6205f, 284.8585f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[3] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-826.9526f, -236.9994f, 36.0555f, 209.0553f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[4] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-819.5961f, 183.2204f, 71.0876f, 115.4816f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[5] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-141.4775f, -594.4868f, 31.4271f, 69.7535f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[6] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(443.759f, -1164.002f, 28.2918f, 87.9477f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[7] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(-1392.001f, 80.7104f, 52.8682f, 309.0381f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[8] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1075.871f, 248.5613f, 79.8556f, 294.4635f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_290[9] = VEHICLE::CREATE_SCRIPT_VEHICLE_GENERATOR(1218.18f, 2708.298f, 37.0054f, 359.1518f, 5f, 3f, iParam0, -1, -1, -1, -1, true, false, false, false, true, -1);
			iLocal_301 = 1;
			break;
	}
}

void func_376()
{
	int iVar0;
	
	if (iLocal_301)
	{
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (VEHICLE::DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(iLocal_290[iVar0]))
		{
			VEHICLE::DELETE_SCRIPT_VEHICLE_GENERATOR(iLocal_290[iVar0]);
		}
		iLocal_290[iVar0] = 0;
		iVar0++;
	}
	iLocal_301 = 0;
}

int func_377(int iParam0)
{
	if (iParam0 != func_121())
	{
		if (func_14(iParam0, 1, 1))
		{
			if (Global_2425869[iParam0 /*443*/].f_314.f_6 != -1)
			{
				return func_120(Global_2425869[iParam0 /*443*/].f_314.f_6) == 11;
			}
		}
	}
	return 0;
}

bool func_378(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
	}
	return INTERIOR::GET_INTERIOR_FROM_ENTITY(iParam0) == Global_150525;
}

bool func_379(int iParam0, bool bParam1)
{
	if (func_83() != 0)
	{
		return func_380(iParam0) != 0;
	}
	return func_139(iParam0, bParam1, 0);
}

int func_380(int iParam0)
{
	if (func_14(iParam0, 0, 1))
	{
		return Global_2425869[iParam0 /*443*/].f_1;
	}
	return 0;
}

void func_381()
{
	var uVar0;
	
	if (!func_508(&uLocal_322))
	{
		func_507(&uLocal_322, 0, 0);
	}
	else if (func_506(&uLocal_322, 250, 0))
	{
		func_46(&uLocal_322);
		if (func_394(1, 0))
		{
			if (!MISC::IS_BIT_SET(iLocal_330, 5) && !func_393())
			{
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if ((func_392() || func_393()) || func_389())
				{
					if (!func_388(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (!func_387(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) && !func_15(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						{
							if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
							{
								if (func_383(&uVar0))
								{
									if (!MISC::IS_BIT_SET(iLocal_330, 2))
									{
										if (func_253() && SYSTEM::TIMERA() > 500)
										{
											func_165("IMPEX_FSPRAY_FM", -1);
											MISC::SET_BIT(&iLocal_330, 2);
										}
									}
									else
									{
										SYSTEM::SETTIMERA(0);
									}
								}
								else if (!MISC::IS_BIT_SET(iLocal_330, 8))
								{
									if (func_253() && SYSTEM::TIMERA() > 500)
									{
										func_165("IMPEX_CASH_FM", -1);
										MISC::SET_BIT(&iLocal_330, 8);
									}
								}
								else
								{
									SYSTEM::SETTIMERA(0);
								}
							}
							else if (!MISC::IS_BIT_SET(iLocal_330, 11))
							{
								if (func_253() && SYSTEM::TIMERA() > 500)
								{
									func_165("IMPEX_WANTED_FM", -1);
									MISC::SET_BIT(&iLocal_330, 11);
								}
							}
							else
							{
								SYSTEM::SETTIMERA(0);
							}
						}
						else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
						{
							if (!func_382())
							{
								if (!func_15(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									if (!MISC::IS_BIT_SET(iLocal_330, 3))
									{
										MISC::CLEAR_BIT(&iLocal_330, 7);
										if (func_253() && SYSTEM::TIMERA() > 2000)
										{
											if (Global_2540384.f_4581 == 0)
											{
												if (!func_245(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 0))
												{
													func_165("IMPEX_DELIVER_FM", -1);
													MISC::SET_BIT(&iLocal_330, 3);
												}
											}
										}
									}
									else
									{
										SYSTEM::SETTIMERA(0);
									}
								}
								else if (!MISC::IS_BIT_SET(iLocal_330, 7))
								{
									if (func_253() && SYSTEM::TIMERA() > 2000)
									{
										func_165("IMPEX_RIG_FM", -1);
										MISC::SET_BIT(&iLocal_330, 7);
									}
								}
								else
								{
									SYSTEM::SETTIMERA(0);
								}
							}
							else if (!MISC::IS_BIT_SET(iLocal_330, 6))
							{
								if (func_253() && SYSTEM::TIMERA() > 2000)
								{
									func_165("IMPEX_WANTED_P", -1);
									MISC::SET_BIT(&iLocal_330, 6);
								}
							}
							else
							{
								SYSTEM::SETTIMERA(0);
							}
						}
						else if (!MISC::IS_BIT_SET(iLocal_330, 4))
						{
							if (func_253() && SYSTEM::TIMERA() > 5000)
							{
								func_165("IMPEX_WANTED_FM", -1);
								MISC::SET_BIT(&iLocal_330, 4);
							}
						}
						else
						{
							SYSTEM::SETTIMERA(0);
						}
					}
				}
				else
				{
					if (func_235("IMPEX_FSPRAY_FM"))
					{
						HUD::CLEAR_HELP(true);
					}
					MISC::CLEAR_BIT(&iLocal_330, 2);
					MISC::CLEAR_BIT(&iLocal_330, 3);
					MISC::CLEAR_BIT(&iLocal_330, 4);
					MISC::CLEAR_BIT(&iLocal_330, 6);
					MISC::CLEAR_BIT(&iLocal_330, 7);
					MISC::CLEAR_BIT(&iLocal_330, 8);
					MISC::CLEAR_BIT(&iLocal_330, 11);
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				if (func_235("IMPEX_FSPRAY_FM"))
				{
					HUD::CLEAR_HELP(true);
				}
				MISC::CLEAR_BIT(&iLocal_330, 2);
				MISC::CLEAR_BIT(&iLocal_330, 3);
				MISC::CLEAR_BIT(&iLocal_330, 4);
				MISC::CLEAR_BIT(&iLocal_330, 6);
				MISC::CLEAR_BIT(&iLocal_330, 7);
				MISC::CLEAR_BIT(&iLocal_330, 8);
				MISC::CLEAR_BIT(&iLocal_330, 11);
				if (SYSTEM::TIMERA() > 0)
				{
					SYSTEM::SETTIMERA(0);
				}
			}
		}
		else if (func_235("IMPEX_FSPRAY_FM"))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

int func_382()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	iVar2 = 0;
	while (iVar2 < 4)
	{
		iVar1 = (iVar2 - 1);
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar3, iVar1, false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1, false)))
			{
				if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1, false), false))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, iVar1, false);
					if (!PED::IS_PED_A_PLAYER(iVar0))
					{
						return 1;
					}
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_383(var uParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			*uParam0 = func_384(iVar0);
			if (!MONEY::NETWORK_CAN_SPEND_MONEY((400 + *uParam0), false, false, true, -1, 0))
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

int func_384(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	fVar3 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam0);
	if (fVar3 > 10f)
	{
		iVar9 = 8;
	}
	else if (fVar3 > 5f)
	{
		iVar9 = 4;
	}
	fVar3 = (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar5 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar5 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar5 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar5 = 80;
	}
	else
	{
		iVar5 = 100;
	}
	fVar3 = (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar6 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar6 = 20;
	}
	else if (fVar3 > 0.6f)
	{
		iVar6 = 40;
	}
	else if (fVar3 > 0.4f)
	{
		iVar6 = 60;
	}
	else
	{
		iVar6 = 75;
	}
	fVar3 = (SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) / 1000f);
	if (fVar3 > 0.99f)
	{
		iVar8 = 0;
	}
	else if (fVar3 > 0.8f)
	{
		iVar8 = 40;
	}
	else if (fVar3 > 0.6f)
	{
		iVar8 = 80;
	}
	else if (fVar3 > 0.4f)
	{
		iVar8 = 150;
	}
	else
	{
		iVar8 = 200;
	}
	if (VEHICLE::_IS_VEHICLE_DAMAGED(iParam0))
	{
		iVar8 += 50;
	}
	if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, true))
	{
		iVar8 += 50;
	}
	else if (VEHICLE::IS_VEHICLE_BUMPER_BOUNCING(iParam0, true))
	{
		iVar8 += 25;
	}
	if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, false))
	{
		iVar8 += 50;
	}
	else if (VEHICLE::IS_VEHICLE_BUMPER_BOUNCING(iParam0, false))
	{
		iVar8 += 25;
	}
	if (!VEHICLE::ARE_ALL_VEHICLE_WINDOWS_INTACT(iParam0))
	{
		iVar10 += 20;
		if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(iParam0, 6))
		{
			iVar10 += 40;
		}
		if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(iParam0, 7))
		{
			iVar10 += 40;
		}
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 4))
		{
			iVar1++;
		}
		if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 5))
		{
			iVar1++;
		}
		iVar8 = (iVar8 + iVar1 * 25);
	}
	if (VEHICLE::GET_IS_LEFT_VEHICLE_HEADLIGHT_DAMAGED(iParam0))
	{
		iVar8 += 15;
	}
	if (VEHICLE::GET_IS_RIGHT_VEHICLE_HEADLIGHT_DAMAGED(iParam0))
	{
		iVar8 += 15;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, iVar2, false))
		{
			iVar1++;
		}
		iVar2++;
	}
	iVar7 = iVar1 * 25;
	if (AUDIO::_0x5DB8010EE71FDEF2(iParam0))
	{
		iVar11 = 50;
	}
	iVar0 = (((((((iVar4 + iVar5) + iVar6) + iVar8) + iVar7) + iVar9) + iVar10) + iVar11);
	if (func_386(ENTITY::GET_ENTITY_MODEL(iParam0), 0))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_11559));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_262145.f_11559)))
		{
			iVar4 = Global_262145.f_11557;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_11558)
		{
			iVar0 = Global_262145.f_11558;
		}
	}
	else if (func_385(iParam0))
	{
		iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) * Global_262145.f_11562));
		if (iVar0 > SYSTEM::FLOOR((4f * Global_262145.f_11562)))
		{
			iVar4 = Global_262145.f_11560;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > Global_262145.f_11561)
		{
			iVar0 = Global_262145.f_11561;
		}
	}
	else
	{
		if (iVar0 > 0)
		{
			iVar4 = 50;
			iVar0 = (iVar0 + iVar4);
		}
		if (iVar0 > 1250)
		{
			iVar0 = 1250;
		}
	}
	return iVar0;
}

int func_385(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("technical2"):
		case joaat("boxville5"):
		case joaat("wastelander"):
		case joaat("phantom2"):
		case joaat("voltic2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("ruiner2"):
		case joaat("blazer5"):
			return 1;
			break;
	}
	return 0;
}

int func_386(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("moonbeam2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 1;
			break;
		
		case joaat("sabregt2"):
			if (!Global_262145.f_14227)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("tornado5"):
			if (!Global_262145.f_14228)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("virgo2"):
			if (!Global_262145.f_14226)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("minivan2"):
			if (!Global_262145.f_14229)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("slamvan3"):
			if (!Global_262145.f_14231)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("faction3"):
			if (!Global_262145.f_14230)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
		
		case joaat("sultanrs"):
		case joaat("banshee2"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("comet3"):
			if (Global_262145.f_18677)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("diablous2"):
			if (Global_262145.f_18679)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("fcr2"):
			if (Global_262145.f_18683)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("elegy"):
			if (Global_262145.f_18680)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("nero2"):
			if (Global_262145.f_18687)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("italigtb2"):
			if (Global_262145.f_18685)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("specter2"):
			if (Global_262145.f_18690)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("technical3"):
			if (Global_262145.f_20635)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("insurgent3"):
			if (Global_262145.f_20636)
			{
				if (iParam1 & 1 != 0)
				{
					return 0;
				}
				return 1;
			}
			return 0;
			break;
		
		case joaat("slamvan4"):
		case joaat("slamvan5"):
		case joaat("slamvan6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("issi4"):
		case joaat("issi5"):
		case joaat("issi6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("impaler2"):
		case joaat("impaler3"):
		case joaat("impaler4"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("deathbike"):
		case joaat("deathbike2"):
		case joaat("deathbike3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("monster3"):
		case joaat("monster4"):
		case joaat("monster5"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("dominator4"):
		case joaat("dominator5"):
		case joaat("dominator6"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("bruiser"):
		case joaat("bruiser2"):
		case joaat("bruiser3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("youga3"):
		case joaat("gauntlet5"):
		case joaat("yosemite3"):
			if (iParam1 & 1 != 0)
			{
				return 0;
			}
			return 1;
			break;
		
		case joaat("manana2"):
		case joaat("peyote3"):
		case joaat("glendale2"):
			return 1;
			break;
	}
	return 0;
}

bool func_387(int iParam0)
{
	return DECORATOR::DECOR_EXIST_ON(iParam0, "Sprayed_Vehicle_Decorator");
}

int func_388(int iParam0)
{
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "Veh_Modded_By_Player") && DECORATOR::DECOR_GET_INT(iParam0, "Veh_Modded_By_Player") != NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_389()
{
	int iVar0;
	
	if (func_517())
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		if (!func_391(iVar0, 1))
		{
			if (func_390(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_390(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_75(iParam0);
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 10)
		{
			if (Local_372.f_35[iVar1] == iVar0)
			{
				if (!func_506(&(Local_372.f_46[iVar1 /*2*/]), 120000, 0))
				{
					return 1;
				}
			}
			iVar1++;
		}
	}
	return 0;
}

int func_391(int iParam0, bool bParam1)
{
	if (Global_76833)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_392()
{
	int iVar0;
	
	if (func_517())
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (!Global_1654395)
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (!func_391(iVar0, 1))
			{
				if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iVar0, 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, true))
					{
						if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_274.f_28 <= 0)
						{
							if (!DECORATOR::DECOR_EXIST_ON(iVar0, "Not_Allow_As_Saved_Veh"))
							{
								if (!Global_1654394)
								{
									if (bLocal_302)
									{
										bLocal_302 = false;
									}
									if (func_74(&Local_360, ENTITY::GET_ENTITY_MODEL(iVar0)))
									{
										Global_2540384.f_1747 = 1;
										return 1;
									}
								}
							}
						}
					}
					else if (!bLocal_302)
					{
						bLocal_302 = true;
					}
				}
			}
		}
	}
	return 0;
}

int func_393()
{
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::IS_BIT_SET(Local_372.f_23, 0))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_372.f_22))
			{
				if (func_4(Local_372.f_22))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_372.f_22)))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

bool func_394(bool bParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = true;
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		bVar0 = false;
	}
	if (!bParam1)
	{
		if (bVar0)
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				bVar0 = false;
			}
		}
	}
	if (!bParam0)
	{
		if (bVar0)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				bVar0 = false;
			}
		}
	}
	if (bVar0)
	{
		if (func_139(PLAYER::PLAYER_ID(), 1, 0))
		{
			bVar0 = false;
		}
	}
	if (bVar0)
	{
		if (func_112())
		{
			bVar0 = false;
		}
	}
	if (!func_14(PLAYER::PLAYER_ID(), 0, 0))
	{
		bVar0 = false;
	}
	if (func_71(PLAYER::PLAYER_ID(), 1))
	{
		bVar0 = false;
	}
	if (func_122(PLAYER::PLAYER_ID(), 1))
	{
		bVar0 = false;
	}
	return bVar0;
}

void func_395()
{
	int iVar0;
	
	switch (iLocal_117)
	{
		case 0:
			if (!func_139(PLAYER::PLAYER_ID(), 1, 0))
			{
				if (!func_508(&uLocal_118) || func_506(&uLocal_118, 2000, 0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1199.403f, -3113.591f, 4.5453f) < 400f)
						{
							func_398(&uLocal_122, 4, iLocal_116, "MECHANIC_IMP", 0, 1);
							iLocal_579 = 0;
							iLocal_117++;
						}
					}
					func_46(&uLocal_118);
					func_507(&uLocal_118, 0, 0);
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_139(PLAYER::PLAYER_ID(), 1, 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_101)
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1204.224f, -3121.533f, 4.357823f, 1204.521f, -3107.603f, 8.653814f, 5.1875f, false, true, 0))
								{
									if (!iLocal_579)
									{
										iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
										if (func_384(iVar0) > 500)
										{
											sLocal_580 = "FM_IEPOOR";
										}
										else
										{
											sLocal_580 = "FM_IEGOOD";
										}
										iLocal_579 = 1;
									}
									else if (func_397(&uLocal_122, "FM_1AU", sLocal_580, 12, 0, 0, 0))
									{
										iLocal_287 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
										iLocal_117++;
										iLocal_579 = 0;
									}
								}
							}
						}
					}
					else
					{
						func_396();
						iLocal_117 = 0;
					}
				}
				else
				{
					func_396();
					iLocal_117 = 0;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_139(PLAYER::PLAYER_ID(), 1, 0))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1199.403f, -3113.591f, 4.5453f) < 600f)
					{
						if (bLocal_101)
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) != iLocal_287)
								{
									iLocal_117 = 1;
								}
							}
						}
					}
					else
					{
						func_396();
						iLocal_117 = 0;
					}
				}
				else
				{
					func_396();
					iLocal_117 = 0;
				}
			}
			break;
	}
}

void func_396()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_116))
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_xmech_02"));
		iVar0 = iLocal_116;
		ENTITY::DELETE_ENTITY(&iVar0);
	}
}

bool func_397(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_344(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_21012 = 0;
	Global_21014 = 0;
	Global_21019 = 0;
	Global_21996 = 0;
	Global_21998 = 0;
	Global_22002 = 0;
	Global_2621441 = 1;
	return func_336(sParam2, iParam3, 0);
}

void func_398(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_76833)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

void func_399()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	struct<3> Var9;
	int iVar12;
	
	if (func_394(1, 1))
	{
		switch (Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1)
		{
			case 0:
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					bVar7 = func_389();
					if ((func_392() || func_393()) || bVar7)
					{
						if (!func_382())
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
							{
								if (!func_495())
								{
									if (bLocal_100)
									{
										bLocal_100 = false;
									}
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("AllowModSprayRepair", 2))
									{
										if (!DECORATOR::DECOR_EXIST_ON(iVar3, "AllowModSprayRepair") || (DECORATOR::DECOR_EXIST_ON(iVar3, "AllowModSprayRepair") && DECORATOR::DECOR_GET_BOOL(iVar3, "AllowModSprayRepair") == 0))
										{
											DECORATOR::DECOR_SET_BOOL(iVar3, "AllowModSprayRepair", true);
										}
									}
									if (!iLocal_106)
									{
										if (func_494(iVar3))
										{
											PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
											PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
										}
									}
									iLocal_581 = iVar3;
									if (MISC::IS_BIT_SET(iLocal_577, 15))
									{
										MISC::CLEAR_BIT(&iLocal_577, 15);
									}
									if (MISC::IS_BIT_SET(iLocal_330, 9))
									{
										MISC::CLEAR_BIT(&iLocal_330, 9);
									}
									if (MISC::IS_BIT_SET(iLocal_330, 12))
									{
										MISC::CLEAR_BIT(&iLocal_330, 12);
									}
									if (MISC::IS_BIT_SET(iLocal_330, 10))
									{
										MISC::CLEAR_BIT(&iLocal_330, 10);
									}
									if (!MISC::IS_BIT_SET(iLocal_577, 12))
									{
										if (bVar7)
										{
											MISC::SET_BIT(&iLocal_577, 12);
										}
									}
									else if (!bVar7)
									{
										MISC::CLEAR_BIT(&iLocal_577, 12);
									}
									if (func_387(iVar3))
									{
										if (!func_15(iVar3))
										{
											bLocal_93 = true;
											if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
											{
												if (bLocal_99)
												{
													bLocal_99 = false;
												}
												if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false) == PLAYER::PLAYER_PED_ID())
												{
													bLocal_96 = true;
												}
											}
											else if (func_77())
											{
												if (bLocal_96)
												{
													bLocal_96 = false;
												}
												bLocal_99 = true;
											}
											bLocal_94 = false;
											bLocal_95 = false;
											bLocal_97 = false;
											bLocal_98 = false;
											bLocal_100 = false;
											bLocal_101 = true;
											if (func_493(1215605247, 18))
											{
												bLocal_91 = true;
											}
											iLocal_343 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
											if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iLocal_343))
											{
												if (func_245(iLocal_343, 0))
												{
													if (!MISC::IS_BIT_SET(iLocal_577, 17))
													{
														MISC::SET_BIT(&iLocal_577, 17);
													}
													else if (func_245(iLocal_343, 1))
													{
														Var9 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_343) };
														if (ENTITY::GET_ENTITY_SPEED(iLocal_343) < 0.5f || MISC::ABSF(Var9.f_1) < 1.3f)
														{
															func_492();
															func_483(PLAYER::PLAYER_ID(), 0, 16388, 0);
															if (func_393())
															{
																MISC::SET_BIT(&iLocal_577, 4);
																MISC::SET_BIT(&(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 1);
															}
															if (func_392() || func_389())
															{
																MISC::SET_BIT(&iLocal_577, 6);
															}
															if (func_482())
															{
																bLocal_90 = true;
															}
															else
															{
																bLocal_90 = false;
															}
															VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_343, 2);
															if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_343))
															{
																ENTITY::SET_ENTITY_PROOFS(iLocal_343, true, true, true, true, true, false, false, false);
															}
															Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = func_75(ENTITY::GET_ENTITY_MODEL(iLocal_343));
															Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 1;
															iVar5 = 0;
															iVar4 = 0;
															while (iVar4 < 4)
															{
																iVar1 = (iVar4 - 1);
																iLocal_338[iVar4] = func_121();
																if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_343, iVar1, false))
																{
																	if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_343, iVar1, false)))
																	{
																		if (!ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_343, iVar1, false), false))
																		{
																			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_343, iVar1, false);
																			if (PED::IS_PED_A_PLAYER(iVar0))
																			{
																				if (func_14(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0), 0, 0))
																				{
																					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0)))
																					{
																						iLocal_338[iVar4] = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
																						iVar5++;
																					}
																				}
																			}
																		}
																	}
																}
																iVar4++;
															}
															iLocal_309 = func_481(ENTITY::GET_ENTITY_MODEL(iLocal_343));
															iLocal_310 = func_384(iLocal_343);
															fLocal_311 = SYSTEM::TO_FLOAT((iLocal_309 - iLocal_310));
															fLocal_311 = (fLocal_311 * Global_262145.f_2412);
															if (MISC::IS_BIT_SET(iLocal_577, 4))
															{
																fLocal_311 = (fLocal_311 * 1.3f);
															}
															fLocal_311 = (fLocal_311 / SYSTEM::TO_FLOAT(iVar5));
															fLocal_312 = 500f;
															func_480();
															func_173(0);
															func_478(1247, 1, -1);
															if (func_235("IMPEX_DELIVER_FM"))
															{
																HUD::CLEAR_HELP(true);
															}
															MISC::CLEAR_BIT(&iLocal_577, 12);
															iVar6 = func_80(1199, -1, 0);
															if (!MISC::IS_BIT_SET(iVar6, 1))
															{
																MISC::SET_BIT(&iVar6, 1);
																func_146(1199, iVar6, -1, 1, 0);
															}
															else if (!MISC::IS_BIT_SET(iVar6, 2))
															{
																MISC::SET_BIT(&iVar6, 2);
																func_146(1199, iVar6, -1, 1, 0);
															}
															func_477();
															iLocal_313 = 0;
															iLocal_313 = SYSTEM::ROUND(fLocal_311);
															iLocal_313 = (iLocal_313 - (iLocal_313 % 25));
															if (iLocal_582 == iVar3)
															{
																iLocal_313 = (iLocal_313 + iLocal_315);
															}
															if (!MISC::IS_BIT_SET(iLocal_577, 4))
															{
																if (iLocal_313 > Global_262145.f_164)
																{
																	iLocal_313 = Global_262145.f_164;
																}
															}
															else if (iLocal_313 > Global_262145.f_164)
															{
																iLocal_313 = Global_262145.f_164;
															}
															iLocal_314 = 0;
															fLocal_312 = (fLocal_312 * Global_262145.f_4228);
															iLocal_314 = SYSTEM::ROUND(fLocal_312);
															MISC::CLEAR_BIT(&iLocal_577, 17);
															iLocal_344 = iLocal_343;
															iLocal_346 = ENTITY::GET_ENTITY_MODEL(iLocal_343);
															if (!MISC::IS_BIT_SET(iLocal_577, 4))
															{
																STATS::_PLAYSTATS_IMP_EXP(19, iLocal_314, iLocal_313, iLocal_343);
															}
															else
															{
																STATS::_PLAYSTATS_IMP_EXP(120, iLocal_314, iLocal_313, iLocal_343);
															}
															func_476(19, 1);
															func_475();
															func_511();
														}
														else if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
														{
															func_483(PLAYER::PLAYER_ID(), 0, 16388, 0);
														}
													}
												}
												else if (MISC::IS_BIT_SET(iLocal_577, 17))
												{
													MISC::CLEAR_BIT(&iLocal_577, 17);
												}
											}
										}
										else
										{
											if (bLocal_93)
											{
												bLocal_93 = false;
											}
											if (bLocal_101)
											{
												bLocal_101 = false;
											}
											if (bLocal_96)
											{
												bLocal_96 = false;
											}
											if (bLocal_99)
											{
												bLocal_99 = false;
											}
											if (bLocal_100)
											{
												bLocal_100 = false;
											}
										}
									}
									else if (!func_15(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
									{
										if (func_383(&iVar8))
										{
											if (!func_388(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
											{
												if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar3, -1, false) == PLAYER::PLAYER_PED_ID())
												{
													if (iLocal_582 != iVar3)
													{
														iLocal_582 = iVar3;
														iLocal_315 = 0;
													}
													else if (iLocal_315 != iVar8)
													{
														if (iLocal_315 < iVar8)
														{
															iLocal_315 = iVar8;
														}
													}
												}
												if (!bLocal_94)
												{
													bLocal_94 = true;
												}
												if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
												{
													if (func_77())
													{
														if (bLocal_95)
														{
															bLocal_95 = false;
														}
														if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
														{
															if (func_384(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 0)
															{
																if (!bLocal_98)
																{
																	bLocal_98 = true;
																}
															}
															else
															{
																if (bLocal_98)
																{
																	bLocal_98 = false;
																}
																if (!bLocal_97)
																{
																	bLocal_97 = true;
																}
															}
														}
													}
												}
												else if (!func_77())
												{
													if (bLocal_97)
													{
														bLocal_97 = false;
													}
													if (bLocal_98)
													{
														bLocal_98 = false;
													}
													if (!bLocal_95)
													{
														if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
														{
															bLocal_95 = true;
														}
													}
												}
											}
											else
											{
												func_474();
											}
										}
										else
										{
											func_474();
										}
									}
									else
									{
										func_474();
										if (bLocal_101)
										{
											bLocal_101 = false;
										}
									}
								}
							}
							else
							{
								iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iLocal_581 != iVar3)
								{
									if (!iLocal_106)
									{
										if (func_494(iVar3))
										{
											PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
											PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
										}
									}
									iLocal_581 = iVar3;
								}
								if (!bLocal_100)
								{
									func_474();
									bLocal_100 = true;
								}
							}
						}
					}
					else
					{
						func_474();
						if (bLocal_101)
						{
							bLocal_101 = false;
						}
						if (iLocal_106)
						{
							if (Local_372.f_33)
							{
								if (bLocal_111)
								{
									iLocal_106 = 0;
								}
							}
						}
						if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if ((func_235("IMPEX_NOT_NEED") || func_235("IMPEX_NO_MORE")) || func_235("IMPEX_NOT_PVEH"))
							{
								HUD::CLEAR_HELP(true);
							}
						}
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (func_391(iVar2, 1))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == PLAYER::PLAYER_PED_ID())
							{
								if (DECORATOR::DECOR_EXIST_ON(iVar2, "Player_Vehicle"))
								{
									if (DECORATOR::DECOR_GET_INT(iVar2, "Player_Vehicle") != NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()) || iVar2 == iLocal_581)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
										{
											if (func_253())
											{
												if (!MISC::IS_BIT_SET(iLocal_577, 15))
												{
													if (bVar7 || func_74(&Local_360, ENTITY::GET_ENTITY_MODEL(iVar2)))
													{
														func_165("IMPEX_NOT_PVEH", -1);
														MISC::SET_BIT(&iLocal_577, 15);
													}
												}
											}
										}
									}
									else if (MISC::IS_BIT_SET(iLocal_577, 15))
									{
										if (iVar2 != iLocal_581)
										{
											MISC::CLEAR_BIT(&iLocal_577, 15);
										}
									}
								}
							}
						}
						else
						{
							if (MISC::IS_BIT_SET(iLocal_577, 15))
							{
								if (iVar2 != iLocal_581)
								{
									MISC::CLEAR_BIT(&iLocal_577, 15);
								}
							}
							if (bLocal_107)
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_493(1215605247, 18))
								{
									iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
									if (func_245(iVar2, 0))
									{
										if (!iLocal_105)
										{
											func_173(1);
											iLocal_105 = 1;
										}
										bLocal_91 = true;
									}
								}
								else if (iLocal_105)
								{
									func_173(0);
									iLocal_105 = 0;
									bLocal_91 = false;
								}
							}
						}
						if (func_493(1215605247, 18))
						{
							if (func_253())
							{
								if (func_391(iVar2, 1))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
									{
										if (!MISC::IS_BIT_SET(iLocal_330, 10))
										{
											func_165("IMPEX_NOT_PVEH", -1);
											MISC::SET_BIT(&iLocal_330, 10);
										}
									}
								}
								else if (func_74(&Local_360, ENTITY::GET_ENTITY_MODEL(iVar2)))
								{
									if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iVar2, 0))
									{
										if (!MISC::IS_BIT_SET(iLocal_330, 12))
										{
											func_165("IMPEX_NOT_CREW", -1);
											MISC::SET_BIT(&iLocal_330, 12);
										}
									}
								}
								else if (!MISC::IS_BIT_SET(iLocal_330, 9))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, false) == PLAYER::PLAYER_PED_ID())
									{
										func_165("IMPEX_NOT_NEED", -1);
										MISC::SET_BIT(&iLocal_330, 9);
									}
								}
							}
						}
						else
						{
							if (MISC::IS_BIT_SET(iLocal_330, 9))
							{
								MISC::CLEAR_BIT(&iLocal_330, 9);
							}
							if (MISC::IS_BIT_SET(iLocal_330, 10))
							{
								MISC::CLEAR_BIT(&iLocal_330, 10);
							}
							if (MISC::IS_BIT_SET(iLocal_330, 12))
							{
								MISC::CLEAR_BIT(&iLocal_330, 12);
							}
							if (MISC::IS_BIT_SET(iLocal_577, 12))
							{
								if (func_253())
								{
									func_165("IMPEX_NO_MORE", -1);
									MISC::CLEAR_BIT(&iLocal_577, 12);
									func_117();
								}
							}
						}
					}
				}
				else
				{
					func_474();
					if (bLocal_101)
					{
						bLocal_101 = false;
					}
					if (iLocal_106)
					{
						iLocal_106 = 0;
					}
				}
				break;
			
			case 1:
				if (func_14(PLAYER::PLAYER_ID(), 1, 1))
				{
					if (!func_166(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1215605247, &uLocal_333, 0, 500, 1, 0))
					{
						Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 2;
					}
				}
				else
				{
					MISC::CLEAR_BIT(&iLocal_577, 4);
					MISC::CLEAR_BIT(&iLocal_577, 6);
					Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 0;
				}
				break;
			
			case 2:
				Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 3;
				break;
			
			case 3:
				if (CAM::IS_SCREEN_FADED_IN())
				{
					func_471(17, 1, -1);
					if (MISC::IS_BIT_SET(iLocal_577, 4))
					{
						MISC::SET_BIT(&(Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_2), 1);
						func_470();
					}
					else
					{
						func_468();
					}
					if (bLocal_90)
					{
						if (MISC::IS_BIT_SET(iLocal_577, 6))
						{
							Local_75.f_2 = -2049536439;
						}
						else
						{
							Local_75.f_2 = -1015134782;
						}
						Local_75.f_3 = Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/];
						Local_75.f_10 = iLocal_338[0];
						Local_75.f_11 = iLocal_338[1];
						Local_75.f_12 = iLocal_338[2];
						Local_75.f_13 = iLocal_338[3];
						if (!MISC::IS_BIT_SET(iLocal_577, 6))
						{
						}
					}
					MISC::CLEAR_BIT(&iLocal_577, 6);
					func_467(4, iLocal_313);
					func_451(&iLocal_313, 1);
					if (iLocal_313 > 0)
					{
						if (func_450())
						{
							func_439(941287179, iLocal_313, &iVar12, 0, 0, 0);
							Global_4264051[iVar12 /*85*/].f_3 = iLocal_346;
						}
						else
						{
							MONEY::NETWORK_EARN_FROM_IMPORT_EXPORT(iLocal_313, iLocal_346);
						}
					}
					if (iLocal_310 > 0)
					{
						func_438("IMPEX_PASS", iLocal_313, 7000, 0);
					}
					else
					{
						func_438("IMPEX_PASS", iLocal_313, 7000, 0);
					}
					func_404(2, "XPT_IMPEXP", -1636175450, -1930707410, iLocal_314, 1, -1, 0);
					func_403(29);
					func_483(PLAYER::PLAYER_ID(), 1, 0, 0);
					Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/].f_1 = 0;
					Local_448[NETWORK::PARTICIPANT_ID_TO_INT() /*4*/] = -1;
					MISC::CLEAR_BIT(&iLocal_577, 4);
					iLocal_112 = 1;
					func_400(-78295735, 12, 0);
				}
				break;
		}
	}
	else
	{
		if (!func_379(PLAYER::PLAYER_ID(), 1))
		{
			if (!bLocal_107)
			{
				if (iLocal_105)
				{
					func_173(0);
					iLocal_105 = 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_493(1215605247, 18))
			{
				iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (func_245(iVar2, 0))
				{
					if (!iLocal_105)
					{
						func_173(1);
						iLocal_105 = 1;
					}
					bLocal_91 = true;
				}
			}
			else if (iLocal_105)
			{
				func_173(0);
				iLocal_105 = 0;
				bLocal_91 = false;
			}
		}
		if (bLocal_94)
		{
			bLocal_94 = false;
		}
		if (bLocal_95)
		{
			bLocal_95 = false;
		}
		if (bLocal_97)
		{
			bLocal_97 = false;
		}
		if (bLocal_98)
		{
			bLocal_98 = false;
		}
	}
}

void func_400(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_402(iParam1, iParam2))
	{
		iVar0 = func_401();
		Global_2462127[iVar0] = iParam1;
		Global_2462138[iVar0] = iParam0;
	}
}

int func_401()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2462127[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_402(int iParam0, var uParam1)
{
	if (Global_1312884)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312896) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_403(int iParam0)
{
	int iVar0;
	
	if (Global_262145.f_8572)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_2097152[func_505() /*10931*/].f_6175.f_4111[iVar0 /*3*/] == iParam0)
		{
			if (Global_1312588.f_1[iVar0] == -1)
			{
				Global_1312588.f_1[iVar0] = iParam0;
				Global_1312588 = 1;
				return;
			}
		}
		iVar0++;
	}
}

var func_404(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_405(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_405(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_406(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_406(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_437(PLAYER::PLAYER_ID()) || func_436(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9637 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9637;
		}
	}
	else if (func_434() || func_431(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22787 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22787;
		}
	}
	else if (Global_262145.f_6636 > 15000)
	{
		iVar2 = 15000;
	}
	else
	{
		iVar2 = Global_262145.f_6636;
	}
	if (func_430(sParam2))
	{
	}
	if (func_429())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_427(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_426(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_424(0, &iVar1);
					break;
				
				case 3:
					func_424(1, &iVar1);
					break;
				
				case 1:
					func_421(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1688737)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_478(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_416((func_420(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_39.f_2 != -1)
				{
					func_478(1165, iVar1, -1);
				}
				func_411(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_407((func_409(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_407((func_409(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_407(int iParam0)
{
	if (func_429())
	{
		Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_5 = iParam0;
		func_408(joaat("MPPLY_GLOBALXP"), iParam0);
	}
}

void func_408(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_409(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_14(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_410(joaat("MPPLY_GLOBALXP"));
			}
			else
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_5;
			}
		}
		else
		{
			return func_410(joaat("MPPLY_GLOBALXP"));
		}
	}
	return 0;
}

int func_410(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_411(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_198(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_414(func_415(&Var0));
			if (iVar13 == 0)
			{
				func_413(&Global_1388052, iParam0);
				func_412(joaat("MPPLY_CREW_LOCAL_XP_0"), Global_1388052);
			}
			else if (iVar13 == 1)
			{
				func_413(&Global_1388053, iParam0);
				func_412(joaat("MPPLY_CREW_LOCAL_XP_1"), Global_1388053);
			}
			else if (iVar13 == 2)
			{
				func_413(&Global_1388054, iParam0);
				func_412(joaat("MPPLY_CREW_LOCAL_XP_2"), Global_1388054);
			}
			else if (iVar13 == 3)
			{
				func_413(&Global_1388055, iParam0);
				func_412(joaat("MPPLY_CREW_LOCAL_XP_3"), Global_1388055);
			}
			else if (iVar13 == 4)
			{
				func_413(&Global_1388056, iParam0);
				func_412(joaat("MPPLY_CREW_LOCAL_XP_4"), Global_1388056);
			}
		}
	}
}

void func_412(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
	switch (iParam0)
	{
		case joaat("MPPLY_CREW_0_ID"):
			Global_1388047 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_1_ID"):
			Global_1388049 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_2_ID"):
			Global_1388049 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_3_ID"):
			Global_1388050 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_4_ID"):
			Global_1388051 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_0"):
			Global_1388052 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_1"):
			Global_1388053 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_2"):
			Global_1388054 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_3"):
			Global_1388055 = iParam1;
			break;
		
		case joaat("MPPLY_CREW_LOCAL_XP_4"):
			Global_1388056 = iParam1;
			break;
		
		case joaat("MPPLY_BECAME_CHEATER_NUM"):
			Global_1388057 = iParam1;
			break;
		
		case joaat("MPPLY_FRIENDLY"):
			Global_1388058 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_LANGUAGE"):
			Global_1388059 = iParam1;
			break;
		
		case joaat("MPPLY_GRIEFING"):
			Global_1388060 = iParam1;
			break;
		
		case joaat("MPPLY_HELPFUL"):
			Global_1388061 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_TAGPLATE"):
			Global_1388062 = iParam1;
			break;
		
		case joaat("MPPLY_OFFENSIVE_UGC"):
			Global_1388063 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_413(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_414(int iParam0)
{
	if (iParam0 == Global_1388047)
	{
		return 0;
	}
	else if (iParam0 == Global_1388048)
	{
		return 1;
	}
	else if (iParam0 == Global_1388049)
	{
		return 2;
	}
	else if (iParam0 == Global_1388050)
	{
		return 3;
	}
	else if (iParam0 == Global_1388051)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_415(int* iParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(iParam0))
		{
			return Global_2462175;
		}
	}
	return Global_2462175;
}

void func_416(int iParam0, int iParam1, int iParam2)
{
	if (func_429())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_9605 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1388197[func_81(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1388197[func_81(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_9604 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_238(PLAYER::PLAYER_ID()))
		{
			Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_1 = iParam0;
			Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_211.f_6 = func_418(iParam0, 1);
		}
		func_417(639, iParam0, -1, 1);
		func_146(640, func_418(iParam0, 1), -1, 1, 0);
		Global_1388197[func_81(-1)] = iParam0;
		func_400(-1109644434, 7, 0);
	}
}

void func_417(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = Global_2551832[iParam0 /*3*/][func_81(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1388125[func_81(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1388131[func_81(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1388137[func_81(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1388143[func_81(iParam2)] = iParam1;
			break;
		
		case 8727:
			Global_1388149[func_81(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1388095[func_81(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1388101[func_81(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1388107[func_81(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1388113[func_81(iParam2)] = iParam1;
			break;
		
		case 8729:
			Global_1388119[func_81(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1388065[func_81(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1388071[func_81(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1388077[func_81(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1388083[func_81(iParam2)] = iParam1;
			break;
		
		case 8731:
			Global_1388089[func_81(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1388155[func_81(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1388161[func_81(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1388167[func_81(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1388173[func_81(iParam2)] = iParam1;
			break;
		
		case 8733:
			Global_1388179[func_81(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1388185[func_81(iParam2)] = iParam1;
			break;
		
		case 7234:
			Global_1388191[func_81(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1388197[func_81(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1388203[func_81(iParam2)] = iParam1;
			break;
		
		case 1877:
			Global_2590417[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 2268:
			Global_2590417[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 2930:
			Global_2590417[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3059:
			Global_2590417[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 10138:
			Global_2590566[func_81(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1388209[func_81(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1388215[func_81(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1388221[func_81(iParam2)] = iParam1;
			break;
		
		case 8732:
			Global_1388227[func_81(iParam2)] = iParam1;
			break;
		
		case 9534:
			Global_1388233[func_81(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1388239[func_81(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2590490[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_2590490[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_2590490[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_2590490[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_2590490[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2590569[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2590569[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2590569[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2590569[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2590569[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_2590585[0 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_2590585[1 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_2590585[2 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_2590585[3 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3646:
			Global_2590585[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3222:
			Global_2590490[5 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2590417[4 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2590601[func_81(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_2590610[func_81(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_2590604[func_81(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_2590613[func_81(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_2590607[func_81(iParam2)] = iParam1;
			break;
		
		case 3669:
			Global_2590616[func_81(iParam2)] = iParam1;
			break;
		
		case 3690:
			Global_2590619[func_81(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2590490[6 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3231:
			Global_2590417[5 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3235:
			Global_2590490[7 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 3233:
			Global_2590417[6 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_2590490[8 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2590417[7 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_2590490[9 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2590417[8 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_2590490[10 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4027:
			Global_2590417[9 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_2590490[11 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 4030:
			Global_2590417[10 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_2590490[12 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6111:
			Global_2590417[11 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_2590490[13 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6169:
			Global_2590417[12 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_2590490[14 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6547:
			Global_2590417[13 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_2590490[15 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2590417[14 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_2590490[16 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6563:
			Global_2590417[15 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_2590490[17 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 6566:
			Global_2590417[16 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7284:
			Global_2590417[17 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7286:
			Global_2590417[18 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 7288:
			Global_2590417[19 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8011:
			Global_2590417[20 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8283:
			Global_2590622[func_81(iParam2)] = iParam1;
			break;
		
		case 8284:
			Global_2590625[func_81(iParam2)] = iParam1;
			break;
		
		case 8285:
			Global_2590628[func_81(iParam2)] = iParam1;
			break;
		
		case 8286:
			Global_2590631[func_81(iParam2)] = iParam1;
			break;
		
		case 8287:
			Global_2590634[func_81(iParam2)] = iParam1;
			break;
		
		case 8288:
			Global_2590637[func_81(iParam2)] = iParam1;
			break;
		
		case 8289:
			Global_2590640[func_81(iParam2)] = iParam1;
			break;
		
		case 8290:
			Global_2590643[func_81(iParam2)] = iParam1;
			break;
		
		case 8291:
			Global_2590646[func_81(iParam2)] = iParam1;
			break;
		
		case 8292:
			Global_2590649[func_81(iParam2)] = iParam1;
			break;
		
		case 8293:
			Global_2590652[func_81(iParam2)] = iParam1;
			break;
		
		case 8294:
			Global_2590655[func_81(iParam2)] = iParam1;
			break;
		
		case 8295:
			Global_2590658[func_81(iParam2)] = iParam1;
			break;
		
		case 8901:
			Global_2590661[func_81(iParam2)] = iParam1;
			break;
		
		case 8535:
			Global_2590417[21 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8978:
			Global_2590490[23 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8976:
			Global_2590417[22 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8981:
			Global_2590490[24 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		case 8979:
			Global_2590417[23 /*3*/][func_81(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_418(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_419(iParam0, 0);
}

int func_419(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_292402[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_292402[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_420(int iParam0)
{
	if (Global_1312485.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1388197[func_81(-1)];
			}
			else if (func_238(iParam0))
			{
				return Global_1590682[iParam0 /*883*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1388197[func_81(-1)];
	}
	return 0;
}

void func_421(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_208(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_423(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_422(*iParam0, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_422(*iParam0, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_422(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_423(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2515173 = { func_198(iParam0) };
		Global_2515186 = { func_198(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2515173))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2515186))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2515103, 35, &Global_2515173);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2515138, 35, &Global_2515186);
				if (Global_2515103 == Global_2515138)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_424(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_14(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_423(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_14(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_425(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_423(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_422(*iParam1, 100) * (10f * Global_262145.f_4218)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_422(*iParam1, 100) * (20f * Global_262145.f_4211)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_425(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_28(iParam0), func_28(iParam1));
	return 0f;
}

int func_426(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_422(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_427(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_420(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_420(PLAYER::PLAYER_ID());
		}
	}
	if (func_428(8000, 0, 0) > 0)
	{
		if (func_428(8000, 0, 0) < (iParam0 + func_420(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_428(8000, 0, 0) - func_420(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_428(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_292402[iParam0];
}

int func_429()
{
	return 1;
}

int func_430(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_431(int iParam0)
{
	return func_432(func_433(iParam0));
}

int func_432(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_433(int iParam0)
{
	if (func_122(iParam0, 0))
	{
		return Global_1630317[iParam0 /*595*/].f_11.f_33;
	}
	return -1;
}

int func_434()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_30();
	}
	return func_435(Global_4456448.f_82708);
}

int func_435(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_5009[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_436(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 2;
}

bool func_437(int iParam0)
{
	return Global_2425869[iParam0 /*443*/].f_119 == 7;
}

void func_438(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, true);
}

void func_439(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_450())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
		case 837955913:
		case -1532467144:
		case 1815541181:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_440(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
		case 403506509:
		case -883876414:
		case -1064150715:
		case -1387253055:
		case -716963152:
		case 1138089938:
		case -561012053:
			func_440(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1342064661:
		case -1693570755:
		case 1868043300:
		case -697248883:
		case -1295545795:
		case 914079366:
		case 395122350:
		case -331981076:
		case 1671535231:
		case -1896606724:
		case -1291433573:
		case 538631715:
		case 133782822:
		case 2081885153:
		case -1314365345:
		case 1322977732:
		case 396623013:
		case 1981664462:
		case -1921250821:
		case -1370731547:
		case 1683798242:
		case -910968288:
			if (iParam1 > 0 || Global_262145.f_27657)
			{
				func_440(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case -1100963799:
		case -494565059:
		case 827308208:
		case -1857685192:
		case 1698417709:
		case 1057653594:
		case 1810506918:
		case 451427308:
		case 824622151:
		case 1253978276:
		case -1576080766:
		case 1508411869:
		case 1428501742:
		case -1918967151:
		case 1261538664:
		case 1180397655:
		case 1414674366:
		case 261460130:
		case -2027658376:
		case -2017925037:
		case 1668610896:
		case -2032529561:
		case -1224479447:
		case -319306689:
		case -466527264:
		case 1925965142:
		case 592152676:
		case 2035612943:
		case 1568659720:
		case 1220095570:
		case 2050320631:
		case 592672421:
		case 1775876058:
		case -842062976:
		case -518651910:
		case 14658715:
		case -604793592:
		case -823426392:
		case -1401862980:
		case -173354274:
		case 409533976:
		case -1472522337:
		case 542574408:
		case -1261799063:
		case 784631574:
		case -2027479156:
		case -837690641:
			func_440(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_440(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_450())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_26()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4265553 = 1;
			return 0;
		}
		if (Global_2463410)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4265554 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4264051[iVar2 /*85*/].f_66.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_447(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4264051[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4264051[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
			Global_4265538 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4265552 = 1;
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4265555 = iParam4;
			Global_4265557 = iParam3;
			Global_4265558 = 1;
			Global_4265556 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_446(1, iParam4);
			Global_4265552 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_441(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_441(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_126.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_442(iParam0);
	}
}

void func_442(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_450())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_445(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4264051[iParam0 /*85*/].f_66);
		}
		func_443(&(Global_4264051[iParam0 /*85*/]));
	}
}

void func_443(var uParam0)
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = 1227573907;
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_444(&(uParam0->f_14));
	func_444(&(uParam0->f_14.f_13));
	StringCopy(&(uParam0->f_14.f_26), "", 32);
	StringCopy(&(uParam0->f_14.f_34), "", 24);
	StringCopy(&(uParam0->f_14.f_40), "", 16);
	StringCopy(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
}

void func_444(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_445(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4264051[iParam0 /*85*/].f_66.f_5 == 1;
	}
	return 0;
}

void func_446(int iParam0, int iParam1)
{
	Global_2464590 = iParam1;
	Global_2464589 = iParam0;
}

int func_447(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4264051[iVar0 /*85*/].f_66.f_2 == 0)
		{
			if (!func_450())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4264051[iVar0 /*85*/].f_66.f_2 = 1;
			Global_4264051[iVar0 /*85*/].f_66.f_1 = iParam5;
			Global_4264051[iVar0 /*85*/].f_66.f_3 = iParam1;
			Global_4264051[iVar0 /*85*/].f_66.f_4 = iParam2;
			Global_4264051[iVar0 /*85*/].f_66.f_7 = iParam3;
			Global_4264051[iVar0 /*85*/].f_66.f_5 = 0;
			Global_4264051[iVar0 /*85*/].f_66 = iParam0;
			Global_4264051[iVar0 /*85*/].f_66.f_6 = iParam4;
			Global_4264051[iVar0 /*85*/].f_66.f_11 = uParam8;
			Global_4264051[iVar0 /*85*/].f_66.f_10 = iParam7;
			Global_4264051[iVar0 /*85*/].f_66.f_13 = iParam9;
			Global_4264051[iVar0 /*85*/].f_66.f_12 = 0;
			Global_4264051[iVar0 /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4264051[iVar0 /*85*/].f_66.f_18 = 0;
			Global_4265538 = 0;
			if (bParam6)
			{
				Global_4264051[iVar0 /*85*/].f_66.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_448(Global_4264051[iVar0 /*85*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_448(struct<67> Param0, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85)
{
	struct<3> Var0;
	int iVar36;
	
	if (iParam85 < 0)
	{
		return;
	}
	Var0.f_2 = 2147483647;
	Var0.x = 1191422458;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { Param0.f_66 };
	Var0.f_2.f_33 = iParam85;
	iVar36 = func_8(Var0.f_1);
	if ((Global_262145.f_23581 && !Global_262145.f_23582) && !Global_262145.f_23583)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		func_449();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 36, iVar36);
	}
}

void func_449()
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

int func_450()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::_NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

void func_451(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_466())
		{
			if (func_465(0))
			{
				if (!func_461(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_460()))
					{
						if (func_459() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_459());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_457(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_456("GB_BCUT_TICK1", func_460(), iVar0, 0, 0, 1);
						}
						func_455(20);
						func_452(func_460(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_452(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_14(iParam0, 0, 1))
	{
		Var0 = 1596100569;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_454(iParam0);
		func_453(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_8(iParam0));
	}
}

void func_453(var uParam0, var uParam1)
{
	*uParam0 = Global_1652336.f_9;
	*uParam1 = Global_1652336.f_10;
}

var func_454(int iParam0)
{
	return Global_1630317[iParam0 /*595*/].f_506;
}

void func_455(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2540384.f_5188.f_7[iVar0]), iVar1);
}

int func_456(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
		HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_201(iParam1, -2, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_199(&Var1));
		if (!iParam3 == 0)
		{
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
		func_193(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_457(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_458(1);
	}
	else
	{
		iVar1 = func_458(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_458(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_12398;
}

int func_459()
{
	return Global_262145.f_12397;
}

int func_460()
{
	return Global_1630317[PLAYER::PLAYER_ID() /*595*/].f_11;
}

bool func_461(bool bParam0)
{
	return func_462(PLAYER::PLAYER_ID(), bParam0);
}

int func_462(int iParam0, bool bParam1)
{
	return func_463(iParam0, bParam1, 1);
}

int func_463(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_121())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_464(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1630317[iParam0 /*595*/].f_11;
	if (iVar0 != func_121() && Global_1630317[iVar0 /*595*/].f_11.f_423 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_464(int iParam0, int iParam1)
{
	if (iParam0 != func_121())
	{
		if (Global_1630317[iParam0 /*595*/].f_11 != func_121())
		{
			if (Global_1630317[iParam0 /*595*/].f_11 == iParam0 && Global_1630317[iParam0 /*595*/].f_11.f_423 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_465(bool bParam0)
{
	return func_221(PLAYER::PLAYER_ID(), bParam0);
}

bool func_466()
{
	return func_222(PLAYER::PLAYER_ID());
}

void func_467(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_23502 == 0 || Global_262145.f_23502 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_23502 == 1)
			{
				Global_2540384.f_283 = iParam0;
				if (iParam1 > Global_262145.f_6585)
				{
					iParam1 = Global_262145.f_6585;
				}
				Global_2540384.f_284 = iParam1;
				Global_2540384.f_285 = 0;
			}
		}
	}
}

void func_468()
{
	int iVar0;
	
	iVar0 = func_469(42);
	Global_2414424[iVar0 /*83*/] = 42;
	StringCopy(&(Global_2414424[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

int func_469(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2414424[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2414424[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_470()
{
	int iVar0;
	
	iVar0 = func_469(43);
	Global_2414424[iVar0 /*83*/] = 43;
	StringCopy(&(Global_2414424[iVar0 /*83*/].f_18[0 /*16*/]), "-StraightIntoFreemode", 64);
}

void func_471(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_473(iParam0, func_81(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_472(iParam0, iVar0, iParam2);
}

void func_472(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = Global_2589533[iParam0 /*3*/][func_81(iParam2)];
	STATS::STAT_SET_INT(iVar0, iParam1, true);
}

int func_473(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2589533[iParam0 /*3*/][func_81(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_474()
{
	if (bLocal_100)
	{
		bLocal_100 = false;
	}
	if (bLocal_95)
	{
		bLocal_95 = false;
	}
	if (bLocal_96)
	{
		bLocal_96 = false;
	}
	if (bLocal_97)
	{
		bLocal_97 = false;
	}
	if (bLocal_99)
	{
		bLocal_99 = false;
	}
	if (bLocal_98)
	{
		bLocal_98 = false;
	}
}

void func_475()
{
	Global_2097152[func_505() /*10931*/].f_6175.f_35 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

void func_476(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_505() /*10931*/].f_6175.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_505() /*10931*/].f_6175.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_505() /*10931*/].f_6175.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_505() /*10931*/].f_6175.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_505() /*10931*/].f_6175.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_505() /*10931*/].f_6175.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_505() /*10931*/].f_6175.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_505() /*10931*/].f_6175.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_505() /*10931*/].f_6175.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_505() /*10931*/].f_6175.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_505() /*10931*/].f_6175.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_505() /*10931*/].f_6175.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_505() /*10931*/].f_6175.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_505() /*10931*/].f_6175.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_505() /*10931*/].f_6175.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_505() /*10931*/].f_6175.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_505() /*10931*/].f_6175.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_505() /*10931*/].f_6175.f_30 = iVar0;
			break;
	}
}

void func_477()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_80(1199, -1, 0);
	if (!MISC::IS_BIT_SET(iVar0, 3))
	{
		MISC::SET_BIT(&iVar0, 3);
		MISC::SET_BIT(&iLocal_578, 1);
		bVar1 = true;
	}
	else if (!MISC::IS_BIT_SET(iVar0, 4))
	{
		MISC::SET_BIT(&iVar0, 4);
		MISC::SET_BIT(&iLocal_578, 2);
		bVar1 = true;
	}
	else if (!MISC::IS_BIT_SET(iVar0, 5))
	{
		MISC::SET_BIT(&iVar0, 5);
		MISC::SET_BIT(&iLocal_578, 3);
		bVar1 = true;
	}
	if (bVar1)
	{
		func_146(1199, iVar0, -1, 1, 0);
	}
}

void func_478(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_80(iParam0, func_81(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_479(iParam0))
	{
		func_146(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_417(iParam0, iVar0, iParam2, 1);
	}
}

int func_479(int iParam0)
{
	if (Global_1388046)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 8727:
			case 777:
			case 778:
			case 779:
			case 780:
			case 8729:
			case 767:
			case 768:
			case 769:
			case 770:
			case 8731:
			case 757:
			case 758:
			case 759:
			case 760:
			case 8733:
			case 1303:
			case 7234:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 8732:
			case 9534:
			case 1236:
			case 1877:
			case 2268:
			case 2930:
			case 3059:
			case 10138:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3058:
			case 3233:
			case 3235:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3228:
			case 3222:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3690:
			case 3231:
			case 3230:
			case 4021:
			case 4020:
			case 4024:
			case 4023:
			case 4027:
			case 4026:
			case 4030:
			case 4029:
			case 6111:
			case 6110:
			case 6169:
			case 6168:
			case 6534:
			case 6533:
			case 6547:
			case 6546:
			case 6560:
			case 6559:
			case 6563:
			case 6562:
			case 6566:
			case 6565:
			case 7284:
			case 7286:
			case 7288:
			case 8283:
			case 8284:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8011:
			case 8535:
			case 8976:
			case 8978:
			case 8979:
			case 8981:
				return 1;
				break;
			}
	}
	return 0;
}

void func_480()
{
	if (!Global_2540384.f_4591)
	{
		Global_2540384.f_4591 = 1;
	}
	func_250(&(Global_2540384.f_4592), 0, 0);
}

int func_481(int iParam0)
{
	switch (iParam0)
	{
		case joaat("zion"):
			return 9000;
		
		case joaat("serrano"):
			return 9254;
		
		case joaat("jackal"):
			return 9350;
		
		case joaat("schafter2"):
			return 9804;
		
		case joaat("dubsta"):
			return 10500;
		
		case joaat("f620"):
			return 12000;
		
		case joaat("schwarzer"):
			return 12000;
		
		case joaat("rocoto"):
			return 12750;
		
		case joaat("sentinel2"):
			return 14250;
		
		case joaat("felon2"):
			return 14250;
		
		case joaat("comet2"):
			return 15000;
		
		case joaat("banshee"):
			return 15750;
		
		case joaat("surano"):
			return 16500;
		
		case joaat("coquette"):
			return 19800;
		
		case joaat("carbonizzare"):
			return 20000;
		
		case joaat("exemplar"):
			return 20000;
		
		case joaat("feltzer2"):
			return 20000;
		
		case joaat("bullet"):
			return 20000;
		
		case joaat("superd"):
			return 20000;
		
		case joaat("infernus"):
			return 20000;
		
		default:
	}
	return -1;
}

int func_482()
{
	int iVar0;
	
	if (func_14(PLAYER::PLAYER_ID(), 1, 1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, -1, false))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_483(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	
	if (bParam1)
	{
		if (SCRIPT::GET_NO_LOADING_SCREEN())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(false);
		}
	}
	if (func_491())
	{
		if (bParam1)
		{
			return;
		}
		else
		{
			iParam3 = 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = iParam2;
		PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar0);
	}
	else
	{
		bVar1 = true;
		bVar2 = iParam2 & 2 != false;
		bVar3 = iParam2 & 4 != false;
		bVar4 = iParam2 & 8 != false;
		bVar5 = iParam2 & 16 != false;
		bVar6 = iParam2 & 32 != false;
		bVar7 = iParam2 & 64 != false;
		bVar8 = iParam2 & 128 != false;
		bVar9 = iParam2 & 256 != false;
		bVar10 = iParam2 & 512 != false;
		bVar11 = iParam2 & 1024 != false;
		bVar12 = iParam2 & 2048 != false;
		bVar13 = iParam2 & 4096 != false;
		bVar14 = iParam2 & 8192 != false;
		bVar15 = iParam2 & 16384 != false;
		bVar16 = iParam2 & 32768 != false;
		bVar17 = iParam2 & 65536 != false;
		bVar18 = iParam2 & 131072 != false;
		bVar19 = iParam2 & 262144 != false;
		bVar20 = iParam2 & 524288 != false;
		bVar21 = iParam2 & 1048576 != false;
		bVar22 = iParam2 & 2097152 != false;
		bVar23 = iParam2 & 4194304 != false;
		bVar24 = iParam2 & 8388608 != false;
		bVar25 = iParam2 & 16777216 != false;
		if (iParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar1 = false;
		}
		if (!func_136())
		{
			bVar26 = false;
			if (bParam1 == 1)
			{
				bVar26 = true;
			}
			if (bVar16 == 0 && !bVar21)
			{
				bVar26 = true;
			}
			if (bVar10 == 1)
			{
				bVar26 = true;
			}
			if (bVar26)
			{
				return;
			}
		}
		if (bVar18)
		{
		}
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0) && (PLAYER::IS_PLAYER_PLAYING(iParam0) || iParam3 == 1))
		{
			if (iParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iParam0), false))
			{
				return;
			}
			iVar27 = PLAYER::GET_PLAYER_PED(iParam0);
			if (!bVar20)
			{
				if ((bVar19 && bParam1 == 0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				}
				else if (bVar14 || (!func_24(PLAYER::PLAYER_ID(), 0) && !func_232()))
				{
					ENTITY::SET_ENTITY_VISIBLE(iVar27, !bVar14, false);
				}
				if (!bVar14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bVar19)
					{
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
					}
					Global_2425869[iParam0 /*443*/].f_248 = 0;
				}
			}
			if (bParam1)
			{
				if (bVar1)
				{
					func_488(0, 0, 0);
					if (bVar25)
					{
						STREAMING::CLEAR_FOCUS();
					}
				}
				if (!func_487(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, true, false);
					}
				}
				if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
				{
					if (!bVar21)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
					}
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
				}
				else if (!bVar21)
				{
					ENTITY::FREEZE_ENTITY_POSITION(iVar27, false);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, true);
				PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				PLAYER::_SET_PLAYER_INVINCIBLE_KEEP_RAGDOLL_ENABLED(iParam0, false);
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(iVar27) && PED::_HAS_STREAMED_PED_ASSETS_LOADED(iVar27))
				{
					PED::_0x4668D80430D6C299(iVar27);
				}
				PED::SET_PED_CAN_RAGDOLL(iVar27, true);
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == 0)
				{
					func_486();
					func_485();
				}
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
				{
					if (!bVar23)
					{
					}
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
				}
				Global_2425869[iParam0 /*443*/].f_249 = 0;
				if (!bVar24)
				{
					bVar3 = true;
				}
				if (Global_2405074.f_2674)
				{
					Global_2405074.f_2674 = 0;
				}
			}
			else
			{
				if (!func_487(iVar27) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(iVar27))
				{
					if (!bVar22)
					{
						ENTITY::SET_ENTITY_COLLISION(iVar27, !bVar15, false);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED(iVar27))
					{
						if (!bVar21)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iVar27, bVar16);
						}
						if (!bVar16)
						{
							ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iVar27, true);
						}
					}
					if (func_484(Global_4456448.f_129348))
					{
						ENTITY::FREEZE_ENTITY_POSITION(iVar27, true);
					}
				}
				if (Global_1312872)
				{
					bVar10 = false;
				}
				if (bVar10)
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, false);
				}
				else
				{
					PLAYER::SET_PLAYER_INVINCIBLE(iParam0, true);
				}
				PED::SET_PED_CAN_BE_TARGETTED(iVar27, bVar17);
				if (bVar3)
				{
					if (!PED::IS_PED_FATALLY_INJURED(iVar27) && !PED::IS_PED_IN_ANY_VEHICLE(iVar27, false))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar27);
					}
				}
			}
			iVar28 = 0;
			if (bVar2)
			{
				iVar28 |= 2;
			}
			if (bVar3)
			{
				iVar28 |= 4;
			}
			if (bVar4)
			{
				iVar28 |= 8;
			}
			if (bVar5)
			{
				iVar28 |= 16;
			}
			if (bVar6)
			{
				iVar28 |= 32;
			}
			if (bVar7)
			{
				iVar28 |= 64;
			}
			if (bVar8)
			{
				iVar28 |= 128;
			}
			if (bVar9)
			{
				iVar28 |= 256;
			}
			if (bVar10)
			{
				iVar28 |= 512;
			}
			if (bVar11)
			{
				iVar28 |= 1024;
			}
			if (bVar12)
			{
				iVar28 |= 2048;
			}
			if (bVar13)
			{
				iVar28 |= 4096;
			}
			PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iVar28);
		}
	}
}

bool func_484(int iParam0)
{
	return iParam0 == 17;
}

void func_485()
{
	struct<3> Var0;
	
	Global_2440049.f_1344 = 0;
	Global_2440049.f_1345 = 0;
	Global_2440049.f_1346 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2440049.f_1351 = -1;
	Global_2440049.f_1352 = 0;
	Global_2405074.f_2685 = { Var0 };
}

void func_486()
{
	Global_2405074.f_696 = 0;
	Global_2405074.f_2728 = 0;
	Global_2405074.f_512 = 0;
	Global_2405074.f_601 = 0;
	Global_2425869[PLAYER::PLAYER_ID() /*443*/].f_211 = 0;
	Global_2405074.f_2683 = 0;
}

int func_487(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		return 1;
	}
	else
	{
		iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1794415470);
		if (iVar0 == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_488(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
	}
	if (bParam0 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (PED::IS_PED_A_PLAYER(iParam1))
			{
				if (!NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iParam1)))
				{
					iVar0 = 1;
				}
			}
		}
	}
	if (iVar0 == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == 1)
			{
				func_490();
			}
			else if (!MISC::IS_BIT_SET(Global_2359302.f_67, 1))
			{
				if (MISC::IS_BIT_SET(Global_2359302.f_67, 2))
				{
					iVar1 = 0;
					while (iVar1 < 8)
					{
						CAM::_0x2A2173E46DAECD12(iVar1, Global_2359302.f_58[iVar1]);
						iVar1++;
					}
				}
				MISC::SET_BIT(&(Global_2359302.f_67), 1);
			}
		}
		if (func_24(PLAYER::PLAYER_ID(), 0))
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, iParam1, true);
		}
		else
		{
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, iParam1);
		}
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, iParam1);
		func_489(joaat("MPPLY_IS_CHAR_SPECTATING"), bParam0);
	}
}

void func_489(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_BOOL(iVar0, bParam1, true);
	}
}

void func_490()
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!MISC::IS_BIT_SET(Global_2359302.f_67, 2))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				Global_2359302.f_58[iVar0] = CAM::_0xEE778F8C7E1142E2(iVar0);
				iVar0++;
			}
			MISC::SET_BIT(&(Global_2359302.f_67), 2);
			MISC::SET_BIT(&(Global_2359302.f_67), 0);
		}
	}
}

int func_491()
{
	if (Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_35 && !Global_2452679.f_2846.f_215 == -1)
	{
		return 1;
	}
	return 0;
}

void func_492()
{
	func_117();
}

int func_493(int iParam0, int iParam1)
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_169(iParam0), true) <= IntToFloat(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_494(int iParam0)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false) == PLAYER::PLAYER_PED_ID())
		{
			if (!func_388(iParam0))
			{
				if (iParam0 != iLocal_581)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_495()
{
	if (Global_2440049.f_502.f_16 || Global_2440049.f_502.f_17)
	{
		return 1;
	}
	return 0;
}

void func_496(var uParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = uParam2;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_497(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
}

int func_497(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_504(iParam1);
			break;
		
		case 1:
			iVar0 = func_503(iParam1);
			break;
		
		case 2:
			iVar0 = func_502(iParam1);
			break;
		
		case 3:
			iVar0 = func_501(iParam1);
			break;
		
		case 4:
			iVar0 = func_500(iParam1);
			break;
		
		case 5:
			iVar0 = func_499(iParam1);
			break;
		
		case 6:
			iVar0 = func_498(iParam1);
			break;
	}
	return iVar0;
}

int func_498(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("felon2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("serrano"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("bullet"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("infernus"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("coquette"));
			break;
	}
	return iVar0;
}

int func_499(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("zion"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("banshee"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("comet2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("surano"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_500(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("sentinel2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("schwarzer"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("superd"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("jackal"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("feltzer2"));
			break;
	}
	return iVar0;
}

int func_501(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("schafter2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("bullet"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("f620"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("carbonizzare"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("comet2"));
			break;
	}
	return iVar0;
}

int func_502(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("feltzer2"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("jackal"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("f620"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("superd"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("rocoto"));
			break;
	}
	return iVar0;
}

int func_503(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("banshee"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("coquette"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("sentinel2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("dubsta"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("infernus"));
			break;
	}
	return iVar0;
}

int func_504(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = func_75(joaat("rocoto"));
			break;
		
		case 1:
			iVar0 = func_75(joaat("felon2"));
			break;
		
		case 2:
			iVar0 = func_75(joaat("schafter2"));
			break;
		
		case 3:
			iVar0 = func_75(joaat("carbonizzare"));
			break;
		
		case 4:
			iVar0 = func_75(joaat("exemplar"));
			break;
	}
	return iVar0;
}

int func_505()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_506(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_507(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_507(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_508(var uParam0)
{
	return uParam0->f_1;
}

void func_509()
{
	Global_2097152[func_505() /*10931*/].f_6175.f_36 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

void func_510(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(*uParam0)[iVar0] = -1;
		uParam0->f_6[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < iParam1)
		{
			(*uParam0)[iVar0] = func_497(iVar1, iVar0);
			uParam0->f_6[iVar0] = 0;
		}
		else
		{
			(*uParam0)[iVar0] = -1;
			uParam0->f_6[iVar0] = 1;
		}
		iVar0++;
	}
	Global_2097152[func_505() /*10931*/].f_6175.f_37 = iVar1;
}

void func_511()
{
	func_514("CELL_CLTEST1", 0);
	func_512("CELL_CLTEST1");
	func_514("CELL_CLTEST6", 0);
	func_512("CELL_CLTEST6");
}

void func_512(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_111858.f_14137[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_111858.f_14137[iVar0 /*104*/]), sParam0))
			{
				if (Global_111858.f_14137[iVar0 /*104*/].f_24 == 2)
				{
				}
				else
				{
					func_298();
					Global_111858.f_14137[iVar0 /*104*/].f_99[Global_19681] = 0;
					if (func_513(iVar0))
					{
					}
					else
					{
						Global_111858.f_14137[iVar0 /*104*/].f_24 = 0;
						Global_111858.f_14137[iVar0 /*104*/].f_28 = 0;
						Global_111858.f_14137[iVar0 /*104*/].f_29 = 0;
					}
					HUD::THEFEED_REMOVE_ITEM(Global_111858.f_14137[iVar0 /*104*/].f_16);
				}
			}
		}
		iVar0++;
	}
}

int func_513(int iParam0)
{
	if ((Global_111858.f_14137[iParam0 /*104*/].f_99[0] == 1 || Global_111858.f_14137[iParam0 /*104*/].f_99[1] == 1) || Global_111858.f_14137[iParam0 /*104*/].f_99[2] == 1)
	{
		return 1;
	}
	return 0;
}

void func_514(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (!MISC::IS_STRING_NULL(&(Global_111858.f_14137[iVar0 /*104*/])))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_111858.f_14137[iVar0 /*104*/]), sParam0))
			{
				if (Global_111858.f_14137[iVar0 /*104*/].f_24 == 0)
				{
				}
				Global_111858.f_14137[iVar0 /*104*/].f_24 = 1;
				if (Global_111858.f_14137[iVar0 /*104*/].f_25 == 1)
				{
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[0] == 1)
					{
						Global_111858.f_14047[0 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[1] == 1)
					{
						Global_111858.f_14047[1 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[2] == 1)
					{
						Global_111858.f_14047[2 /*20*/].f_17 = 0;
					}
					if (Global_111858.f_14137[iVar0 /*104*/].f_99[3] == 1)
					{
						Global_111858.f_14047[3 /*20*/].f_17 = 0;
					}
					Global_111858.f_14137[iVar0 /*104*/].f_25 = 0;
					if (iParam1 == 1)
					{
						Global_111858.f_14137[iVar0 /*104*/].f_27 = 1;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_515()
{
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_107())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (func_112())
	{
		return 0;
	}
	if (func_139(PLAYER::PLAYER_ID(), 1, 0))
	{
		return 0;
	}
	if (func_110())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_1574190)
	{
		return 0;
	}
	if (func_257())
	{
		return 0;
	}
	if (func_256())
	{
		return 0;
	}
	if (func_525())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_516())
	{
		return 0;
	}
	if (!func_136())
	{
		return 0;
	}
	if (func_108())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	return 1;
}

bool func_516()
{
	return Global_74030;
}

bool func_517()
{
	if (Global_2097152[func_505() /*10931*/].f_6175.f_35 == 0)
	{
		return 0;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2097152[func_505() /*10931*/].f_6175.f_35) < 86400;
}

bool func_518()
{
	if (Global_2097152[func_505() /*10931*/].f_6175.f_36 == 0)
	{
		return 0;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2097152[func_505() /*10931*/].f_6175.f_36) < 86400;
}

bool func_519()
{
	if (!MISC::IS_BIT_SET(iLocal_577, 2))
	{
		if (!func_24(PLAYER::PLAYER_ID(), 0))
		{
			if (((((!NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION() && !func_139(PLAYER::PLAYER_ID(), 1, 0)) && !func_112()) && (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))) && CAM::IS_SCREEN_FADED_IN()) && func_520(19))
			{
				MISC::SET_BIT(&iLocal_577, 2);
			}
		}
	}
	return MISC::IS_BIT_SET(iLocal_577, 2);
}

int func_520(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_522(iParam0);
	if (iVar0 == 1)
	{
		return 1;
	}
	iVar1 = func_521(PLAYER::PLAYER_ID(), 1);
	iVar2 = func_418(iVar1, 1);
	if (iVar2 >= iVar0 && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_521(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_420(iParam0);
}

int func_522(int iParam0)
{
	if (func_103())
	{
		return 1;
	}
	if (func_102())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
		case 129:
		case 131:
		case 132:
		case 133:
		case 134:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
		case 144:
		case 146:
		case 137:
		case 148:
		case 135:
		case 236:
		case 150:
			if (!func_523(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
		case 156:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 103:
		case 124:
		case 126:
		case 127:
		case 78:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
		case 130:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

bool func_523(int iParam0)
{
	return func_524(123, iParam0);
}

int func_524(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2587834[iParam0 /*3*/][func_81(uParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_525()
{
	return Global_1590682[PLAYER::PLAYER_ID() /*883*/].f_196 != 0;
}

int func_526()
{
	var uVar0;
	
	func_533(&uVar0);
	if (Global_1312872 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_532())
	{
		return 1;
	}
	if (Global_2464493)
	{
		return 1;
	}
	if (func_531())
	{
		return 1;
	}
	if (func_530(159))
	{
		if (!func_529())
		{
			return 1;
		}
	}
	if (func_530(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_527() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_527()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_527()
{
	switch (func_83())
	{
		case 0:
			return func_528();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_528()
{
	switch (Global_2464595)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_529()
{
	return Global_2451787.f_696;
}

int func_530(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_531()
{
	return Global_2462250;
}

bool func_532()
{
	return Global_2451787.f_691;
}

void func_533(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var4;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 174)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 1035596089:
					func_534(iVar0);
					break;
				
				case 1120313136:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &Var4, 4);
					if (Var4.f_2 == 397890833)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_534(int iParam0)
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_14(Var0.f_1, 1, 1))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
				{
					iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_535(iVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
						}
					}
				}
			}
		}
	}
}

int func_535(int iParam0, var uParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, false))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_536()
{
	SYSTEM::WAIT(0);
}

void func_537()
{
	if (iLocal_115 != -1)
	{
		func_143(iLocal_115, 0);
	}
	func_539(&iLocal_332);
	if (MISC::IS_BIT_SET(iLocal_577, 1))
	{
		func_538(0f, 0f, 0f, func_366(19), 1);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Local_372.f_24))
			{
				NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_372.f_24);
			}
			Local_372.f_24 = -1;
		}
	}
	func_376();
	Global_2540384.f_1715 = 0;
	Global_2540384.f_1716 = 0;
	Global_2540384.f_1718 = 0;
	Global_2540384.f_1744 = 0;
	if (MISC::IS_BIT_SET(iLocal_577, 7))
	{
		func_259(6, 0);
	}
	func_396();
	if (HUD::DOES_BLIP_EXIST(Global_1663732))
	{
		HUD::REMOVE_BLIP(&Global_1663732);
	}
	func_252(0);
	if (HUD::DOES_BLIP_EXIST(Global_1663742))
	{
		HUD::REMOVE_BLIP(&Global_1663742);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iLocal_92)
		{
			func_174(1215605247, 0, 0);
			func_173(0);
		}
		if (iLocal_105)
		{
			func_173(0);
		}
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_538(struct<3> Param0, char* sParam3, int iParam4)
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		iVar0 = 0;
		while (iVar0 < 16)
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_2540384.f_4029[iVar0 /*26*/].f_4), sParam3))
			{
				if (iParam4 || func_31(Global_2540384.f_4029[iVar0 /*26*/].f_1, Param0, 0))
				{
					Global_2540384.f_4029[iVar0 /*26*/] = 0;
					Global_2540384.f_4029[iVar0 /*26*/].f_1 = { 0f, 0f, 0f };
					StringCopy(&(Global_2540384.f_4029[iVar0 /*26*/].f_4), "", 24);
					StringCopy(&(Global_2540384.f_4029[iVar0 /*26*/].f_10), "", 64);
				}
			}
			iVar0++;
		}
	}
}

void func_539(int iParam0)
{
	int iVar0;
	
	if (*iParam0 == -1)
	{
		return;
	}
	iVar0 = func_540(*iParam0);
	if (iVar0 == -1)
	{
		*iParam0 = -1;
		return;
	}
	if (iVar0 > -1 && iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/])
		{
			Global_42356[iVar0 /*32*/].f_7 = 1;
			*iParam0 = -1;
			return;
		}
	}
	*iParam0 = -1;
}

int func_540(int iParam0)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_42356[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_541(struct<21> Param0)
{
	func_547(func_548(Param0), Param0);
	func_544(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_372, 74);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_448, 129);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_543())
	{
		return 0;
	}
	Global_2540384.f_1718 = 0;
	Global_2540384.f_4447 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
	}
	if (func_71(PLAYER::PLAYER_ID(), 6))
	{
		func_259(6, 0);
	}
	func_542();
	return 1;
}

void func_542()
{
	int iVar0;
	
	iVar0 = func_80(1199, -1, 0);
	if (MISC::IS_BIT_SET(iVar0, 3))
	{
		MISC::SET_BIT(&iLocal_578, 1);
	}
	if (MISC::IS_BIT_SET(iVar0, 4))
	{
		MISC::SET_BIT(&iLocal_578, 2);
	}
	if (MISC::IS_BIT_SET(iVar0, 5))
	{
		MISC::SET_BIT(&iLocal_578, 3);
		MISC::SET_BIT(&iLocal_578, 0);
	}
}

int func_543()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_532())
		{
			return 0;
		}
		if (func_530(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_544(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_546();
			}
			else
			{
				return 0;
			}
		}
		if (!func_545())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_546();
					}
					else
					{
						return 0;
					}
				}
				if (func_532())
				{
					if (!bParam2)
					{
						func_546();
					}
					else
					{
						return 0;
					}
				}
				if (func_530(157))
				{
					if (!bParam2)
					{
						func_546();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_546();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312519 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_546();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_546();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_545()
{
	return Global_1312872;
}

void func_546()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_547(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_546();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case joaat("MPSV_LP0_31"):
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 8;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 32;
		
		case 91:
			return 8;
		
		case 92:
			return 32;
		
		case 93:
			return 8;
		
		case 94:
			return 8;
		
		case 102:
			return 8;
		
		case 95:
			return 8;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 32;
		
		case 99:
			return 8;
		
		case 100:
			return 32;
		
		case 101:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 32;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 8;
		
		case 114:
			return 32;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 8;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 123:
			return 8;
		
		case 124:
			return 8;
		
		case 125:
			return 8;
		
		case 126:
			return 8;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 8;
		
		case 131:
			return 8;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 146:
			return 32;
		
		case 147:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 141:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 144:
			return 32;
		
		case 145:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 32;
		
		case 148:
			return 32;
		
		case 149:
			return 32;
		
		case 150:
			return 32;
		
		case 151:
			return 32;
		
		case 152:
			return 2;
		
		case 157:
			return 1;
		
		case 153:
			return 2;
		
		case 154:
			return 4;
		
		case 155:
			return 2;
		
		case 156:
			return 2;
		
		case 138:
			return 1;
		
		case 158:
			return 2;
		
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
		case 164:
			return 0;
		
		case 180:
			return 1;
		
		case 165:
			return 4;
		
		case 168:
			return 4;
		
		case 169:
			return 1;
		
		case 170:
			return 1;
		
		case 176:
			return 1;
		
		case 172:
			return 2;
		
		case 177:
			return 1;
		
		case 173:
			return 1;
		
		case 171:
			return 2;
		
		case 174:
			return 8;
		
		case 175:
			return 8;
		
		case 178:
			return 1;
		
		case 179:
			return 2;
		
		case 166:
			return 16;
		
		case 167:
			return 32;
		
		default:
	}
	return 0;
}

