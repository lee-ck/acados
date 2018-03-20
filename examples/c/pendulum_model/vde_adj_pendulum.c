/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else /* CODEGEN_PREFIX */
  #define CASADI_PREFIX(ID) vde_adj_pendulum_ ## ID
#endif /* CODEGEN_PREFIX */

#include <math.h>

#ifndef real_t
#define real_t double
#endif /* real_t */

#define to_double(x) (double) x
#define to_int(x) (int) x
#define CASADI_CAST(x,y) (x) y
/* Pre-c99 compatibility */
#if __STDC_VERSION__ < 199901L
real_t CASADI_PREFIX(fmin)(real_t x, real_t y) { return x<y ? x : y;}
#define fmin(x,y) CASADI_PREFIX(fmin)(x,y)
real_t CASADI_PREFIX(fmax)(real_t x, real_t y) { return x>y ? x : y;}
#define fmax(x,y) CASADI_PREFIX(fmax)(x,y)
#endif

#define PRINTF printf
real_t CASADI_PREFIX(sq)(real_t x) { return x*x;}
#define sq(x) CASADI_PREFIX(sq)(x)

real_t CASADI_PREFIX(sign)(real_t x) { return x<0 ? -1 : x>0 ? 1 : x;}
#define sign(x) CASADI_PREFIX(sign)(x)

static const int CASADI_PREFIX(s0)[8] = {4, 1, 0, 4, 0, 1, 2, 3};
#define s0 CASADI_PREFIX(s0)
static const int CASADI_PREFIX(s1)[5] = {1, 1, 0, 1, 0};
#define s1 CASADI_PREFIX(s1)
static const int CASADI_PREFIX(s2)[9] = {5, 1, 0, 5, 0, 1, 2, 3, 4};
#define s2 CASADI_PREFIX(s2)
/* adjFun */
int adjFun(const real_t** arg, real_t** res, int* iw, real_t* w, int mem) {
  real_t a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[1] ? arg[1][0] : 0;
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0] ? arg[0][2] : 0;
  real_t a1=cos(a0);
  real_t a2=1.0000000000000001e-01;
  a1=(a2*a1);
  real_t a3=cos(a0);
  real_t a4=(a1*a3);
  real_t a5=1.1000000000000001e+00;
  a5=(a5-a4);
  a4=8.0000000000000004e-01;
  real_t a6=(a4*a5);
  real_t a7=arg[1] ? arg[1][3] : 0;
  real_t a8=(a7/a6);
  real_t a9=1.0791000000000002e+01;
  real_t a10=(a9*a8);
  real_t a11=cos(a0);
  a11=(a11*a10);
  a10=arg[2] ? arg[2][0] : 0;
  real_t a12=(a10*a8);
  real_t a13=sin(a0);
  a13=(a13*a12);
  a11=(a11-a13);
  a13=cos(a0);
  a12=-8.0000000000000016e-02;
  a13=(a12*a13);
  real_t a14=arg[0] ? arg[0][3] : 0;
  real_t a15=(a14*a8);
  real_t a16=(a14*a15);
  real_t a17=(a13*a16);
  real_t a18=cos(a0);
  a18=(a18*a17);
  a11=(a11+a18);
  a18=sin(a0);
  a16=(a18*a16);
  a16=(a12*a16);
  a17=sin(a0);
  a17=(a17*a16);
  a11=(a11-a17);
  a13=(a13*a18);
  a18=(a13*a14);
  a17=(a18*a14);
  a16=cos(a0);
  real_t a19=(a10*a16);
  a17=(a17+a19);
  a19=sin(a0);
  a9=(a9*a19);
  a17=(a17+a9);
  a17=(a17/a6);
  a17=(a17/a6);
  a17=(a17*a7);
  a4=(a4*a17);
  a17=sin(a0);
  a17=(a12*a17);
  a7=(a17*a14);
  a6=(a7*a14);
  a9=cos(a0);
  a19=9.8100000000000009e-01;
  a9=(a19*a9);
  real_t a20=sin(a0);
  real_t a21=(a9*a20);
  a6=(a6+a21);
  a6=(a6+a10);
  a6=(a6/a5);
  a6=(a6/a5);
  a10=arg[1] ? arg[1][1] : 0;
  a6=(a6*a10);
  a4=(a4+a6);
  a1=(a1*a4);
  a6=sin(a0);
  a6=(a6*a1);
  a11=(a11-a6);
  a3=(a3*a4);
  a2=(a2*a3);
  a3=sin(a0);
  a3=(a3*a2);
  a11=(a11-a3);
  a10=(a10/a5);
  a9=(a9*a10);
  a5=cos(a0);
  a5=(a5*a9);
  a11=(a11+a5);
  a20=(a20*a10);
  a19=(a19*a20);
  a20=sin(a0);
  a20=(a20*a19);
  a11=(a11-a20);
  a20=(a14*a10);
  a14=(a14*a20);
  a12=(a12*a14);
  a0=cos(a0);
  a0=(a0*a12);
  a11=(a11+a0);
  if (res[0]!=0) res[0][2]=a11;
  a18=(a18*a8);
  a13=(a13*a15);
  a18=(a18+a13);
  a13=arg[1] ? arg[1][2] : 0;
  a18=(a18+a13);
  a7=(a7*a10);
  a18=(a18+a7);
  a17=(a17*a20);
  a18=(a18+a17);
  if (res[0]!=0) res[0][3]=a18;
  a16=(a16*a8);
  a16=(a16+a10);
  if (res[0]!=0) res[0][4]=a16;
  return 0;
}

void adjFun_incref(void) {
}

void adjFun_decref(void) {
}

int adjFun_n_in(void) { return 3;}

int adjFun_n_out(void) { return 1;}

const char* adjFun_name_in(int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    default: return 0;
  }
}

const char* adjFun_name_out(int i){
  switch (i) {
    case 0: return "o0";
    default: return 0;
  }
}

const int* adjFun_sparsity_in(int i) {
  switch (i) {
    case 0: return s0;
    case 1: return s0;
    case 2: return s1;
    default: return 0;
  }
}

const int* adjFun_sparsity_out(int i) {
  switch (i) {
    case 0: return s2;
    default: return 0;
  }
}

int adjFun_work(int *sz_arg, int* sz_res, int *sz_iw, int *sz_w) {
  if (sz_arg) *sz_arg = 3;
  if (sz_res) *sz_res = 1;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 22;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
