/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) jit_tmp_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int long long int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[20] = {16, 1, 0, 16, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

/* C:(i0[16])->(o0[16]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a5, a6, a7, a8, a9;
  a0=arg[0] ? arg[0][1] : 0;
  a1=cos(a0);
  a2=arg[0] ? arg[0][3] : 0;
  a3=cos(a2);
  a4=arg[0] ? arg[0][5] : 0;
  a5=cos(a4);
  a6=arg[0] ? arg[0][7] : 0;
  a7=cos(a6);
  a8=arg[0] ? arg[0][9] : 0;
  a9=cos(a8);
  a10=arg[0] ? arg[0][11] : 0;
  a11=cos(a10);
  a12=arg[0] ? arg[0][13] : 0;
  a13=sin(a12);
  a14=arg[0] ? arg[0][14] : 0;
  a15=cos(a14);
  a16=arg[0] ? arg[0][12] : 0;
  a17=cos(a16);
  a18=arg[0] ? arg[0][10] : 0;
  a19=cos(a18);
  a20=arg[0] ? arg[0][8] : 0;
  a21=cos(a20);
  a22=arg[0] ? arg[0][6] : 0;
  a23=cos(a22);
  a24=arg[0] ? arg[0][4] : 0;
  a25=sin(a24);
  a26=arg[0] ? arg[0][2] : 0;
  a27=cos(a26);
  a28=9.8100000000000005e+00;
  a0=sin(a0);
  a29=(a28*a0);
  a30=(a27*a29);
  a31=(a3*a30);
  a2=sin(a2);
  a28=(a28*a1);
  a32=(a2*a28);
  a31=(a31+a32);
  a32=(a25*a31);
  a24=cos(a24);
  a26=sin(a26);
  a29=(a26*a29);
  a33=(a24*a29);
  a32=(a32+a33);
  a33=(a23*a32);
  a22=sin(a22);
  a34=(a25*a29);
  a31=(a24*a31);
  a34=(a34-a31);
  a31=(a5*a34);
  a4=sin(a4);
  a28=(a3*a28);
  a35=(a2*a30);
  a28=(a28-a35);
  a35=(a4*a28);
  a31=(a31-a35);
  a35=(a22*a31);
  a33=(a33-a35);
  a35=(a21*a33);
  a20=sin(a20);
  a31=(a23*a31);
  a36=(a22*a32);
  a31=(a31+a36);
  a36=(a7*a31);
  a6=sin(a6);
  a37=(a4*a34);
  a28=(a5*a28);
  a37=(a37+a28);
  a28=(a6*a37);
  a36=(a36-a28);
  a28=(a20*a36);
  a35=(a35-a28);
  a28=(a19*a35);
  a18=sin(a18);
  a38=(a21*a36);
  a39=(a20*a33);
  a38=(a38+a39);
  a39=(a9*a38);
  a8=sin(a8);
  a40=(a6*a31);
  a37=(a7*a37);
  a40=(a40+a37);
  a37=(a8*a40);
  a39=(a39-a37);
  a37=(a18*a39);
  a28=(a28-a37);
  a37=(a17*a28);
  a16=sin(a16);
  a39=(a19*a39);
  a41=(a18*a35);
  a39=(a39+a41);
  a41=(a11*a39);
  a10=sin(a10);
  a42=(a8*a38);
  a40=(a9*a40);
  a42=(a42+a40);
  a40=(a10*a42);
  a41=(a41-a40);
  a40=(a16*a41);
  a37=(a37-a40);
  a40=(a15*a37);
  a14=sin(a14);
  a12=cos(a12);
  a41=(a17*a41);
  a43=(a16*a28);
  a41=(a41+a43);
  a43=(a12*a41);
  a44=(a10*a39);
  a42=(a11*a42);
  a44=(a44+a42);
  a42=(a13*a44);
  a43=(a43-a42);
  a42=(a14*a43);
  a40=(a40-a42);
  a42=arg[0] ? arg[0][15] : 0;
  a45=cos(a42);
  a46=(a45*a40);
  a46=(a40+a46);
  a47=(a15*a46);
  a43=(a15*a43);
  a48=(a14*a37);
  a43=(a43+a48);
  a45=(a45*a43);
  a42=sin(a42);
  a48=(a13*a41);
  a44=(a12*a44);
  a48=(a48+a44);
  a48=(a42*a48);
  a45=(a45-a48);
  a43=(a43+a45);
  a48=(a14*a43);
  a47=(a47+a48);
  a48=(a13*a47);
  a42=(a42*a40);
  a40=(a12*a42);
  a48=(a48+a40);
  a40=(a11*a48);
  a13=(a13*a42);
  a12=(a12*a47);
  a13=(a13-a12);
  a13=(a13-a37);
  a37=(a17*a13);
  a15=(a15*a43);
  a14=(a14*a46);
  a15=(a15-a14);
  a41=(a41+a15);
  a14=(a16*a41);
  a37=(a37-a14);
  a14=(a10*a37);
  a40=(a40-a14);
  a14=(a9*a40);
  a11=(a11*a37);
  a10=(a10*a48);
  a11=(a11+a10);
  a11=(a11-a28);
  a28=(a19*a11);
  a16=(a16*a13);
  a17=(a17*a41);
  a16=(a16+a17);
  a39=(a39+a16);
  a17=(a18*a39);
  a28=(a28-a17);
  a17=(a8*a28);
  a14=(a14-a17);
  a17=(a7*a14);
  a9=(a9*a28);
  a8=(a8*a40);
  a9=(a9+a8);
  a9=(a9-a35);
  a35=(a21*a9);
  a18=(a18*a11);
  a19=(a19*a39);
  a18=(a18+a19);
  a38=(a38+a18);
  a19=(a20*a38);
  a35=(a35-a19);
  a35=(a35-a33);
  a19=(a6*a35);
  a17=(a17-a19);
  a19=(a5*a17);
  a7=(a7*a35);
  a6=(a6*a14);
  a7=(a7+a6);
  a7=(a7-a33);
  a33=(a23*a7);
  a20=(a20*a9);
  a21=(a21*a38);
  a20=(a20+a21);
  a36=(a36+a20);
  a31=(a31+a36);
  a20=(a22*a31);
  a33=(a33-a20);
  a20=(a4*a33);
  a19=(a19-a20);
  a20=(a3*a19);
  a5=(a5*a33);
  a4=(a4*a17);
  a5=(a5+a4);
  a5=(a5-a32);
  a32=(a24*a5);
  a22=(a22*a7);
  a23=(a23*a31);
  a22=(a22+a23);
  a34=(a34+a22);
  a23=(a25*a34);
  a32=(a32-a23);
  a23=(a2*a32);
  a20=(a20-a23);
  a1=(a1*a20);
  a3=(a3*a32);
  a2=(a2*a19);
  a3=(a3+a2);
  a3=(a3-a29);
  a29=(a27*a3);
  a25=(a25*a5);
  a24=(a24*a34);
  a25=(a25+a24);
  a30=(a25-a30);
  a24=(a26*a30);
  a29=(a29-a24);
  a0=(a0*a29);
  a1=(a1-a0);
  if (res[0]!=0) res[0][0]=a1;
  a26=(a26*a3);
  a27=(a27*a30);
  a26=(a26+a27);
  if (res[0]!=0) res[0][1]=a26;
  if (res[0]!=0) res[0][2]=a20;
  if (res[0]!=0) res[0][3]=a25;
  if (res[0]!=0) res[0][4]=a19;
  if (res[0]!=0) res[0][5]=a22;
  if (res[0]!=0) res[0][6]=a17;
  if (res[0]!=0) res[0][7]=a36;
  if (res[0]!=0) res[0][8]=a14;
  if (res[0]!=0) res[0][9]=a18;
  if (res[0]!=0) res[0][10]=a40;
  if (res[0]!=0) res[0][11]=a16;
  if (res[0]!=0) res[0][12]=a48;
  if (res[0]!=0) res[0][13]=a15;
  if (res[0]!=0) res[0][14]=a42;
  if (res[0]!=0) res[0][15]=a45;
  return 0;
}

CASADI_SYMBOL_EXPORT int C(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void C_incref(void) {
}

CASADI_SYMBOL_EXPORT void C_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int C_n_in(void) { return 1;}

CASADI_SYMBOL_EXPORT casadi_int C_n_out(void) { return 1;}

CASADI_SYMBOL_EXPORT const char* C_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* C_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* C_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* C_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int C_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 1;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif