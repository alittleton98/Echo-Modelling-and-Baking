/*
 * Copyright (c) 2003, 2007-14 Matteo Frigo
 * Copyright (c) 2003, 2007-14 Massachusetts Institute of Technology
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 *
 */

/* This file was automatically generated --- DO NOT EDIT */
/* Generated on Thu Dec 10 07:06:28 EST 2020 */

#include "rdft/codelet-rdft.h"

#if defined(ARCH_PREFERS_FMA) || defined(ISA_EXTENSION_PREFERS_FMA)

/* Generated by: ../../../genfft/gen_hc2hc.native -fma -compact -variables 4 -pipeline-latency 4 -sign 1 -n 16 -dif -name hb_16 -include rdft/scalar/hb.h */

/*
 * This function contains 174 FP additions, 100 FP multiplications,
 * (or, 104 additions, 30 multiplications, 70 fused multiply/add),
 * 63 stack variables, 3 constants, and 64 memory accesses
 */
#include "rdft/scalar/hb.h"

static void hb_16(R *cr, R *ci, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DK(KP923879532, +0.923879532511286756128183189396788286822416626);
     DK(KP707106781, +0.707106781186547524400844362104849039284835938);
     DK(KP414213562, +0.414213562373095048801688724209698078569671875);
     {
	  INT m;
	  for (m = mb, W = W + ((mb - 1) * 30); m < me; m = m + 1, cr = cr + ms, ci = ci - ms, W = W + 30, MAKE_VOLATILE_STRIDE(32, rs)) {
	       E TA, T1O, T21, T1h, T2P, T2S, T3b, T3p, T3q, T3D, T1k, T1P, Tf, T3y, T2A;
	       E T36, TL, T22, T3s, T3t, T3z, T2F, T2U, T2K, T2V, Tu, T3E, TX, T1n, T1T;
	       E T24, T1W, T25, T18, T1m;
	       {
		    E T3, Tw, TJ, T2x, T1g, T2Q, T6, T1d, Ta, TB, Tz, T2R, TE, T2y, Td;
		    E TG;
		    {
			 E T1, T2, TH, TI;
			 T1 = cr[0];
			 T2 = ci[WS(rs, 7)];
			 T3 = T1 + T2;
			 Tw = T1 - T2;
			 TH = ci[WS(rs, 9)];
			 TI = cr[WS(rs, 14)];
			 TJ = TH + TI;
			 T2x = TH - TI;
		    }
		    {
			 E T1e, T1f, T4, T5;
			 T1e = ci[WS(rs, 15)];
			 T1f = cr[WS(rs, 8)];
			 T1g = T1e + T1f;
			 T2Q = T1e - T1f;
			 T4 = cr[WS(rs, 4)];
			 T5 = ci[WS(rs, 3)];
			 T6 = T4 + T5;
			 T1d = T4 - T5;
		    }
		    {
			 E T8, T9, Tx, Ty;
			 T8 = cr[WS(rs, 2)];
			 T9 = ci[WS(rs, 5)];
			 Ta = T8 + T9;
			 TB = T8 - T9;
			 Tx = ci[WS(rs, 11)];
			 Ty = cr[WS(rs, 12)];
			 Tz = Tx + Ty;
			 T2R = Tx - Ty;
		    }
		    {
			 E TC, TD, Tb, Tc;
			 TC = ci[WS(rs, 13)];
			 TD = cr[WS(rs, 10)];
			 TE = TC + TD;
			 T2y = TC - TD;
			 Tb = ci[WS(rs, 1)];
			 Tc = cr[WS(rs, 6)];
			 Td = Tb + Tc;
			 TG = Tb - Tc;
		    }
		    TA = Tw - Tz;
		    T1O = Tw + Tz;
		    T21 = T1g - T1d;
		    T1h = T1d + T1g;
		    T2P = Ta - Td;
		    T2S = T2Q - T2R;
		    T3b = T2S - T2P;
		    {
			 E T1i, T1j, T7, Te;
			 T3p = T2Q + T2R;
			 T3q = T2y + T2x;
			 T3D = T3p - T3q;
			 T1i = TB + TE;
			 T1j = TG + TJ;
			 T1k = T1i - T1j;
			 T1P = T1i + T1j;
			 T7 = T3 + T6;
			 Te = Ta + Td;
			 Tf = T7 + Te;
			 T3y = T7 - Te;
			 {
			      E T2w, T2z, TF, TK;
			      T2w = T3 - T6;
			      T2z = T2x - T2y;
			      T2A = T2w + T2z;
			      T36 = T2w - T2z;
			      TF = TB - TE;
			      TK = TG - TJ;
			      TL = TF + TK;
			      T22 = TF - TK;
			 }
		    }
	       }
	       {
		    E Ti, T13, T11, T2C, T16, T2D, Tl, TY, Tp, TS, TQ, T2H, TV, T2I, Ts;
		    E TN, T2B, T2E;
		    {
			 E Tg, Th, TZ, T10;
			 Tg = cr[WS(rs, 1)];
			 Th = ci[WS(rs, 6)];
			 Ti = Tg + Th;
			 T13 = Tg - Th;
			 TZ = ci[WS(rs, 14)];
			 T10 = cr[WS(rs, 9)];
			 T11 = TZ + T10;
			 T2C = TZ - T10;
		    }
		    {
			 E T14, T15, Tj, Tk;
			 T14 = ci[WS(rs, 10)];
			 T15 = cr[WS(rs, 13)];
			 T16 = T14 + T15;
			 T2D = T14 - T15;
			 Tj = cr[WS(rs, 5)];
			 Tk = ci[WS(rs, 2)];
			 Tl = Tj + Tk;
			 TY = Tj - Tk;
		    }
		    {
			 E Tn, To, TO, TP;
			 Tn = ci[0];
			 To = cr[WS(rs, 7)];
			 Tp = Tn + To;
			 TS = Tn - To;
			 TO = ci[WS(rs, 8)];
			 TP = cr[WS(rs, 15)];
			 TQ = TO + TP;
			 T2H = TO - TP;
		    }
		    {
			 E TT, TU, Tq, Tr;
			 TT = ci[WS(rs, 12)];
			 TU = cr[WS(rs, 11)];
			 TV = TT + TU;
			 T2I = TT - TU;
			 Tq = cr[WS(rs, 3)];
			 Tr = ci[WS(rs, 4)];
			 Ts = Tq + Tr;
			 TN = Tq - Tr;
		    }
		    T3s = T2C + T2D;
		    T3t = T2H + T2I;
		    T3z = T3t - T3s;
		    T2B = Ti - Tl;
		    T2E = T2C - T2D;
		    T2F = T2B - T2E;
		    T2U = T2B + T2E;
		    {
			 E T2G, T2J, Tm, Tt;
			 T2G = Tp - Ts;
			 T2J = T2H - T2I;
			 T2K = T2G + T2J;
			 T2V = T2J - T2G;
			 Tm = Ti + Tl;
			 Tt = Tp + Ts;
			 Tu = Tm + Tt;
			 T3E = Tm - Tt;
		    }
		    {
			 E TR, TW, T1R, T1S;
			 TR = TN - TQ;
			 TW = TS - TV;
			 TX = FNMS(KP414213562, TW, TR);
			 T1n = FMA(KP414213562, TR, TW);
			 T1R = T11 - TY;
			 T1S = T13 + T16;
			 T1T = FNMS(KP414213562, T1S, T1R);
			 T24 = FMA(KP414213562, T1R, T1S);
		    }
		    {
			 E T1U, T1V, T12, T17;
			 T1U = TN + TQ;
			 T1V = TS + TV;
			 T1W = FNMS(KP414213562, T1V, T1U);
			 T25 = FMA(KP414213562, T1U, T1V);
			 T12 = TY + T11;
			 T17 = T13 - T16;
			 T18 = FMA(KP414213562, T17, T12);
			 T1m = FNMS(KP414213562, T12, T17);
		    }
	       }
	       cr[0] = Tf + Tu;
	       {
		    E T3r, T3u, T3v, T3l, T3n, T3o, T3w, T3m;
		    T3r = T3p + T3q;
		    T3u = T3s + T3t;
		    T3v = T3r - T3u;
		    T3m = Tf - Tu;
		    T3l = W[14];
		    T3n = T3l * T3m;
		    T3o = W[15];
		    T3w = T3o * T3m;
		    ci[0] = T3r + T3u;
		    ci[WS(rs, 8)] = FMA(T3l, T3v, T3w);
		    cr[WS(rs, 8)] = FNMS(T3o, T3v, T3n);
	       }
	       {
		    E T3A, T3F, T3B, T3G, T3x, T3C;
		    T3A = T3y - T3z;
		    T3F = T3D - T3E;
		    T3x = W[22];
		    T3B = T3x * T3A;
		    T3G = T3x * T3F;
		    T3C = W[23];
		    cr[WS(rs, 12)] = FNMS(T3C, T3F, T3B);
		    ci[WS(rs, 12)] = FMA(T3C, T3A, T3G);
	       }
	       {
		    E T3I, T3L, T3J, T3M, T3H, T3K;
		    T3I = T3y + T3z;
		    T3L = T3E + T3D;
		    T3H = W[6];
		    T3J = T3H * T3I;
		    T3M = T3H * T3L;
		    T3K = W[7];
		    cr[WS(rs, 4)] = FNMS(T3K, T3L, T3J);
		    ci[WS(rs, 4)] = FMA(T3K, T3I, T3M);
	       }
	       {
		    E T38, T3g, T3d, T3j, T37, T3c;
		    T37 = T2V - T2U;
		    T38 = FNMS(KP707106781, T37, T36);
		    T3g = FMA(KP707106781, T37, T36);
		    T3c = T2F - T2K;
		    T3d = FNMS(KP707106781, T3c, T3b);
		    T3j = FMA(KP707106781, T3c, T3b);
		    {
			 E T39, T3e, T35, T3a;
			 T35 = W[26];
			 T39 = T35 * T38;
			 T3e = T35 * T3d;
			 T3a = W[27];
			 cr[WS(rs, 14)] = FNMS(T3a, T3d, T39);
			 ci[WS(rs, 14)] = FMA(T3a, T38, T3e);
		    }
		    {
			 E T3h, T3k, T3f, T3i;
			 T3f = W[10];
			 T3h = T3f * T3g;
			 T3k = T3f * T3j;
			 T3i = W[11];
			 cr[WS(rs, 6)] = FNMS(T3i, T3j, T3h);
			 ci[WS(rs, 6)] = FMA(T3i, T3g, T3k);
		    }
	       }
	       {
		    E T2M, T30, T2X, T33, T2L, T2T, T2W;
		    T2L = T2F + T2K;
		    T2M = FNMS(KP707106781, T2L, T2A);
		    T30 = FMA(KP707106781, T2L, T2A);
		    T2T = T2P + T2S;
		    T2W = T2U + T2V;
		    T2X = FNMS(KP707106781, T2W, T2T);
		    T33 = FMA(KP707106781, T2W, T2T);
		    {
			 E T2v, T2N, T2O, T2Y;
			 T2v = W[18];
			 T2N = T2v * T2M;
			 T2O = W[19];
			 T2Y = T2O * T2M;
			 cr[WS(rs, 10)] = FNMS(T2O, T2X, T2N);
			 ci[WS(rs, 10)] = FMA(T2v, T2X, T2Y);
		    }
		    {
			 E T2Z, T31, T32, T34;
			 T2Z = W[2];
			 T31 = T2Z * T30;
			 T32 = W[3];
			 T34 = T32 * T30;
			 cr[WS(rs, 2)] = FNMS(T32, T33, T31);
			 ci[WS(rs, 2)] = FMA(T2Z, T33, T34);
		    }
	       }
	       {
		    E T1Y, T2a, T27, T2d;
		    {
			 E T1Q, T1X, T23, T26;
			 T1Q = FNMS(KP707106781, T1P, T1O);
			 T1X = T1T + T1W;
			 T1Y = FMA(KP923879532, T1X, T1Q);
			 T2a = FNMS(KP923879532, T1X, T1Q);
			 T23 = FMA(KP707106781, T22, T21);
			 T26 = T24 - T25;
			 T27 = FNMS(KP923879532, T26, T23);
			 T2d = FMA(KP923879532, T26, T23);
		    }
		    {
			 E T1N, T1Z, T20, T28;
			 T1N = W[20];
			 T1Z = T1N * T1Y;
			 T20 = W[21];
			 T28 = T20 * T1Y;
			 cr[WS(rs, 11)] = FNMS(T20, T27, T1Z);
			 ci[WS(rs, 11)] = FMA(T1N, T27, T28);
		    }
		    {
			 E T29, T2b, T2c, T2e;
			 T29 = W[4];
			 T2b = T29 * T2a;
			 T2c = W[5];
			 T2e = T2c * T2a;
			 cr[WS(rs, 3)] = FNMS(T2c, T2d, T2b);
			 ci[WS(rs, 3)] = FMA(T29, T2d, T2e);
		    }
	       }
	       {
		    E T1a, T1s, T1p, T1v;
		    {
			 E TM, T19, T1l, T1o;
			 TM = FNMS(KP707106781, TL, TA);
			 T19 = TX - T18;
			 T1a = FNMS(KP923879532, T19, TM);
			 T1s = FMA(KP923879532, T19, TM);
			 T1l = FNMS(KP707106781, T1k, T1h);
			 T1o = T1m - T1n;
			 T1p = FNMS(KP923879532, T1o, T1l);
			 T1v = FMA(KP923879532, T1o, T1l);
		    }
		    {
			 E Tv, T1b, T1c, T1q;
			 Tv = W[24];
			 T1b = Tv * T1a;
			 T1c = W[25];
			 T1q = T1c * T1a;
			 cr[WS(rs, 13)] = FNMS(T1c, T1p, T1b);
			 ci[WS(rs, 13)] = FMA(Tv, T1p, T1q);
		    }
		    {
			 E T1r, T1t, T1u, T1w;
			 T1r = W[8];
			 T1t = T1r * T1s;
			 T1u = W[9];
			 T1w = T1u * T1s;
			 cr[WS(rs, 5)] = FNMS(T1u, T1v, T1t);
			 ci[WS(rs, 5)] = FMA(T1r, T1v, T1w);
		    }
	       }
	       {
		    E T2i, T2q, T2n, T2t;
		    {
			 E T2g, T2h, T2l, T2m;
			 T2g = FMA(KP707106781, T1P, T1O);
			 T2h = T24 + T25;
			 T2i = FNMS(KP923879532, T2h, T2g);
			 T2q = FMA(KP923879532, T2h, T2g);
			 T2l = FNMS(KP707106781, T22, T21);
			 T2m = T1W - T1T;
			 T2n = FMA(KP923879532, T2m, T2l);
			 T2t = FNMS(KP923879532, T2m, T2l);
		    }
		    {
			 E T2j, T2o, T2f, T2k;
			 T2f = W[12];
			 T2j = T2f * T2i;
			 T2o = T2f * T2n;
			 T2k = W[13];
			 cr[WS(rs, 7)] = FNMS(T2k, T2n, T2j);
			 ci[WS(rs, 7)] = FMA(T2k, T2i, T2o);
		    }
		    {
			 E T2r, T2u, T2p, T2s;
			 T2p = W[28];
			 T2r = T2p * T2q;
			 T2u = T2p * T2t;
			 T2s = W[29];
			 cr[WS(rs, 15)] = FNMS(T2s, T2t, T2r);
			 ci[WS(rs, 15)] = FMA(T2s, T2q, T2u);
		    }
	       }
	       {
		    E T1A, T1I, T1F, T1L;
		    {
			 E T1y, T1z, T1D, T1E;
			 T1y = FMA(KP707106781, TL, TA);
			 T1z = T1m + T1n;
			 T1A = FNMS(KP923879532, T1z, T1y);
			 T1I = FMA(KP923879532, T1z, T1y);
			 T1D = FMA(KP707106781, T1k, T1h);
			 T1E = T18 + TX;
			 T1F = FNMS(KP923879532, T1E, T1D);
			 T1L = FMA(KP923879532, T1E, T1D);
		    }
		    {
			 E T1B, T1G, T1x, T1C;
			 T1x = W[16];
			 T1B = T1x * T1A;
			 T1G = T1x * T1F;
			 T1C = W[17];
			 cr[WS(rs, 9)] = FNMS(T1C, T1F, T1B);
			 ci[WS(rs, 9)] = FMA(T1C, T1A, T1G);
		    }
		    {
			 E T1J, T1M, T1H, T1K;
			 T1H = W[0];
			 T1J = T1H * T1I;
			 T1M = T1H * T1L;
			 T1K = W[1];
			 cr[WS(rs, 1)] = FNMS(T1K, T1L, T1J);
			 ci[WS(rs, 1)] = FMA(T1K, T1I, T1M);
		    }
	       }
	  }
     }
}

static const tw_instr twinstr[] = {
     { TW_FULL, 1, 16 },
     { TW_NEXT, 1, 0 }
};

static const hc2hc_desc desc = { 16, "hb_16", twinstr, &GENUS, { 104, 30, 70, 0 } };

void X(codelet_hb_16) (planner *p) {
     X(khc2hc_register) (p, hb_16, &desc);
}
#else

/* Generated by: ../../../genfft/gen_hc2hc.native -compact -variables 4 -pipeline-latency 4 -sign 1 -n 16 -dif -name hb_16 -include rdft/scalar/hb.h */

/*
 * This function contains 174 FP additions, 84 FP multiplications,
 * (or, 136 additions, 46 multiplications, 38 fused multiply/add),
 * 50 stack variables, 3 constants, and 64 memory accesses
 */
#include "rdft/scalar/hb.h"

static void hb_16(R *cr, R *ci, const R *W, stride rs, INT mb, INT me, INT ms)
{
     DK(KP382683432, +0.382683432365089771728459984030398866761344562);
     DK(KP923879532, +0.923879532511286756128183189396788286822416626);
     DK(KP707106781, +0.707106781186547524400844362104849039284835938);
     {
	  INT m;
	  for (m = mb, W = W + ((mb - 1) * 30); m < me; m = m + 1, cr = cr + ms, ci = ci - ms, W = W + 30, MAKE_VOLATILE_STRIDE(32, rs)) {
	       E T7, T2K, T2W, Tw, T17, T1S, T2k, T1w, Te, TD, T1x, T10, T2n, T2L, T1Z;
	       E T2X, Tm, T1z, TN, T19, T2e, T2p, T2P, T2Z, Tt, T1A, TW, T1a, T27, T2q;
	       E T2S, T30;
	       {
		    E T3, T1Q, T16, T1R, T6, T2i, T13, T2j;
		    {
			 E T1, T2, T14, T15;
			 T1 = cr[0];
			 T2 = ci[WS(rs, 7)];
			 T3 = T1 + T2;
			 T1Q = T1 - T2;
			 T14 = ci[WS(rs, 11)];
			 T15 = cr[WS(rs, 12)];
			 T16 = T14 - T15;
			 T1R = T14 + T15;
		    }
		    {
			 E T4, T5, T11, T12;
			 T4 = cr[WS(rs, 4)];
			 T5 = ci[WS(rs, 3)];
			 T6 = T4 + T5;
			 T2i = T4 - T5;
			 T11 = ci[WS(rs, 15)];
			 T12 = cr[WS(rs, 8)];
			 T13 = T11 - T12;
			 T2j = T11 + T12;
		    }
		    T7 = T3 + T6;
		    T2K = T1Q + T1R;
		    T2W = T2j - T2i;
		    Tw = T3 - T6;
		    T17 = T13 - T16;
		    T1S = T1Q - T1R;
		    T2k = T2i + T2j;
		    T1w = T13 + T16;
	       }
	       {
		    E Ta, T1T, TC, T1U, Td, T1W, Tz, T1X;
		    {
			 E T8, T9, TA, TB;
			 T8 = cr[WS(rs, 2)];
			 T9 = ci[WS(rs, 5)];
			 Ta = T8 + T9;
			 T1T = T8 - T9;
			 TA = ci[WS(rs, 13)];
			 TB = cr[WS(rs, 10)];
			 TC = TA - TB;
			 T1U = TA + TB;
		    }
		    {
			 E Tb, Tc, Tx, Ty;
			 Tb = ci[WS(rs, 1)];
			 Tc = cr[WS(rs, 6)];
			 Td = Tb + Tc;
			 T1W = Tb - Tc;
			 Tx = ci[WS(rs, 9)];
			 Ty = cr[WS(rs, 14)];
			 Tz = Tx - Ty;
			 T1X = Tx + Ty;
		    }
		    Te = Ta + Td;
		    TD = Tz - TC;
		    T1x = TC + Tz;
		    T10 = Ta - Td;
		    {
			 E T2l, T2m, T1V, T1Y;
			 T2l = T1T + T1U;
			 T2m = T1W + T1X;
			 T2n = KP707106781 * (T2l - T2m);
			 T2L = KP707106781 * (T2l + T2m);
			 T1V = T1T - T1U;
			 T1Y = T1W - T1X;
			 T1Z = KP707106781 * (T1V + T1Y);
			 T2X = KP707106781 * (T1V - T1Y);
		    }
	       }
	       {
		    E Ti, T2b, TL, T2c, Tl, T28, TI, T29, TF, TM;
		    {
			 E Tg, Th, TJ, TK;
			 Tg = cr[WS(rs, 1)];
			 Th = ci[WS(rs, 6)];
			 Ti = Tg + Th;
			 T2b = Tg - Th;
			 TJ = ci[WS(rs, 10)];
			 TK = cr[WS(rs, 13)];
			 TL = TJ - TK;
			 T2c = TJ + TK;
		    }
		    {
			 E Tj, Tk, TG, TH;
			 Tj = cr[WS(rs, 5)];
			 Tk = ci[WS(rs, 2)];
			 Tl = Tj + Tk;
			 T28 = Tj - Tk;
			 TG = ci[WS(rs, 14)];
			 TH = cr[WS(rs, 9)];
			 TI = TG - TH;
			 T29 = TG + TH;
		    }
		    Tm = Ti + Tl;
		    T1z = TI + TL;
		    TF = Ti - Tl;
		    TM = TI - TL;
		    TN = TF - TM;
		    T19 = TF + TM;
		    {
			 E T2a, T2d, T2N, T2O;
			 T2a = T28 + T29;
			 T2d = T2b - T2c;
			 T2e = FMA(KP923879532, T2a, KP382683432 * T2d);
			 T2p = FNMS(KP382683432, T2a, KP923879532 * T2d);
			 T2N = T2b + T2c;
			 T2O = T29 - T28;
			 T2P = FNMS(KP923879532, T2O, KP382683432 * T2N);
			 T2Z = FMA(KP382683432, T2O, KP923879532 * T2N);
		    }
	       }
	       {
		    E Tp, T24, TU, T25, Ts, T21, TR, T22, TO, TV;
		    {
			 E Tn, To, TS, TT;
			 Tn = ci[0];
			 To = cr[WS(rs, 7)];
			 Tp = Tn + To;
			 T24 = Tn - To;
			 TS = ci[WS(rs, 12)];
			 TT = cr[WS(rs, 11)];
			 TU = TS - TT;
			 T25 = TS + TT;
		    }
		    {
			 E Tq, Tr, TP, TQ;
			 Tq = cr[WS(rs, 3)];
			 Tr = ci[WS(rs, 4)];
			 Ts = Tq + Tr;
			 T21 = Tq - Tr;
			 TP = ci[WS(rs, 8)];
			 TQ = cr[WS(rs, 15)];
			 TR = TP - TQ;
			 T22 = TP + TQ;
		    }
		    Tt = Tp + Ts;
		    T1A = TR + TU;
		    TO = Tp - Ts;
		    TV = TR - TU;
		    TW = TO + TV;
		    T1a = TV - TO;
		    {
			 E T23, T26, T2Q, T2R;
			 T23 = T21 - T22;
			 T26 = T24 - T25;
			 T27 = FNMS(KP382683432, T26, KP923879532 * T23);
			 T2q = FMA(KP382683432, T23, KP923879532 * T26);
			 T2Q = T24 + T25;
			 T2R = T21 + T22;
			 T2S = FNMS(KP923879532, T2R, KP382683432 * T2Q);
			 T30 = FMA(KP382683432, T2R, KP923879532 * T2Q);
		    }
	       }
	       {
		    E Tf, Tu, T1u, T1y, T1B, T1C, T1t, T1v;
		    Tf = T7 + Te;
		    Tu = Tm + Tt;
		    T1u = Tf - Tu;
		    T1y = T1w + T1x;
		    T1B = T1z + T1A;
		    T1C = T1y - T1B;
		    cr[0] = Tf + Tu;
		    ci[0] = T1y + T1B;
		    T1t = W[14];
		    T1v = W[15];
		    cr[WS(rs, 8)] = FNMS(T1v, T1C, T1t * T1u);
		    ci[WS(rs, 8)] = FMA(T1v, T1u, T1t * T1C);
	       }
	       {
		    E T2U, T34, T32, T36;
		    {
			 E T2M, T2T, T2Y, T31;
			 T2M = T2K - T2L;
			 T2T = T2P + T2S;
			 T2U = T2M - T2T;
			 T34 = T2M + T2T;
			 T2Y = T2W + T2X;
			 T31 = T2Z - T30;
			 T32 = T2Y - T31;
			 T36 = T2Y + T31;
		    }
		    {
			 E T2J, T2V, T33, T35;
			 T2J = W[20];
			 T2V = W[21];
			 cr[WS(rs, 11)] = FNMS(T2V, T32, T2J * T2U);
			 ci[WS(rs, 11)] = FMA(T2V, T2U, T2J * T32);
			 T33 = W[4];
			 T35 = W[5];
			 cr[WS(rs, 3)] = FNMS(T35, T36, T33 * T34);
			 ci[WS(rs, 3)] = FMA(T35, T34, T33 * T36);
		    }
	       }
	       {
		    E T3a, T3g, T3e, T3i;
		    {
			 E T38, T39, T3c, T3d;
			 T38 = T2K + T2L;
			 T39 = T2Z + T30;
			 T3a = T38 - T39;
			 T3g = T38 + T39;
			 T3c = T2W - T2X;
			 T3d = T2P - T2S;
			 T3e = T3c + T3d;
			 T3i = T3c - T3d;
		    }
		    {
			 E T37, T3b, T3f, T3h;
			 T37 = W[12];
			 T3b = W[13];
			 cr[WS(rs, 7)] = FNMS(T3b, T3e, T37 * T3a);
			 ci[WS(rs, 7)] = FMA(T37, T3e, T3b * T3a);
			 T3f = W[28];
			 T3h = W[29];
			 cr[WS(rs, 15)] = FNMS(T3h, T3i, T3f * T3g);
			 ci[WS(rs, 15)] = FMA(T3f, T3i, T3h * T3g);
		    }
	       }
	       {
		    E TY, T1e, T1c, T1g;
		    {
			 E TE, TX, T18, T1b;
			 TE = Tw + TD;
			 TX = KP707106781 * (TN + TW);
			 TY = TE - TX;
			 T1e = TE + TX;
			 T18 = T10 + T17;
			 T1b = KP707106781 * (T19 + T1a);
			 T1c = T18 - T1b;
			 T1g = T18 + T1b;
		    }
		    {
			 E Tv, TZ, T1d, T1f;
			 Tv = W[18];
			 TZ = W[19];
			 cr[WS(rs, 10)] = FNMS(TZ, T1c, Tv * TY);
			 ci[WS(rs, 10)] = FMA(TZ, TY, Tv * T1c);
			 T1d = W[2];
			 T1f = W[3];
			 cr[WS(rs, 2)] = FNMS(T1f, T1g, T1d * T1e);
			 ci[WS(rs, 2)] = FMA(T1f, T1e, T1d * T1g);
		    }
	       }
	       {
		    E T1k, T1q, T1o, T1s;
		    {
			 E T1i, T1j, T1m, T1n;
			 T1i = Tw - TD;
			 T1j = KP707106781 * (T1a - T19);
			 T1k = T1i - T1j;
			 T1q = T1i + T1j;
			 T1m = T17 - T10;
			 T1n = KP707106781 * (TN - TW);
			 T1o = T1m - T1n;
			 T1s = T1m + T1n;
		    }
		    {
			 E T1h, T1l, T1p, T1r;
			 T1h = W[26];
			 T1l = W[27];
			 cr[WS(rs, 14)] = FNMS(T1l, T1o, T1h * T1k);
			 ci[WS(rs, 14)] = FMA(T1h, T1o, T1l * T1k);
			 T1p = W[10];
			 T1r = W[11];
			 cr[WS(rs, 6)] = FNMS(T1r, T1s, T1p * T1q);
			 ci[WS(rs, 6)] = FMA(T1p, T1s, T1r * T1q);
		    }
	       }
	       {
		    E T2g, T2u, T2s, T2w;
		    {
			 E T20, T2f, T2o, T2r;
			 T20 = T1S - T1Z;
			 T2f = T27 - T2e;
			 T2g = T20 - T2f;
			 T2u = T20 + T2f;
			 T2o = T2k - T2n;
			 T2r = T2p - T2q;
			 T2s = T2o - T2r;
			 T2w = T2o + T2r;
		    }
		    {
			 E T1P, T2h, T2t, T2v;
			 T1P = W[24];
			 T2h = W[25];
			 cr[WS(rs, 13)] = FNMS(T2h, T2s, T1P * T2g);
			 ci[WS(rs, 13)] = FMA(T2h, T2g, T1P * T2s);
			 T2t = W[8];
			 T2v = W[9];
			 cr[WS(rs, 5)] = FNMS(T2v, T2w, T2t * T2u);
			 ci[WS(rs, 5)] = FMA(T2v, T2u, T2t * T2w);
		    }
	       }
	       {
		    E T2A, T2G, T2E, T2I;
		    {
			 E T2y, T2z, T2C, T2D;
			 T2y = T1S + T1Z;
			 T2z = T2p + T2q;
			 T2A = T2y - T2z;
			 T2G = T2y + T2z;
			 T2C = T2k + T2n;
			 T2D = T2e + T27;
			 T2E = T2C - T2D;
			 T2I = T2C + T2D;
		    }
		    {
			 E T2x, T2B, T2F, T2H;
			 T2x = W[16];
			 T2B = W[17];
			 cr[WS(rs, 9)] = FNMS(T2B, T2E, T2x * T2A);
			 ci[WS(rs, 9)] = FMA(T2x, T2E, T2B * T2A);
			 T2F = W[0];
			 T2H = W[1];
			 cr[WS(rs, 1)] = FNMS(T2H, T2I, T2F * T2G);
			 ci[WS(rs, 1)] = FMA(T2F, T2I, T2H * T2G);
		    }
	       }
	       {
		    E T1G, T1M, T1K, T1O;
		    {
			 E T1E, T1F, T1I, T1J;
			 T1E = T7 - Te;
			 T1F = T1A - T1z;
			 T1G = T1E - T1F;
			 T1M = T1E + T1F;
			 T1I = T1w - T1x;
			 T1J = Tm - Tt;
			 T1K = T1I - T1J;
			 T1O = T1J + T1I;
		    }
		    {
			 E T1D, T1H, T1L, T1N;
			 T1D = W[22];
			 T1H = W[23];
			 cr[WS(rs, 12)] = FNMS(T1H, T1K, T1D * T1G);
			 ci[WS(rs, 12)] = FMA(T1D, T1K, T1H * T1G);
			 T1L = W[6];
			 T1N = W[7];
			 cr[WS(rs, 4)] = FNMS(T1N, T1O, T1L * T1M);
			 ci[WS(rs, 4)] = FMA(T1L, T1O, T1N * T1M);
		    }
	       }
	  }
     }
}

static const tw_instr twinstr[] = {
     { TW_FULL, 1, 16 },
     { TW_NEXT, 1, 0 }
};

static const hc2hc_desc desc = { 16, "hb_16", twinstr, &GENUS, { 136, 46, 38, 0 } };

void X(codelet_hb_16) (planner *p) {
     X(khc2hc_register) (p, hb_16, &desc);
}
#endif
