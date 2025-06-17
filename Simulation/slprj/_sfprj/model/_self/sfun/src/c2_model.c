/* Include files */

#include "model_sfun.h"
#include "c2_model.h"
#include <string.h>
#include "mwmathutil.h"
#define _SF_MEX_LISTEN_FOR_CTRL_C(S)   sf_mex_listen_for_ctrl_c(S);
#ifdef utFree
#undef utFree
#endif

#ifdef utMalloc
#undef utMalloc
#endif

#ifdef __cplusplus

extern "C" void *utMalloc(size_t size);
extern "C" void utFree(void*);

#else

extern void *utMalloc(size_t size);
extern void utFree(void*);

#endif

/* Forward Declarations */

/* Type Definitions */

/* Named Constants */
#define CALL_EVENT                     (-1)

/* Variable Declarations */

/* Variable Definitions */
static real_T _sfTime_;
static emlrtMCInfo c2_emlrtMCI = { 790,/* lineNo */
  17,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtMCInfo c2_b_emlrtMCI = { 819,/* lineNo */
  13,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtMCInfo c2_c_emlrtMCI = { 834,/* lineNo */
  13,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtMCInfo c2_d_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatescalar",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatescalar.m"/* pName */
};

static emlrtMCInfo c2_e_emlrtMCI = { 510,/* lineNo */
  17,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtMCInfo c2_f_emlrtMCI = { 120,/* lineNo */
  9,                                   /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtMCInfo c2_g_emlrtMCI = { 80,/* lineNo */
  13,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtMCInfo c2_h_emlrtMCI = { 85,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtMCInfo c2_i_emlrtMCI = { 87,/* lineNo */
  23,                                  /* colNo */
  "reshapeSizeChecks",                 /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pName */
};

static emlrtMCInfo c2_j_emlrtMCI = { 122,/* lineNo */
  5,                                   /* colNo */
  "indexShapeCheck",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pName */
};

static emlrtMCInfo c2_k_emlrtMCI = { 53,/* lineNo */
  5,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtMCInfo c2_l_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtMCInfo c2_m_emlrtMCI = { 49,/* lineNo */
  19,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c2_n_emlrtMCI = { 64,/* lineNo */
  15,                                  /* colNo */
  "assertValidSizeArg",                /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\assertValidSizeArg.m"/* pName */
};

static emlrtMCInfo c2_o_emlrtMCI = { 720,/* lineNo */
  21,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtMCInfo c2_p_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatenonnan",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatenonnan.m"/* pName */
};

static emlrtMCInfo c2_q_emlrtMCI = { 14,/* lineNo */
  37,                                  /* colNo */
  "validatefinite",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatefinite.m"/* pName */
};

static emlrtMCInfo c2_r_emlrtMCI = { 82,/* lineNo */
  5,                                   /* colNo */
  "power",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pName */
};

static emlrtMCInfo c2_s_emlrtMCI = { 386,/* lineNo */
  1,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtMCInfo c2_t_emlrtMCI = { 69,/* lineNo */
  13,                                  /* colNo */
  "kdtreeBuildable",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\kdtreeBuildable.m"/* pName */
};

static emlrtMCInfo c2_u_emlrtMCI = { 13,/* lineNo */
  9,                                   /* colNo */
  "sqrt",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pName */
};

static emlrtMCInfo c2_v_emlrtMCI = { 241,/* lineNo */
  1,                                   /* colNo */
  "unique",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"/* pName */
};

static emlrtRSInfo c2_emlrtRSI = { 7,  /* lineNo */
  "Path Planning/MATLAB Function",     /* fcnName */
  "#model:149"                         /* pathName */
};

static emlrtRSInfo c2_b_emlrtRSI = { 9,/* lineNo */
  "Path Planning/MATLAB Function",     /* fcnName */
  "#model:149"                         /* pathName */
};

static emlrtRSInfo c2_c_emlrtRSI = { 21,/* lineNo */
  "Path Planning/MATLAB Function",     /* fcnName */
  "#model:149"                         /* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 33,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 34,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 43,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 75,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 87,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 88,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 89,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 90,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 134,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 139,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 149,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_o_emlrtRSI = { 596,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_p_emlrtRSI = { 9,/* lineNo */
  "pcsegdist",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pathName */
};

static emlrtRSInfo c2_q_emlrtRSI = { 21,/* lineNo */
  "pcsegdist",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pathName */
};

static emlrtRSInfo c2_r_emlrtRSI = { 31,/* lineNo */
  "pcsegdist",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pathName */
};

static emlrtRSInfo c2_s_emlrtRSI = { 93,/* lineNo */
  "validateattributes",                /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\lang\\validateattributes.m"/* pathName */
};

static emlrtRSInfo c2_t_emlrtRSI = { 11,/* lineNo */
  "validatescalar",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\+valattr\\validatescalar.m"/* pathName */
};

static emlrtRSInfo c2_u_emlrtRSI = { 509,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_v_emlrtRSI = { 155,/* lineNo */
  "pcsegdist",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pathName */
};

static emlrtRSInfo c2_w_emlrtRSI = { 162,/* lineNo */
  "pcsegdist",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pathName */
};

static emlrtRSInfo c2_x_emlrtRSI = { 168,/* lineNo */
  "pcsegdist",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pathName */
};

static emlrtRSInfo c2_y_emlrtRSI = { 182,/* lineNo */
  "pcsegdist",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pathName */
};

static emlrtRSInfo c2_ab_emlrtRSI = { 153,/* lineNo */
  "pcsegdist",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pathName */
};

static emlrtRSInfo c2_bb_emlrtRSI = { 236,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_cb_emlrtRSI = { 239,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_db_emlrtRSI = { 241,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_eb_emlrtRSI = { 245,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_fb_emlrtRSI = { 308,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_gb_emlrtRSI = { 311,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_hb_emlrtRSI = { 312,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_ib_emlrtRSI = { 207,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_jb_emlrtRSI = { 1,/* lineNo */
  "getSubset",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+pc\\getSubset.p"/* pathName */
};

static emlrtRSInfo c2_kb_emlrtRSI = { 51,/* lineNo */
  "reshapeSizeChecks",                 /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\reshapeSizeChecks.m"/* pathName */
};

static emlrtRSInfo c2_lb_emlrtRSI = { 66,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo c2_mb_emlrtRSI = { 783,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_nb_emlrtRSI = { 34,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c2_ob_emlrtRSI = { 72,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c2_pb_emlrtRSI = { 75,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c2_qb_emlrtRSI = { 77,/* lineNo */
  "repmat",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pathName */
};

static emlrtRSInfo c2_rb_emlrtRSI = { 20,/* lineNo */
  "eml_int_forloop_overflow_check",    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pathName */
};

static emlrtRSInfo c2_sb_emlrtRSI = { 144,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_tb_emlrtRSI = { 39,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c2_ub_emlrtRSI = { 138,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c2_vb_emlrtRSI = { 396,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c2_wb_emlrtRSI = { 42,/* lineNo */
  "indexShapeCheck",                   /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\indexShapeCheck.m"/* pathName */
};

static emlrtRSInfo c2_xb_emlrtRSI = { 187,/* lineNo */
  "pcsegdist",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pathName */
};

static emlrtRSInfo c2_yb_emlrtRSI = { 202,/* lineNo */
  "pcsegdist",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pathName */
};

static emlrtRSInfo c2_ac_emlrtRSI = { 209,/* lineNo */
  "pcsegdist",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pathName */
};

static emlrtRSInfo c2_bc_emlrtRSI = { 210,/* lineNo */
  "pcsegdist",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pathName */
};

static emlrtRSInfo c2_cc_emlrtRSI = { 88,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_dc_emlrtRSI = { 262,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_ec_emlrtRSI = { 264,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_fc_emlrtRSI = { 271,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_gc_emlrtRSI = { 273,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_hc_emlrtRSI = { 288,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_ic_emlrtRSI = { 299,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_jc_emlrtRSI = { 1267,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_kc_emlrtRSI = { 659,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_lc_emlrtRSI = { 552,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_mc_emlrtRSI = { 554,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_nc_emlrtRSI = { 559,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_oc_emlrtRSI = { 907,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_pc_emlrtRSI = { 44,/* lineNo */
  "mpower",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m"/* pathName */
};

static emlrtRSInfo c2_qc_emlrtRSI = { 71,/* lineNo */
  "power",                             /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\power.m"/* pathName */
};

static emlrtRSInfo c2_rc_emlrtRSI = { 376,/* lineNo */
  "find",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pathName */
};

static emlrtRSInfo c2_sc_emlrtRSI = { 968,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_tc_emlrtRSI = { 970,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_uc_emlrtRSI = { 842,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_vc_emlrtRSI = { 848,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_wc_emlrtRSI = { 852,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_xc_emlrtRSI = { 860,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_yc_emlrtRSI = { 16,/* lineNo */
  "sqrt",                              /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"/* pathName */
};

static emlrtRSInfo c2_ad_emlrtRSI = { 38,/* lineNo */
  "applyScalarFunctionInPlace",        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\applyScalarFunctionInPlace.m"/* pathName */
};

static emlrtRSInfo c2_bd_emlrtRSI = { 48,/* lineNo */
  "unique",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"/* pathName */
};

static emlrtRSInfo c2_cd_emlrtRSI = { 164,/* lineNo */
  "unique",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"/* pathName */
};

static emlrtRSInfo c2_dd_emlrtRSI = { 166,/* lineNo */
  "unique",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"/* pathName */
};

static emlrtRSInfo c2_ed_emlrtRSI = { 223,/* lineNo */
  "unique",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"/* pathName */
};

static emlrtRSInfo c2_fd_emlrtRSI = { 234,/* lineNo */
  "unique",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"/* pathName */
};

static emlrtRSInfo c2_gd_emlrtRSI = { 242,/* lineNo */
  "unique",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"/* pathName */
};

static emlrtRSInfo c2_hd_emlrtRSI = { 248,/* lineNo */
  "unique",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"/* pathName */
};

static emlrtRSInfo c2_id_emlrtRSI = { 145,/* lineNo */
  "sortIdx",                           /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\sortIdx.m"/* pathName */
};

static emlrtRSInfo c2_jd_emlrtRSI = { 57,/* lineNo */
  "mergesort",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\mergesort.m"/* pathName */
};

static emlrtRSInfo c2_kd_emlrtRSI = { 113,/* lineNo */
  "mergesort",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\mergesort.m"/* pathName */
};

static emlrtRSInfo c2_ld_emlrtRSI = { 22,/* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo c2_md_emlrtRSI = { 281,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_nd_emlrtRSI = { 286,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRTEInfo c2_emlrtRTEI = { 1100,/* lineNo */
  13,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_b_emlrtRTEI = { 1101,/* lineNo */
  13,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_c_emlrtRTEI = { 1102,/* lineNo */
  13,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_d_emlrtRTEI = { 1107,/* lineNo */
  17,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_e_emlrtRTEI = { 134,/* lineNo */
  13,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_f_emlrtRTEI = { 139,/* lineNo */
  13,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_g_emlrtRTEI = { 144,/* lineNo */
  13,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_h_emlrtRTEI = { 149,/* lineNo */
  13,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_i_emlrtRTEI = { 36,/* lineNo */
  13,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_j_emlrtRTEI = { 39,/* lineNo */
  13,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_k_emlrtRTEI = { 40,/* lineNo */
  13,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_l_emlrtRTEI = { 41,/* lineNo */
  13,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_m_emlrtRTEI = { 25,/* lineNo */
  13,                                  /* colNo */
  "pointCloudArray",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloudArray.m"/* pName */
};

static emlrtRTEInfo c2_n_emlrtRTEI = { 26,/* lineNo */
  13,                                  /* colNo */
  "pointCloudArray",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloudArray.m"/* pName */
};

static emlrtRTEInfo c2_o_emlrtRTEI = { 27,/* lineNo */
  13,                                  /* colNo */
  "pointCloudArray",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloudArray.m"/* pName */
};

static emlrtRTEInfo c2_p_emlrtRTEI = { 596,/* lineNo */
  20,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_q_emlrtRTEI = { 599,/* lineNo */
  13,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_r_emlrtRTEI = { 164,/* lineNo */
  1,                                   /* colNo */
  "unique",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"/* pName */
};

static emlrtRTEInfo c2_s_emlrtRTEI = { 148,/* lineNo */
  24,                                  /* colNo */
  "mergesort",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\mergesort.m"/* pName */
};

static emlrtRTEInfo c2_t_emlrtRTEI = { 52,/* lineNo */
  9,                                   /* colNo */
  "mergesort",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\mergesort.m"/* pName */
};

static emlrtRTEInfo c2_u_emlrtRTEI = { 165,/* lineNo */
  20,                                  /* colNo */
  "unique",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\ops\\unique.m"/* pName */
};

static emlrtRTEInfo c2_v_emlrtRTEI = { 168,/* lineNo */
  1,                                   /* colNo */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pName */
};

static emlrtRTEInfo c2_w_emlrtRTEI = { 181,/* lineNo */
  8,                                   /* colNo */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pName */
};

static emlrtRTEInfo c2_x_emlrtRTEI = { 363,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c2_y_emlrtRTEI = { 39,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c2_ab_emlrtRTEI = { 245,/* lineNo */
  21,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_bb_emlrtRTEI = { 208,/* lineNo */
  32,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_cb_emlrtRTEI = { 208,/* lineNo */
  62,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_db_emlrtRTEI = { 209,/* lineNo */
  17,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_eb_emlrtRTEI = { 209,/* lineNo */
  33,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_fb_emlrtRTEI = { 207,/* lineNo */
  19,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_gb_emlrtRTEI = { 207,/* lineNo */
  22,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_hb_emlrtRTEI = { 207,/* lineNo */
  37,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_ib_emlrtRTEI = { 1,/* lineNo */
  1,                                   /* colNo */
  "getSubset",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+pc\\getSubset.p"/* pName */
};

static emlrtRTEInfo c2_jb_emlrtRTEI = { 33,/* lineNo */
  61,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_kb_emlrtRTEI = { 24,/* lineNo */
  13,                                  /* colNo */
  "pointCloudArray",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloudArray.m"/* pName */
};

static emlrtRTEInfo c2_lb_emlrtRTEI = { 1105,/* lineNo */
  17,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_mb_emlrtRTEI = { 85,/* lineNo */
  13,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_nb_emlrtRTEI = { 83,/* lineNo */
  25,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_ob_emlrtRTEI = { 139,/* lineNo */
  54,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_pb_emlrtRTEI = { 144,/* lineNo */
  60,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_qb_emlrtRTEI = { 134,/* lineNo */
  52,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_rb_emlrtRTEI = { 795,/* lineNo */
  17,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_sb_emlrtRTEI = { 37,/* lineNo */
  1,                                   /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c2_tb_emlrtRTEI = { 65,/* lineNo */
  28,                                  /* colNo */
  "repmat",                            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"/* pName */
};

static emlrtRTEInfo c2_ub_emlrtRTEI = { 149,/* lineNo */
  56,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_vb_emlrtRTEI = { 187,/* lineNo */
  1,                                   /* colNo */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pName */
};

static emlrtRTEInfo c2_wb_emlrtRTEI = { 842,/* lineNo */
  110,                                 /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_xb_emlrtRTEI = { 207,/* lineNo */
  39,                                  /* colNo */
  "kdtreeBuildable",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\kdtreeBuildable.m"/* pName */
};

static emlrtRTEInfo c2_yb_emlrtRTEI = { 208,/* lineNo */
  37,                                  /* colNo */
  "kdtreeBuildable",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\kdtreeBuildable.m"/* pName */
};

static emlrtRTEInfo c2_ac_emlrtRTEI = { 908,/* lineNo */
  32,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_bc_emlrtRTEI = { 552,/* lineNo */
  13,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_cc_emlrtRTEI = { 43,/* lineNo */
  21,                                  /* colNo */
  "ComputeMetricBuildable",            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\ComputeMetricBuildable.m"/* pName */
};

static emlrtRTEInfo c2_dc_emlrtRTEI = { 554,/* lineNo */
  35,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_ec_emlrtRTEI = { 358,/* lineNo */
  24,                                  /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c2_fc_emlrtRTEI = { 40,/* lineNo */
  5,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c2_gc_emlrtRTEI = { 554,/* lineNo */
  13,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_hc_emlrtRTEI = { 559,/* lineNo */
  17,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_ic_emlrtRTEI = { 16,/* lineNo */
  9,                                   /* colNo */
  "isnan",                             /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\isnan.m"/* pName */
};

static emlrtRTEInfo c2_jc_emlrtRTEI = { 562,/* lineNo */
  17,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_kc_emlrtRTEI = { 185,/* lineNo */
  14,                                  /* colNo */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pName */
};

static emlrtRTEInfo c2_lc_emlrtRTEI = { 557,/* lineNo */
  17,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_mc_emlrtRTEI = { 261,/* lineNo */
  7,                                   /* colNo */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pName */
};

static emlrtRTEInfo c2_nc_emlrtRTEI = { 7,/* lineNo */
  5,                                   /* colNo */
  "Path Planning/MATLAB Function",     /* fName */
  "#model:149"                         /* pName */
};

static emlrtRTEInfo c2_oc_emlrtRTEI = { 594,/* lineNo */
  18,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_pc_emlrtRTEI = { 596,/* lineNo */
  21,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_qc_emlrtRTEI = { 153,/* lineNo */
  2,                                   /* colNo */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pName */
};

static emlrtRTEInfo c2_rc_emlrtRTEI = { 162,/* lineNo */
  5,                                   /* colNo */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pName */
};

static emlrtRTEInfo c2_sc_emlrtRTEI = { 139,/* lineNo */
  34,                                  /* colNo */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pName */
};

static emlrtRTEInfo c2_tc_emlrtRTEI = { 181,/* lineNo */
  1,                                   /* colNo */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pName */
};

static emlrtRTEInfo c2_uc_emlrtRTEI = { 234,/* lineNo */
  45,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_vc_emlrtRTEI = { 31,/* lineNo */
  6,                                   /* colNo */
  "find",                              /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\find.m"/* pName */
};

static emlrtRTEInfo c2_wc_emlrtRTEI = { 200,/* lineNo */
  47,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_xc_emlrtRTEI = { 31,/* lineNo */
  25,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_yc_emlrtRTEI = { 783,/* lineNo */
  17,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_ad_emlrtRTEI = { 261,/* lineNo */
  5,                                   /* colNo */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pName */
};

static emlrtRTEInfo c2_bd_emlrtRTEI = { 207,/* lineNo */
  13,                                  /* colNo */
  "kdtreeBuildable",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\kdtreeBuildable.m"/* pName */
};

static emlrtRTEInfo c2_cd_emlrtRTEI = { 208,/* lineNo */
  13,                                  /* colNo */
  "kdtreeBuildable",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\kdtreeBuildable.m"/* pName */
};

static emlrtRTEInfo c2_dd_emlrtRTEI = { 554,/* lineNo */
  30,                                  /* colNo */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pName */
};

static emlrtRTEInfo c2_ed_emlrtRTEI = { 41,/* lineNo */
  17,                                  /* colNo */
  "ComputeMetricBuildable",            /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\ComputeMetricBuildable.m"/* pName */
};

static emlrtRTEInfo c2_fd_emlrtRTEI = { 14,/* lineNo */
  18,                                  /* colNo */
  "isfinite",                          /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\elmat\\isfinite.m"/* pName */
};

static emlrtRTEInfo c2_gd_emlrtRTEI = { 242,/* lineNo */
  15,                                  /* colNo */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pName */
};

static emlrtRTEInfo c2_hd_emlrtRTEI = { 244,/* lineNo */
  15,                                  /* colNo */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pName */
};

static emlrtRTEInfo c2_id_emlrtRTEI = { 176,/* lineNo */
  13,                                  /* colNo */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pName */
};

static emlrtBCInfo c2_emlrtBCI = { -1, /* iFirst */
  -1,                                  /* iLast */
  177,                                 /* lineNo */
  29,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtECInfo c2_emlrtECI = { -1, /* nDims */
  181,                                 /* lineNo */
  1,                                   /* colNo */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pName */
};

static emlrtBCInfo c2_b_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  177,                                 /* lineNo */
  11,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_c_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  1,                                   /* lineNo */
  1,                                   /* colNo */
  "",                                  /* aName */
  "getSubset",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+pc\\getSubset.p",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_d_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  244,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_e_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  20,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_f_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  209,                                 /* lineNo */
  53,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_g_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  204,                                 /* lineNo */
  14,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtDCInfo c2_emlrtDCI = { 207,/* lineNo */
  45,                                  /* colNo */
  "kdtreeBuildable",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\kdtreeBuildable.m",/* pName */
  1                                    /* checkKind */
};

static emlrtDCInfo c2_b_emlrtDCI = { 208,/* lineNo */
  43,                                  /* colNo */
  "kdtreeBuildable",                   /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\+vision\\+internal\\+buildable\\kdtreeBuildable.m",/* pName */
  1                                    /* checkKind */
};

static emlrtBCInfo c2_h_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  559,                                 /* lineNo */
  36,                                  /* colNo */
  "",                                  /* aName */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_i_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  259,                                 /* lineNo */
  6,                                   /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_j_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  237,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_k_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  240,                                 /* lineNo */
  10,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_l_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  261,                                 /* lineNo */
  7,                                   /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_m_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  240,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_n_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  250,                                 /* lineNo */
  14,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_o_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  241,                                 /* lineNo */
  14,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_p_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  241,                                 /* lineNo */
  21,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_q_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  252,                                 /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_r_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  251,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_s_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  251,                                 /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_t_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  243,                                 /* lineNo */
  18,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_u_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  243,                                 /* lineNo */
  25,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_v_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  22,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_w_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  253,                                 /* lineNo */
  15,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_x_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  564,                                 /* lineNo */
  35,                                  /* colNo */
  "",                                  /* aName */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_y_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_ab_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  244,                                 /* lineNo */
  28,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_bb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  242,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_cb_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  244,                                 /* lineNo */
  13,                                  /* colNo */
  "",                                  /* aName */
  "pcsegdist",                         /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m",/* pName */
  0                                    /* checkKind */
};

static emlrtBCInfo c2_db_emlrtBCI = { -1,/* iFirst */
  -1,                                  /* iLast */
  565,                                 /* lineNo */
  33,                                  /* colNo */
  "",                                  /* aName */
  "pointCloudBase",                    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m",/* pName */
  0                                    /* checkKind */
};

static emlrtRSInfo c2_od_emlrtRSI = { 208,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_pd_emlrtRSI = { 209,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_qd_emlrtRSI = { 85,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_rd_emlrtRSI = { 41,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_sd_emlrtRSI = { 40,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_td_emlrtRSI = { 39,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_ud_emlrtRSI = { 599,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_vd_emlrtRSI = { 181,/* lineNo */
  "pcsegdist",                         /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\vision\\vision\\pcsegdist.m"/* pathName */
};

static emlrtRSInfo c2_wd_emlrtRSI = { 83,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static char_T c2_cv[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'b', 'u', 'i', 'l',
  't', 'i', 'n', 's', ':', 'A', 's', 's', 'e', 'r', 't', 'i', 'o', 'n', 'F', 'a',
  'i', 'l', 'e', 'd' };

static char_T c2_cv1[35] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'p', 'o', 'i',
  'n', 't', 'c', 'l', 'o', 'u', 'd', ':', 'a', 'r', 'r', 'a', 'y', 'N', 'o', 't',
  'S', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd' };

static char_T c2_cv2[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
  'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'V', 'e', 'c', 't', 'o', 'r', 'V', 'e',
  'c', 't', 'o', 'r' };

/* Function Declarations */
static void initialize_c2_model(SFc2_modelInstanceStruct *chartInstance);
static void initialize_params_c2_model(SFc2_modelInstanceStruct *chartInstance);
static void mdl_start_c2_model(SFc2_modelInstanceStruct *chartInstance);
static void mdl_terminate_c2_model(SFc2_modelInstanceStruct *chartInstance);
static void mdl_setup_runtime_resources_c2_model(SFc2_modelInstanceStruct
  *chartInstance);
static void mdl_cleanup_runtime_resources_c2_model(SFc2_modelInstanceStruct
  *chartInstance);
static void enable_c2_model(SFc2_modelInstanceStruct *chartInstance);
static void disable_c2_model(SFc2_modelInstanceStruct *chartInstance);
static void sf_gateway_c2_model(SFc2_modelInstanceStruct *chartInstance);
static void ext_mode_exec_c2_model(SFc2_modelInstanceStruct *chartInstance);
static void c2_update_jit_animation_c2_model(SFc2_modelInstanceStruct
  *chartInstance);
static void c2_do_animation_call_c2_model(SFc2_modelInstanceStruct
  *chartInstance);
static const mxArray *get_sim_state_c2_model(SFc2_modelInstanceStruct
  *chartInstance);
static void set_sim_state_c2_model(SFc2_modelInstanceStruct *chartInstance,
  const mxArray *c2_st);
static c2_pointCloud *c2_pointCloud_pointCloud(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud *c2_b_this, real32_T
  c2_varargin_1[216000]);
static void c2_pointCloud_initializePointCloudArray(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud *c2_b_this);
static void c2_pcsegdist(SFc2_modelInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_pointCloud *c2_ptCloud, uint32_T c2_labels[72000]);
static void c2_pointCloudBase_extractValidPointsImpl(SFc2_modelInstanceStruct
  *chartInstance, c2_pointCloud *c2_b_this, boolean_T c2_b_indices[72000]);
static void c2_pcsegdistImpl(SFc2_modelInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_pointCloud *c2_ptCloud, uint32_T c2_labels[72000],
  real32_T *c2_numClusters);
static void c2_pointCloud_removeInvalidPoints(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud *c2_b_this,
  c2_pointCloud_2 *c2_iobj_0, c2_pointCloud_2 **c2_ptCloudOut,
  c2_coder_array_real_T *c2_indicesOut);
static void c2_pointCloud_extractValidPoints(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud *c2_b_this,
  c2_coder_array_real32_T_2D *c2_location, c2_coder_array_uint8_T_2D *c2_color,
  c2_coder_array_real32_T_2D *c2_normals, c2_coder_array_real32_T_2D
  *c2_intensity, c2_coder_array_real32_T_2D *c2_rangeData, boolean_T
  c2_b_indices[72000]);
static void c2_pointCloudBase_subsetImpl(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_pointCloud *c2_b_this, boolean_T c2_b_indices
  [72000], c2_coder_array_real32_T_2D *c2_loc, c2_coder_array_uint8_T_2D *c2_c,
  c2_coder_array_real32_T_2D *c2_nv, c2_coder_array_real32_T_2D *c2_intensity,
  c2_coder_array_real32_T_2D *c2_b_r);
static void c2_getSubset(SFc2_modelInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real32_T c2_location[216000], c2_coder_array_uint8_T_3D
  *c2_color, c2_coder_array_real32_T_3D *c2_normal, c2_coder_array_real32_T_2D
  *c2_intensity, c2_coder_array_real32_T_3D *c2_rangeData, boolean_T
  c2_b_indices[72000], c2_coder_array_real32_T_2D *c2_loc,
  c2_coder_array_uint8_T_2D *c2_c, c2_coder_array_real32_T_2D *c2_nv,
  c2_coder_array_real32_T_2D *c2_intens, c2_coder_array_real32_T_2D *c2_b_r);
static void c2_indexShapeCheck(SFc2_modelInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_matrixSize[2]);
static c2_pointCloud_2 *c2_b_pointCloud_pointCloud(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud_2 *c2_b_this,
  c2_coder_array_real32_T_2D *c2_varargin_1, c2_coder_array_uint8_T_2D
  *c2_varargin_3, c2_coder_array_real32_T_2D *c2_varargin_5,
  c2_coder_array_real32_T_2D *c2_varargin_7);
static c2_pointCloud_2 *c2_pointCloudBase_pointCloudBase
  (SFc2_modelInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_pointCloud_2 *c2_b_this, c2_coder_array_real32_T_2D *c2_varargin_1,
   c2_coder_array_uint8_T_2D *c2_varargin_3, c2_coder_array_real32_T_2D
   *c2_varargin_5, c2_coder_array_real32_T_2D *c2_varargin_7);
static void c2_pointCloudBase_set_Color(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_pointCloud_2 *c2_b_this, c2_coder_array_uint8_T_2D
  *c2_value);
static void c2_check_forloop_overflow_error(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp);
static void c2_pointCloudBase_set_RangeData(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud_2 *c2_b_this,
  c2_coder_array_real32_T_2D *c2_value);
static void c2_b_indexShapeCheck(SFc2_modelInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_matrixSize, int32_T c2_indexSize[2]);
static void c2_pcsegdistApproximateImpl(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_pointCloud_2 *c2_b_pc, c2_coder_array_uint32_T
  *c2_L);
static void c2_c_indexShapeCheck(SFc2_modelInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_matrixSize[2], int32_T c2_indexSize);
static real_T c2_sumColumnB(SFc2_modelInstanceStruct *chartInstance, uint32_T
  c2_b_x);
static real_T c2_b_sumColumnB(SFc2_modelInstanceStruct *chartInstance, uint32_T
  c2_b_x[32]);
static void c2_handle_matlabCodegenDestructor(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud *c2_obj);
static void c2_b_handle_matlabCodegenDestructor(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud_2 *c2_obj);
static void c2_emlrt_marshallIn(SFc2_modelInstanceStruct *chartInstance, const
  mxArray *c2_nullptr, const char_T *c2_identifier, uint32_T c2_b_y[72000]);
static void c2_b_emlrt_marshallIn(SFc2_modelInstanceStruct *chartInstance, const
  mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, uint32_T c2_b_y[72000]);
static void c2_array_uint8_T_3D_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_uint8_T_3D *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T c2_size1, int32_T
  c2_size2);
static void c2_array_real32_T_3D_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_real32_T_3D *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T c2_size1, int32_T
  c2_size2);
static void c2_array_real32_T_2D_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_real32_T_2D *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T c2_size1);
static void c2_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_pointclouds_interna
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1);
static void c2_array_real32_T_3D_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_real32_T_3D *c2_coderArray);
static void c2_b_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_pointclouds_internal_codegen_pc_pointCloudArray *c2_pStruct);
static void c2_array_uint8_T_3D_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_uint8_T_3D *c2_coderArray);
static void c2_array_real32_T_2D_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_real32_T_2D *c2_coderArray);
static void c2_c_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_pointclouds_internal_codegen_pc_pointCloudArray *c2_pStruct);
static void c2_array_real32_T_3D_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_real32_T_3D *c2_coderArray);
static void c2_array_uint8_T_3D_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_uint8_T_3D *c2_coderArray);
static void c2_array_real32_T_2D_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_real32_T_2D *c2_coderArray);
static void c2_array_int32_T_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_int32_T *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0);
static void c2_array_uint32_T_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_uint32_T *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0);
static void c2_array_real_T_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_real_T *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0);
static void c2_array_uint8_T_2D_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_uint8_T_2D *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T c2_size1);
static void c2_array_real32_T_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_real32_T *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0);
static void c2_d_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_pointclouds_internal_codegen_pc_pointCloudArray_1 c2_data[], int32_T
  c2_size[2], const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1);
static void c2_e_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_pointclouds_internal_codegen_pc_pointCloudArray_1
  *c2_pStruct);
static void c2_array_uint8_T_2D_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_uint8_T_2D *c2_coderArray);
static void c2_f_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_pointclouds_internal_codegen_pc_pointCloudArray_1
  *c2_pStruct);
static void c2_array_uint8_T_2D_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_uint8_T_2D *c2_coderArray);
static void c2_g_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_b_pointclouds_inter
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1);
static void c2_array_boolean_T_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_boolean_T *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0);
static void c2_array_boolean_T_2D_SetSize(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_boolean_T_2D
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1);
static void c2_array_int32_T_2D_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_int32_T_2D *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T c2_size1);
static void c2_array_real_T_2D_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_real_T_2D *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T c2_size1);
static void c2_array_pointCloud_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_pointCloud *c2_pStruct);
static void c2_h_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_pointclouds_interna *c2_coderArray);
static void c2_array_pointCloud_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_pointCloud *c2_pStruct);
static void c2_i_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_pointclouds_interna *c2_coderArray);
static void c2_j_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_pointclouds_internal_codegen_pc_pointCloudArray *c2_dst, const
  c2_pointclouds_internal_codegen_pc_pointCloudArray *c2_src, const emlrtRTEInfo
  *c2_srcLocation);
static void c2_array_real32_T_32x2250x3s_Copy(SFc2_modelInstanceStruct
  *chartInstance, real32_T c2_dst[216000], const real32_T c2_src[216000]);
static void c2_array_real32_T_3D_Copy(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_real32_T_3D *c2_dst, const
  c2_coder_array_real32_T_3D *c2_src, const emlrtRTEInfo *c2_srcLocation);
static void c2_array_uint8_T_3D_Copy(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_uint8_T_3D *c2_dst, const
  c2_coder_array_uint8_T_3D *c2_src, const emlrtRTEInfo *c2_srcLocation);
static void c2_array_real32_T_2D_Copy(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_real32_T_2D *c2_dst, const
  c2_coder_array_real32_T_2D *c2_src, const emlrtRTEInfo *c2_srcLocation);
static void c2_array_pointCloud_2_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_pointCloud_2 *c2_pStruct);
static void c2_k_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_b_pointclouds_inter *c2_coderArray);
static void c2_array_uint32_T_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_uint32_T *c2_coderArray);
static void c2_array_real_T_Constructor(SFc2_modelInstanceStruct *chartInstance,
  c2_coder_array_real_T *c2_coderArray);
static void c2_array_int32_T_Constructor(SFc2_modelInstanceStruct *chartInstance,
  c2_coder_array_int32_T *c2_coderArray);
static void c2_array_pointCloud_2_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_pointCloud_2 *c2_pStruct);
static void c2_l_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_b_pointclouds_inter *c2_coderArray);
static void c2_array_uint32_T_Destructor(SFc2_modelInstanceStruct *chartInstance,
  c2_coder_array_uint32_T *c2_coderArray);
static void c2_array_real_T_Destructor(SFc2_modelInstanceStruct *chartInstance,
  c2_coder_array_real_T *c2_coderArray);
static void c2_array_int32_T_Destructor(SFc2_modelInstanceStruct *chartInstance,
  c2_coder_array_int32_T *c2_coderArray);
static void c2_array_real32_T_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_real32_T *c2_coderArray);
static void c2_array_real32_T_Destructor(SFc2_modelInstanceStruct *chartInstance,
  c2_coder_array_real32_T *c2_coderArray);
static void c2_m_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_pointclouds_internal_codegen_pc_pointCloudArray_1 *c2_dst, const
  c2_pointclouds_internal_codegen_pc_pointCloudArray_1 *c2_src, const
  emlrtRTEInfo *c2_srcLocation);
static void c2_array_uint8_T_2D_Copy(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_uint8_T_2D *c2_dst, const
  c2_coder_array_uint8_T_2D *c2_src, const emlrtRTEInfo *c2_srcLocation);
static void c2_n_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_c_pointclouds_inter *c2_pArray);
static void c2_o_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_c_pointclouds_inter *c2_pArray);
static void c2_array_boolean_T_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_boolean_T *c2_coderArray);
static void c2_array_boolean_T_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_boolean_T *c2_coderArray);
static void c2_array_real_T_2D_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_real_T_2D *c2_coderArray);
static void c2_array_boolean_T_2D_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_boolean_T_2D *c2_coderArray);
static void c2_array_int32_T_2D_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_int32_T_2D *c2_coderArray);
static void c2_array_real_T_2D_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_real_T_2D *c2_coderArray);
static void c2_array_boolean_T_2D_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_boolean_T_2D *c2_coderArray);
static void c2_array_int32_T_2D_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_int32_T_2D *c2_coderArray);
static void init_dsm_address_info(SFc2_modelInstanceStruct *chartInstance);
static void init_simulink_io_address(SFc2_modelInstanceStruct *chartInstance);

/* Function Definitions */
static void initialize_c2_model(SFc2_modelInstanceStruct *chartInstance)
{
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  emlrtLicenseCheckR2022a(&c2_st, "EMLRT:runTime:MexFunctionNeedsLicense",
    "video_and_image_blockset", 2);
  sim_mode_is_external(chartInstance->S);
  chartInstance->c2_doneDoubleBufferReInit = false;
  chartInstance->c2_sfEvent = CALL_EVENT;
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void initialize_params_c2_model(SFc2_modelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_start_c2_model(SFc2_modelInstanceStruct *chartInstance)
{
  sim_mode_is_external(chartInstance->S);
}

static void mdl_terminate_c2_model(SFc2_modelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void mdl_setup_runtime_resources_c2_model(SFc2_modelInstanceStruct
  *chartInstance)
{
  static const int32_T c2_postfixPredicateTree[3] = { 0, 1, -2 };

  static const int32_T c2_condTxtEndIdx[2] = { 57, 79 };

  static const int32_T c2_condTxtStartIdx[2] = { 43, 62 };

  static const uint32_T c2_decisionTxtEndIdx = 0U;
  static const uint32_T c2_decisionTxtStartIdx = 0U;
  sfSetAnimationVectors(chartInstance->S, &chartInstance->c2_JITStateAnimation[0],
                        &chartInstance->c2_JITTransitionAnimation[0]);
  covrtCreateStateflowInstanceData(chartInstance->c2_covrtInstance, 1U, 0U, 1U,
    4U);
  covrtChartInitFcn(chartInstance->c2_covrtInstance, 0U, false, false, false);
  covrtStateInitFcn(chartInstance->c2_covrtInstance, 0U, 0U, false, false, false,
                    0U, &c2_decisionTxtStartIdx, &c2_decisionTxtEndIdx);
  covrtTransInitFcn(chartInstance->c2_covrtInstance, 0U, 0, NULL, NULL, 0U, NULL);
  covrtEmlInitFcn(chartInstance->c2_covrtInstance, "", 4U, 0U, 1U, 0U, 1U, 0U,
                  0U, 0U, 0U, 0U, 2U, 1U);
  covrtEmlFcnInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, "c2_model", 0,
                     -1, 696);
  covrtEmlIfInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 40, 80, 108,
                    115, false);
  covrtEmlMCDCInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 43, 80, 2U,
                      0U, &c2_condTxtStartIdx[0], &c2_condTxtEndIdx[0], 3U,
                      &c2_postfixPredicateTree[0], false);
  covrtEmlRelationalInitFcn(chartInstance->c2_covrtInstance, 4U, 0U, 0U, 62, 79,
    -1, 2U);
}

static void mdl_cleanup_runtime_resources_c2_model(SFc2_modelInstanceStruct
  *chartInstance)
{
  covrtDeleteStateflowInstanceData(chartInstance->c2_covrtInstance);
}

static void enable_c2_model(SFc2_modelInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void disable_c2_model(SFc2_modelInstanceStruct *chartInstance)
{
  _sfTime_ = sf_get_time(chartInstance->S);
}

static void sf_gateway_c2_model(SFc2_modelInstanceStruct *chartInstance)
{
  emlrtStack c2_b_st;
  emlrtStack c2_st = { NULL,           /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  const mxArray *c2_b_y = NULL;
  real_T c2_u[2];
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  c2_st.tls = chartInstance->c2_fEmlrtCtx;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_array_pointCloud_Constructor(chartInstance, &chartInstance->c2_pc);
  if (covrtIsSigCovEnabledFcn(chartInstance->c2_covrtInstance, 0U) != 0U) {
    for (c2_i = 0; c2_i < 216000; c2_i++) {
      covrtSigUpdateFcnAssumingCovEnabled(chartInstance->c2_covrtInstance, 0U,
        (real_T)(*chartInstance->c2_b_cloud)[c2_i]);
    }
  }

  _sfTime_ = sf_get_time(chartInstance->S);
  chartInstance->c2_JITTransitionAnimation[0] = 0U;
  chartInstance->c2_sfEvent = CALL_EVENT;
  for (c2_i1 = 0; c2_i1 < 216000; c2_i1++) {
    chartInstance->c2_cloud[c2_i1] = (*chartInstance->c2_b_cloud)[c2_i1];
  }

  emlrtHeapReferenceStackEnterFcnR2012b(&c2_st);
  emlrtPushHeapReferenceStackR2021a(&c2_st, true, &chartInstance->c2_pc, (void *)
    &c2_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  chartInstance->c2_pc.matlabCodegenIsDeleted = true;
  covrtEmlFcnEval(chartInstance->c2_covrtInstance, 4U, 0, 0);
  covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 0, false);
  covrtEmlCondEval(chartInstance->c2_covrtInstance, 4U, 0, 1,
                   covrtRelationalopUpdateFcn(chartInstance->c2_covrtInstance,
    4U, 0U, 0U, 2250.0, 1.0, -1, 2U, 0));
  covrtEmlMcdcEval(chartInstance->c2_covrtInstance, 4U, 0, 0, false);
  covrtEmlIfEval(chartInstance->c2_covrtInstance, 4U, 0, 0, false);
  c2_b_st.site = &c2_emlrtRSI;
  c2_pointCloud_pointCloud(chartInstance, &c2_b_st, &chartInstance->c2_pc,
    chartInstance->c2_cloud);
  c2_b_st.site = &c2_b_emlrtRSI;
  c2_pcsegdist(chartInstance, &c2_b_st, &chartInstance->c2_pc,
               chartInstance->c2_local_seg);
  sf_mex_printf("%s =\\n", "ans");
  for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
    c2_u[c2_i2] = 32.0 + 2218.0 * (real_T)c2_i2;
  }

  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_u, 0, 0U, 1, 0U, 2, 1, 2), false);
  sf_mex_call(&c2_st, NULL, "disp", 0U, 1U, 14, c2_b_y);
  c2_b_st.site = &c2_c_emlrtRSI;
  c2_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
    &chartInstance->c2_pc);
  emlrtHeapReferenceStackLeaveFcnR2012b(&c2_st);
  for (c2_i3 = 0; c2_i3 < 72000; c2_i3++) {
    (*chartInstance->c2_path)[c2_i3] = chartInstance->c2_local_seg[c2_i3];
  }

  if (covrtIsSigCovEnabledFcn(chartInstance->c2_covrtInstance, 1U) != 0U) {
    for (c2_i4 = 0; c2_i4 < 72000; c2_i4++) {
      covrtSigUpdateFcnAssumingCovEnabled(chartInstance->c2_covrtInstance, 1U,
        (real_T)(*chartInstance->c2_path)[c2_i4]);
    }
  }

  c2_array_pointCloud_Destructor(chartInstance, &chartInstance->c2_pc);
}

static void ext_mode_exec_c2_model(SFc2_modelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void c2_update_jit_animation_c2_model(SFc2_modelInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static void c2_do_animation_call_c2_model(SFc2_modelInstanceStruct
  *chartInstance)
{
  (void)chartInstance;
}

static const mxArray *get_sim_state_c2_model(SFc2_modelInstanceStruct
  *chartInstance)
{
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_st = NULL;
  c2_st = NULL;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_createcellmatrix(1, 1), false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", *chartInstance->c2_path, 7, 0U, 1,
    0U, 2, 32, 2250), false);
  sf_mex_setcell(c2_b_y, 0, c2_c_y);
  sf_mex_assign(&c2_st, c2_b_y, false);
  return c2_st;
}

static void set_sim_state_c2_model(SFc2_modelInstanceStruct *chartInstance,
  const mxArray *c2_st)
{
  const mxArray *c2_u;
  int32_T c2_i;
  chartInstance->c2_doneDoubleBufferReInit = true;
  c2_u = sf_mex_dup(c2_st);
  c2_emlrt_marshallIn(chartInstance, sf_mex_dup(sf_mex_getcell(c2_u, 0)), "path",
                      chartInstance->c2_uv);
  for (c2_i = 0; c2_i < 72000; c2_i++) {
    (*chartInstance->c2_path)[c2_i] = chartInstance->c2_uv[c2_i];
  }

  sf_mex_destroy(&c2_u);
  sf_mex_destroy(&c2_st);
}

static c2_pointCloud *c2_pointCloud_pointCloud(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud *c2_b_this, real32_T
  c2_varargin_1[216000])
{
  c2_pointCloud *c2_c_this;
  c2_pointCloud *c2_d_this;
  c2_pointCloud *c2_e_this;
  c2_pointCloud *c2_f_this;
  c2_pointCloud *c2_g_this;
  c2_pointCloud *c2_h_this;
  c2_pointCloud *c2_i_this;
  c2_pointCloud *c2_j_this;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  int32_T c2_i;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_this = c2_b_this;
  c2_c_this->HasKdtreeConstructed = false;
  c2_c_this->HasLocationHandleAllocated = false;
  c2_st.site = &c2_d_emlrtRSI;
  c2_d_this = c2_c_this;
  c2_c_this = c2_d_this;
  c2_b_st.site = &c2_g_emlrtRSI;
  c2_e_this = c2_c_this;
  c2_c_this = c2_e_this;
  for (c2_i = 0; c2_i < 216000; c2_i++) {
    c2_c_this->Location[c2_i] = c2_varargin_1[c2_i];
  }

  c2_b_st.site = &c2_h_emlrtRSI;
  c2_f_this = c2_c_this;
  c2_array_uint8_T_3D_SetSize(chartInstance, &c2_b_st, &c2_f_this->Color,
    &c2_e_emlrtRTEI, 0, 0, 0);
  c2_b_st.site = &c2_i_emlrtRSI;
  c2_g_this = c2_c_this;
  c2_array_real32_T_3D_SetSize(chartInstance, &c2_b_st, &c2_g_this->Normal,
    &c2_f_emlrtRTEI, 0, 0, 0);
  c2_b_st.site = &c2_j_emlrtRSI;
  c2_h_this = c2_c_this;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_b_st, &c2_h_this->Intensity,
    &c2_g_emlrtRTEI, 0, 0);
  c2_b_st.site = &c2_k_emlrtRSI;
  c2_i_this = c2_c_this;
  c2_array_real32_T_3D_SetSize(chartInstance, &c2_b_st, &c2_i_this->RangeData,
    &c2_h_emlrtRTEI, 0, 0, 0);
  c2_st.site = &c2_e_emlrtRSI;
  c2_pointCloud_initializePointCloudArray(chartInstance, &c2_st, c2_c_this);
  c2_st.site = &c2_td_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st,
    &c2_c_this->XLimitsInternal, &c2_j_emlrtRTEI, 0, 0);
  c2_st.site = &c2_sd_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st,
    &c2_c_this->YLimitsInternal, &c2_k_emlrtRTEI, 0, 0);
  c2_st.site = &c2_rd_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st,
    &c2_c_this->ZLimitsInternal, &c2_l_emlrtRTEI, 0, 0);
  c2_st.site = &c2_f_emlrtRSI;
  c2_j_this = c2_c_this;
  c2_j_this->Kdtree = NULL;
  c2_j_this->LocationHandle = NULL;
  c2_c_this->matlabCodegenIsDeleted = false;
  return c2_c_this;
}

static void c2_pointCloud_initializePointCloudArray(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud *c2_b_this)
{
  c2_coder_array_pointclouds_interna c2_data;
  c2_pointCloud *c2_varargin_1;
  emlrtStack c2_st;
  int32_T c2_b_loop_ub;
  int32_T c2_c_loop_ub;
  int32_T c2_d_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_loop_ub;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_o_emlrtRSI;
  c2_varargin_1 = c2_b_this;
  c2_c_array_pointclouds_internal_code(chartInstance, &chartInstance->c2_r);
  for (c2_i = 0; c2_i < 216000; c2_i++) {
    chartInstance->c2_r.Location[c2_i] = c2_varargin_1->Location[c2_i];
  }

  c2_array_real32_T_3D_SetSize(chartInstance, &c2_st,
    &chartInstance->c2_r.Normal, &c2_m_emlrtRTEI, c2_varargin_1->Normal.size[0],
    c2_varargin_1->Normal.size[1], c2_varargin_1->Normal.size[2]);
  c2_loop_ub = c2_varargin_1->Normal.size[0] * c2_varargin_1->Normal.size[1] *
    c2_varargin_1->Normal.size[2] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    chartInstance->c2_r.Normal.vector.data[c2_i1] =
      c2_varargin_1->Normal.vector.data[c2_i1];
  }

  c2_array_uint8_T_3D_SetSize(chartInstance, &c2_st, &chartInstance->c2_r.Color,
    &c2_n_emlrtRTEI, c2_varargin_1->Color.size[0], c2_varargin_1->Color.size[1],
    c2_varargin_1->Color.size[2]);
  c2_b_loop_ub = c2_varargin_1->Color.size[0] * c2_varargin_1->Color.size[1] *
    c2_varargin_1->Color.size[2] - 1;
  for (c2_i2 = 0; c2_i2 <= c2_b_loop_ub; c2_i2++) {
    chartInstance->c2_r.Color.vector.data[c2_i2] =
      c2_varargin_1->Color.vector.data[c2_i2];
  }

  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st,
    &chartInstance->c2_r.Intensity, &c2_o_emlrtRTEI,
    c2_varargin_1->Intensity.size[0], c2_varargin_1->Intensity.size[1]);
  c2_c_loop_ub = c2_varargin_1->Intensity.size[0] *
    c2_varargin_1->Intensity.size[1] - 1;
  for (c2_i3 = 0; c2_i3 <= c2_c_loop_ub; c2_i3++) {
    chartInstance->c2_r.Intensity.vector.data[c2_i3] =
      c2_varargin_1->Intensity.vector.data[c2_i3];
  }

  c2_h_array_pointclouds_internal_code(chartInstance, &c2_data);
  c2_st.site = &c2_o_emlrtRSI;
  c2_array_pointclouds_internal_code(chartInstance, &c2_st, &c2_data,
    &c2_p_emlrtRTEI, 1, 1);
  c2_st.site = &c2_o_emlrtRSI;
  c2_j_array_pointclouds_internal_code(chartInstance, &c2_st,
    &c2_data.vector.data[0], &chartInstance->c2_r, &c2_p_emlrtRTEI);
  c2_b_array_pointclouds_internal_code(chartInstance, &chartInstance->c2_r);
  c2_st.site = &c2_ud_emlrtRSI;
  c2_array_pointclouds_internal_code(chartInstance, &c2_st,
    &c2_b_this->PointCloudArrayData, &c2_q_emlrtRTEI, 1, 1);
  c2_d_loop_ub = 0;
  for (c2_i4 = 0; c2_i4 <= c2_d_loop_ub; c2_i4++) {
    c2_st.site = &c2_ud_emlrtRSI;
    c2_j_array_pointclouds_internal_code(chartInstance, &c2_st,
      &c2_b_this->PointCloudArrayData.vector.data[c2_i4],
      &c2_data.vector.data[c2_i4], &c2_q_emlrtRTEI);
  }

  c2_i_array_pointclouds_internal_code(chartInstance, &c2_data);
}

static void c2_pcsegdist(SFc2_modelInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_pointCloud *c2_ptCloud, uint32_T c2_labels[72000])
{
  static char_T c2_b_cv1[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'S', 'c', 'a', 'l', 'a', 'r' };

  static char_T c2_b_cv[31] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'c', 's',
    'e', 'g', 'd', 'i', 's', 't', ':', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'S', 'c', 'a', 'l', 'a', 'r' };

  static char_T c2_b_cv2[7] = { 'p', 't', 'C', 'l', 'o', 'u', 'd' };

  c2_pointCloud *c2_a;
  c2_pointCloud *c2_b_a;
  c2_pointCloud *c2_b_ptCloud;
  c2_pointCloud *c2_b_this;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  real32_T c2_numClusters;
  boolean_T c2_n;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_st.site = &c2_p_emlrtRSI;
  c2_b_ptCloud = c2_ptCloud;
  c2_b_st.site = &c2_r_emlrtRSI;
  c2_a = c2_b_ptCloud;
  c2_c_st.site = &c2_s_emlrtRSI;
  c2_b_a = c2_a;
  c2_b_this = c2_b_a;
  c2_n = (c2_b_this->PointCloudArrayData.size[0] *
          c2_b_this->PointCloudArrayData.size[1] == 1);
  if (!c2_n) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 31),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1, 46),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2, 1, 7),
                  false);
    sf_mex_call(&c2_c_st, &c2_d_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_c_st, NULL, "message", 1U, 2U, 14, c2_c_y, 14, c2_d_y)));
  }

  c2_st.site = &c2_q_emlrtRSI;
  c2_pcsegdistImpl(chartInstance, &c2_st, c2_ptCloud, c2_labels, &c2_numClusters);
}

static void c2_pointCloudBase_extractValidPointsImpl(SFc2_modelInstanceStruct
  *chartInstance, c2_pointCloud *c2_b_this, boolean_T c2_b_indices[72000])
{
  int32_T c2_a;
  int32_T c2_b_a;
  int32_T c2_b_b;
  int32_T c2_b_j;
  int32_T c2_c_j;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_ix;
  int32_T c2_j;
  int32_T c2_k;
  int32_T c2_xoffset;
  for (c2_i = 0; c2_i < 216000; c2_i++) {
    chartInstance->c2_x[c2_i] = c2_b_this->Location[c2_i];
  }

  for (c2_i1 = 0; c2_i1 < 216000; c2_i1++) {
    chartInstance->c2_tf[c2_i1] = muSingleScalarIsInf(chartInstance->c2_x[c2_i1]);
  }

  for (c2_i2 = 0; c2_i2 < 216000; c2_i2++) {
    chartInstance->c2_tf[c2_i2] = !chartInstance->c2_tf[c2_i2];
  }

  for (c2_i3 = 0; c2_i3 < 216000; c2_i3++) {
    chartInstance->c2_b[c2_i3] = muSingleScalarIsNaN(chartInstance->c2_x[c2_i3]);
  }

  for (c2_i4 = 0; c2_i4 < 216000; c2_i4++) {
    chartInstance->c2_b[c2_i4] = !chartInstance->c2_b[c2_i4];
  }

  for (c2_i5 = 0; c2_i5 < 216000; c2_i5++) {
    chartInstance->c2_tf[c2_i5] = (chartInstance->c2_tf[c2_i5] &&
      chartInstance->c2_b[c2_i5]);
  }

  for (c2_j = 0; c2_j < 72000; c2_j++) {
    c2_b_j = c2_j;
    chartInstance->c2_nz[c2_b_j] = (int32_T)chartInstance->c2_tf[c2_b_j];
  }

  for (c2_k = 0; c2_k < 2; c2_k++) {
    c2_xoffset = (c2_k + 1) * 72000;
    for (c2_c_j = 0; c2_c_j < 72000; c2_c_j++) {
      c2_b_j = c2_c_j;
      c2_ix = c2_xoffset + c2_b_j;
      c2_a = chartInstance->c2_nz[c2_b_j];
      c2_b_b = (int32_T)chartInstance->c2_tf[c2_ix];
      c2_b_a = c2_a;
      c2_b_a += (c2_b_b != 0);
      chartInstance->c2_nz[c2_b_j] = c2_b_a;
    }
  }

  for (c2_i6 = 0; c2_i6 < 72000; c2_i6++) {
    chartInstance->c2_y[c2_i6] = (real_T)chartInstance->c2_nz[c2_i6];
  }

  for (c2_i7 = 0; c2_i7 < 72000; c2_i7++) {
    c2_b_indices[c2_i7] = (chartInstance->c2_y[c2_i7] == 3.0);
  }
}

static void c2_pcsegdistImpl(SFc2_modelInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, c2_pointCloud *c2_ptCloud, uint32_T c2_labels[72000],
  real32_T *c2_numClusters)
{
  c2_coder_array_int32_T c2_b_r;
  c2_coder_array_int32_T c2_idx;
  c2_coder_array_int32_T c2_iwork;
  c2_coder_array_real_T c2_validIndices;
  c2_coder_array_uint32_T c2_L;
  c2_coder_array_uint32_T c2_uniqueLabels;
  c2_pointCloud_2 c2_b_pc;
  c2_pointCloud_2 *c2_b_this;
  c2_pointCloud_2 *c2_c_pc;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  real_T c2_dv[2];
  real_T c2_count;
  real_T c2_maxnb;
  int32_T c2_iv1[2];
  int32_T c2_iv[1];
  int32_T c2_a;
  int32_T c2_b_a;
  int32_T c2_b_b;
  int32_T c2_b_c;
  int32_T c2_b_i;
  int32_T c2_b_i2;
  int32_T c2_b_idx1;
  int32_T c2_b_idx2;
  int32_T c2_b_j;
  int32_T c2_b_k;
  int32_T c2_b_loop_ub;
  int32_T c2_b_n;
  int32_T c2_b_nb;
  int32_T c2_b_p;
  int32_T c2_c;
  int32_T c2_c_a;
  int32_T c2_c_b;
  int32_T c2_c_c;
  int32_T c2_c_i;
  int32_T c2_c_j;
  int32_T c2_c_k;
  int32_T c2_c_loop_ub;
  int32_T c2_d_b;
  int32_T c2_d_k;
  int32_T c2_e_b;
  int32_T c2_e_k;
  int32_T c2_end;
  int32_T c2_f_a;
  int32_T c2_f_b;
  int32_T c2_f_k;
  int32_T c2_g_a;
  int32_T c2_g_b;
  int32_T c2_h_a;
  int32_T c2_h_b;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_a;
  int32_T c2_idx1;
  int32_T c2_idx2;
  int32_T c2_j;
  int32_T c2_j_a;
  int32_T c2_k;
  int32_T c2_kEnd;
  int32_T c2_k_a;
  int32_T c2_k_b;
  int32_T c2_khi;
  int32_T c2_l_a;
  int32_T c2_l_b;
  int32_T c2_len;
  int32_T c2_loop_ub;
  int32_T c2_m_b;
  int32_T c2_n;
  int32_T c2_nFinite;
  int32_T c2_nInf;
  int32_T c2_nNaN;
  int32_T c2_n_b;
  int32_T c2_na;
  int32_T c2_nb;
  int32_T c2_np1;
  int32_T c2_o_a;
  int32_T c2_o_b;
  int32_T c2_pEnd;
  int32_T c2_p_a;
  int32_T c2_p_b;
  int32_T c2_q;
  int32_T c2_qEnd;
  int32_T c2_q_b;
  int32_T c2_r_b;
  int32_T c2_v_b;
  int32_T c2_w_b;
  int32_T c2_x_b;
  real32_T c2_f;
  uint32_T c2_b_x;
  uint32_T c2_d_a;
  uint32_T c2_e_a;
  uint32_T c2_i_b;
  uint32_T c2_j_b;
  uint32_T c2_m_a;
  uint32_T c2_n_a;
  uint32_T c2_s_b;
  uint32_T c2_t_b;
  uint32_T c2_u;
  boolean_T c2_b_overflow;
  boolean_T c2_c_overflow;
  boolean_T c2_c_p;
  boolean_T c2_d_overflow;
  boolean_T c2_e_overflow;
  boolean_T c2_f_overflow;
  boolean_T c2_overflow;
  boolean_T c2_p;
  boolean_T c2_u_b;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)c2_sp);
  c2_array_pointCloud_2_Constructor(chartInstance, &c2_b_pc);
  c2_array_uint32_T_Constructor(chartInstance, &c2_L);
  c2_array_uint32_T_Constructor(chartInstance, &c2_uniqueLabels);
  c2_array_real_T_Constructor(chartInstance, &c2_validIndices);
  c2_array_int32_T_Constructor(chartInstance, &c2_b_r);
  c2_array_int32_T_Constructor(chartInstance, &c2_idx);
  c2_array_int32_T_Constructor(chartInstance, &c2_iwork);
  emlrtPushHeapReferenceStackR2021a((void *)c2_sp, true, &c2_b_pc, (void *)
    &c2_b_handle_matlabCodegenDestructor, chartInstance, NULL, NULL);
  c2_b_pc.matlabCodegenIsDeleted = true;
  memset(&c2_labels[0], 0, 72000U * sizeof(uint32_T));
  c2_st.site = &c2_ab_emlrtRSI;
  c2_pointCloud_removeInvalidPoints(chartInstance, &c2_st, c2_ptCloud, &c2_b_pc,
    &c2_c_pc, &c2_validIndices);
  c2_st.site = &c2_v_emlrtRSI;
  c2_b_this = &c2_b_pc;
  c2_count = (real_T)c2_b_this->Location.size[0];
  if (c2_count == 0.0) {
    *c2_numClusters = 0.0F;
  } else {
    c2_st.site = &c2_w_emlrtRSI;
    c2_pcsegdistApproximateImpl(chartInstance, &c2_st, &c2_b_pc, &c2_L);
    c2_st.site = &c2_x_emlrtRSI;
    c2_b_st.site = &c2_bd_emlrtRSI;
    c2_na = c2_L.size[0];
    c2_maxnb = (real_T)c2_L.size[0];
    c2_c_st.site = &c2_cd_emlrtRSI;
    c2_n = c2_L.size[0];
    c2_dv[0] = (real_T)c2_L.size[0];
    c2_array_int32_T_SetSize(chartInstance, &c2_c_st, &c2_idx, &c2_r_emlrtRTEI,
      (int32_T)c2_dv[0]);
    c2_loop_ub = (int32_T)c2_dv[0] - 1;
    for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
      c2_idx.vector.data[c2_i] = 0;
    }

    if (c2_L.size[0] != 0) {
      c2_d_st.site = &c2_id_emlrtRSI;
      c2_b_n = c2_n;
      c2_len = c2_idx.size[0];
      c2_array_int32_T_SetSize(chartInstance, &c2_d_st, &c2_iwork,
        &c2_s_emlrtRTEI, c2_len);
      c2_iv[0] = c2_iwork.size[0];
      c2_array_int32_T_SetSize(chartInstance, &c2_d_st, &c2_iwork,
        &c2_t_emlrtRTEI, c2_iv[0]);
      c2_np1 = c2_b_n + 1;
      c2_i1 = c2_b_n - 1;
      c2_e_st.site = &c2_jd_emlrtRSI;
      c2_d_b = c2_i1;
      c2_e_b = c2_d_b;
      if (c2_e_b < 1) {
        c2_b_overflow = false;
      } else {
        c2_b_overflow = (c2_e_b > 2147483645);
      }

      if (c2_b_overflow) {
        c2_f_st.site = &c2_rb_emlrtRSI;
        c2_check_forloop_overflow_error(chartInstance, &c2_f_st);
      }

      for (c2_c_k = 1; c2_c_k <= c2_i1; c2_c_k += 2) {
        c2_idx1 = c2_c_k - 1;
        c2_idx2 = c2_c_k;
        c2_d_a = c2_L.vector.data[c2_idx1];
        c2_i_b = c2_L.vector.data[c2_idx2];
        c2_e_a = c2_d_a;
        c2_j_b = c2_i_b;
        c2_p = (c2_e_a <= c2_j_b);
        if (c2_p) {
          c2_idx.vector.data[c2_c_k - 1] = c2_c_k;
          c2_idx.vector.data[c2_c_k] = c2_c_k + 1;
        } else {
          c2_idx.vector.data[c2_c_k - 1] = c2_c_k + 1;
          c2_idx.vector.data[c2_c_k] = c2_c_k;
        }
      }

      if ((c2_b_n & 1) != 0) {
        c2_idx.vector.data[c2_b_n - 1] = c2_b_n;
      }

      c2_b_i = 2;
      while (c2_b_i < c2_b_n) {
        c2_g_a = c2_b_i;
        c2_i2 = c2_g_a << 1;
        c2_j = 1;
        for (c2_pEnd = 1 + c2_b_i; c2_pEnd < c2_np1; c2_pEnd = c2_qEnd + c2_b_i)
        {
          c2_b_p = c2_j - 1;
          c2_q = c2_pEnd - 1;
          c2_qEnd = c2_j + c2_i2;
          if (c2_qEnd > c2_np1) {
            c2_qEnd = c2_np1;
          }

          c2_d_k = 0;
          c2_kEnd = c2_qEnd - c2_j;
          while (c2_d_k + 1 <= c2_kEnd) {
            c2_b_idx1 = c2_idx.vector.data[c2_b_p] - 1;
            c2_b_idx2 = c2_idx.vector.data[c2_q] - 1;
            c2_m_a = c2_L.vector.data[c2_b_idx1];
            c2_s_b = c2_L.vector.data[c2_b_idx2];
            c2_n_a = c2_m_a;
            c2_t_b = c2_s_b;
            c2_c_p = (c2_n_a <= c2_t_b);
            if (c2_c_p) {
              c2_iwork.vector.data[c2_d_k] = c2_idx.vector.data[c2_b_p];
              c2_b_p++;
              if (c2_b_p + 1 == c2_pEnd) {
                while (c2_q + 1 < c2_qEnd) {
                  c2_d_k++;
                  c2_iwork.vector.data[c2_d_k] = c2_idx.vector.data[c2_q];
                  c2_q++;
                }
              }
            } else {
              c2_iwork.vector.data[c2_d_k] = c2_idx.vector.data[c2_q];
              c2_q++;
              if (c2_q + 1 == c2_qEnd) {
                while (c2_b_p + 1 < c2_pEnd) {
                  c2_d_k++;
                  c2_iwork.vector.data[c2_d_k] = c2_idx.vector.data[c2_b_p];
                  c2_b_p++;
                }
              }
            }

            c2_d_k++;
          }

          c2_b_p = c2_j - 2;
          c2_e_st.site = &c2_kd_emlrtRSI;
          c2_q_b = c2_kEnd;
          c2_r_b = c2_q_b;
          if (c2_r_b < 1) {
            c2_e_overflow = false;
          } else {
            c2_e_overflow = (c2_r_b > 2147483646);
          }

          if (c2_e_overflow) {
            c2_f_st.site = &c2_rb_emlrtRSI;
            c2_check_forloop_overflow_error(chartInstance, &c2_f_st);
          }

          for (c2_e_k = 0; c2_e_k < c2_kEnd; c2_e_k++) {
            c2_d_k = c2_e_k;
            c2_idx.vector.data[(c2_b_p + c2_d_k) + 1] =
              c2_iwork.vector.data[c2_d_k];
          }

          c2_j = c2_qEnd;
        }

        c2_b_i = c2_i2;
      }
    }

    c2_dv[0] = (real_T)c2_L.size[0];
    c2_array_uint32_T_SetSize(chartInstance, &c2_b_st, &c2_uniqueLabels,
      &c2_u_emlrtRTEI, (int32_T)c2_dv[0]);
    c2_c_st.site = &c2_dd_emlrtRSI;
    c2_b_b = c2_na;
    c2_c_b = c2_b_b;
    if (c2_c_b < 1) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_c_b > 2147483646);
    }

    if (c2_overflow) {
      c2_d_st.site = &c2_rb_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
    }

    for (c2_k = 0; c2_k < c2_na; c2_k++) {
      c2_b_k = c2_k;
      c2_uniqueLabels.vector.data[c2_b_k] =
        c2_L.vector.data[c2_idx.vector.data[c2_b_k] - 1];
    }

    c2_nb = c2_na;
    c2_a = c2_nb;
    c2_f_b = c2_nb;
    c2_nNaN = c2_a - c2_f_b;
    c2_b_a = c2_nb;
    c2_g_b = c2_nb;
    c2_c = c2_b_a - c2_g_b;
    c2_c_a = c2_c;
    c2_h_b = c2_nNaN;
    c2_nInf = c2_c_a - c2_h_b;
    c2_f_a = c2_nb;
    c2_nFinite = c2_f_a;
    c2_b_nb = 0;
    c2_k_b = c2_nFinite;
    c2_khi = c2_k_b;
    c2_b_k = 0;
    while (c2_b_k + 1 <= c2_khi) {
      c2_b_x = c2_uniqueLabels.vector.data[c2_b_k];
      do {
        c2_j_a = c2_b_k + 1;
        c2_b_k = c2_j_a;
      } while (!((c2_b_k + 1 > c2_khi) || (c2_uniqueLabels.vector.data[c2_b_k]
                 != c2_b_x)));

      c2_l_a = c2_b_nb + 1;
      c2_b_nb = c2_l_a;
      c2_uniqueLabels.vector.data[c2_b_nb - 1] = c2_b_x;
    }

    if (c2_nInf > 0) {
      c2_h_a = c2_b_nb + 1;
      c2_b_nb = c2_h_a;
      c2_k_a = c2_khi + 1;
      c2_b_c = c2_k_a - 1;
      c2_uniqueLabels.vector.data[c2_b_nb - 1] =
        c2_uniqueLabels.vector.data[c2_b_c];
      c2_c_st.site = &c2_ed_emlrtRSI;
      c2_o_b = c2_nInf;
      c2_p_b = c2_o_b;
      if (c2_p_b < 1) {
        c2_d_overflow = false;
      } else {
        c2_d_overflow = (c2_p_b > 2147483646);
      }

      if (c2_d_overflow) {
        c2_d_st.site = &c2_rb_emlrtRSI;
        c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
      }
    }

    c2_i_a = c2_khi;
    c2_l_b = c2_nInf;
    c2_b_k = c2_i_a + c2_l_b;
    c2_c_st.site = &c2_fd_emlrtRSI;
    c2_m_b = c2_nNaN;
    c2_n_b = c2_m_b;
    if (c2_n_b < 1) {
      c2_c_overflow = false;
    } else {
      c2_c_overflow = (c2_n_b > 2147483646);
    }

    if (c2_c_overflow) {
      c2_d_st.site = &c2_rb_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
    }

    for (c2_b_j = 0; c2_b_j < c2_nNaN; c2_b_j++) {
      c2_c_j = c2_b_j;
      c2_o_a = c2_b_nb + 1;
      c2_b_nb = c2_o_a;
      c2_p_a = c2_b_k;
      c2_v_b = c2_c_j + 1;
      c2_c_c = (c2_p_a + c2_v_b) - 1;
      c2_uniqueLabels.vector.data[c2_b_nb - 1] =
        c2_uniqueLabels.vector.data[c2_c_c];
    }

    if (!((real_T)c2_b_nb <= c2_maxnb)) {
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1, 0U, 2, 1, 30),
                    false);
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1, 0U, 2, 1, 30),
                    false);
      sf_mex_call(&c2_b_st, &c2_v_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
    }

    c2_u_b = (c2_b_nb < 1);
    if (c2_u_b) {
      c2_b_i2 = 0;
    } else {
      c2_b_i2 = c2_b_nb;
    }

    c2_iv1[0] = 1;
    c2_iv1[1] = c2_b_i2;
    c2_c_st.site = &c2_gd_emlrtRSI;
    c2_b_indexShapeCheck(chartInstance, &c2_c_st, c2_uniqueLabels.size[0],
                         c2_iv1);
    c2_array_uint32_T_SetSize(chartInstance, &c2_b_st, &c2_uniqueLabels,
      &c2_v_emlrtRTEI, c2_b_i2);
    c2_c_st.site = &c2_hd_emlrtRSI;
    c2_w_b = c2_b_nb;
    c2_x_b = c2_w_b;
    if (c2_x_b < 1) {
      c2_f_overflow = false;
    } else {
      c2_f_overflow = (c2_x_b > 2147483646);
    }

    if (c2_f_overflow) {
      c2_d_st.site = &c2_rb_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
    }

    *c2_numClusters = (real32_T)c2_uniqueLabels.size[0];
    c2_i3 = (int32_T)*c2_numClusters;
    emlrtForLoopVectorCheckR2021a(1.0, 1.0, (real_T)*c2_numClusters,
      mxSINGLE_CLASS, c2_i3, &c2_id_emlrtRTEI, (emlrtConstCTX)c2_sp);
    for (c2_f_k = 0; c2_f_k < c2_i3; c2_f_k++) {
      c2_i4 = c2_uniqueLabels.size[0];
      c2_i5 = (int32_T)((real32_T)c2_f_k + 1.0F);
      if ((c2_i5 < 1) || (c2_i5 > c2_i4)) {
        emlrtDynamicBoundsCheckR2012b(c2_i5, 1, c2_i4, &c2_emlrtBCI,
          (emlrtConstCTX)c2_sp);
      }

      c2_end = c2_L.size[0];
      for (c2_c_i = 0; c2_c_i < c2_end; c2_c_i++) {
        if (c2_L.vector.data[c2_c_i] == c2_uniqueLabels.vector.data[(int32_T)
            ((real32_T)c2_f_k + 1.0F) - 1]) {
          c2_i9 = c2_L.size[0] - 1;
          if ((c2_c_i < 0) || (c2_c_i > c2_i9)) {
            emlrtDynamicBoundsCheckR2012b(c2_c_i, 0, c2_i9, &c2_b_emlrtBCI,
              (emlrtConstCTX)c2_sp);
          }

          c2_f = muSingleScalarRound((real32_T)c2_f_k + 1.0F);
          if (c2_f < 4.2949673E+9F) {
            if (c2_f >= 0.0F) {
              c2_u = (uint32_T)c2_f;
            } else {
              c2_u = 0U;
            }
          } else if (c2_f >= 4.2949673E+9F) {
            c2_u = MAX_uint32_T;
          } else {
            c2_u = 0U;
          }

          c2_L.vector.data[c2_c_i] = c2_u;
        }
      }
    }

    c2_st.site = &c2_vd_emlrtRSI;
    c2_array_int32_T_SetSize(chartInstance, &c2_st, &c2_b_r, &c2_w_emlrtRTEI,
      c2_validIndices.size[0]);
    c2_b_loop_ub = c2_validIndices.size[0] - 1;
    for (c2_i6 = 0; c2_i6 <= c2_b_loop_ub; c2_i6++) {
      c2_b_r.vector.data[c2_i6] = (int32_T)c2_validIndices.vector.data[c2_i6];
    }

    c2_i7 = c2_b_r.size[0];
    c2_i8 = c2_L.size[0];
    if (c2_i7 != c2_i8) {
      emlrtSubAssignSizeCheck1dR2017a(c2_i7, c2_i8, &c2_emlrtECI, (emlrtConstCTX)
        c2_sp);
    }

    c2_c_loop_ub = c2_L.size[0] - 1;
    for (c2_i10 = 0; c2_i10 <= c2_c_loop_ub; c2_i10++) {
      c2_labels[c2_b_r.vector.data[c2_i10] - 1] = c2_L.vector.data[c2_i10];
    }
  }

  c2_st.site = &c2_y_emlrtRSI;
  c2_b_handle_matlabCodegenDestructor(chartInstance, &c2_st, &c2_b_pc);
  c2_array_int32_T_Destructor(chartInstance, &c2_iwork);
  c2_array_int32_T_Destructor(chartInstance, &c2_idx);
  c2_array_int32_T_Destructor(chartInstance, &c2_b_r);
  c2_array_real_T_Destructor(chartInstance, &c2_validIndices);
  c2_array_uint32_T_Destructor(chartInstance, &c2_uniqueLabels);
  c2_array_uint32_T_Destructor(chartInstance, &c2_L);
  c2_array_pointCloud_2_Destructor(chartInstance, &c2_b_pc);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)c2_sp);
}

static void c2_pointCloud_removeInvalidPoints(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud *c2_b_this,
  c2_pointCloud_2 *c2_iobj_0, c2_pointCloud_2 **c2_ptCloudOut,
  c2_coder_array_real_T *c2_indicesOut)
{
  c2_coder_array_int32_T c2_ii;
  c2_coder_array_real32_T_2D c2_intensity;
  c2_coder_array_real32_T_2D c2_location;
  c2_coder_array_real32_T_2D c2_normals;
  c2_coder_array_real32_T_2D c2_rangeData;
  c2_coder_array_uint8_T_2D c2_color;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  int32_T c2_iv[2];
  int32_T c2_b_ii;
  int32_T c2_c_ii;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_idx;
  int32_T c2_loop_ub;
  boolean_T c2_b_b;
  boolean_T c2_exitg1;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_location);
  c2_array_uint8_T_2D_Constructor(chartInstance, &c2_color);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_normals);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_intensity);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_rangeData);
  c2_st.site = &c2_bb_emlrtRSI;
  c2_pointCloud_extractValidPoints(chartInstance, &c2_st, c2_b_this,
    &c2_location, &c2_color, &c2_normals, &c2_intensity, &c2_rangeData,
    chartInstance->c2_indices);
  c2_st.site = &c2_cb_emlrtRSI;
  *c2_ptCloudOut = c2_b_pointCloud_pointCloud(chartInstance, &c2_st, c2_iobj_0,
    &c2_location, &c2_color, &c2_normals, &c2_intensity);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_intensity);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_normals);
  c2_array_uint8_T_2D_Destructor(chartInstance, &c2_color);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_location);
  c2_st.site = &c2_db_emlrtRSI;
  c2_pointCloudBase_set_RangeData(chartInstance, &c2_st, *c2_ptCloudOut,
    &c2_rangeData);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_rangeData);
  c2_st.site = &c2_eb_emlrtRSI;
  c2_b_st.site = &c2_tb_emlrtRSI;
  c2_c_st.site = &c2_ub_emlrtRSI;
  c2_idx = 0;
  c2_array_int32_T_Constructor(chartInstance, &c2_ii);
  c2_array_int32_T_SetSize(chartInstance, &c2_c_st, &c2_ii, &c2_x_emlrtRTEI,
    72000);
  c2_b_ii = 1;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_b_ii - 1 < 72000)) {
    c2_c_ii = c2_b_ii;
    if (chartInstance->c2_indices[c2_c_ii - 1]) {
      c2_idx++;
      c2_ii.vector.data[c2_idx - 1] = c2_c_ii;
      if (c2_idx >= 72000) {
        c2_exitg1 = true;
      } else {
        c2_b_ii++;
      }
    } else {
      c2_b_ii++;
    }
  }

  c2_b_b = (c2_idx < 1);
  if (c2_b_b) {
    c2_i = 0;
  } else {
    c2_i = c2_idx;
  }

  c2_iv[0] = 1;
  c2_iv[1] = c2_i;
  c2_d_st.site = &c2_vb_emlrtRSI;
  c2_b_indexShapeCheck(chartInstance, &c2_d_st, 72000, c2_iv);
  c2_array_int32_T_SetSize(chartInstance, &c2_c_st, &c2_ii, &c2_y_emlrtRTEI,
    c2_i);
  c2_array_real_T_SetSize(chartInstance, &c2_st, c2_indicesOut, &c2_ab_emlrtRTEI,
    c2_ii.size[0]);
  c2_loop_ub = c2_ii.size[0] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_loop_ub; c2_i1++) {
    c2_indicesOut->vector.data[c2_i1] = (real_T)c2_ii.vector.data[c2_i1];
  }

  c2_array_int32_T_Destructor(chartInstance, &c2_ii);
}

static void c2_pointCloud_extractValidPoints(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud *c2_b_this,
  c2_coder_array_real32_T_2D *c2_location, c2_coder_array_uint8_T_2D *c2_color,
  c2_coder_array_real32_T_2D *c2_normals, c2_coder_array_real32_T_2D
  *c2_intensity, c2_coder_array_real32_T_2D *c2_rangeData, boolean_T
  c2_b_indices[72000])
{
  static char_T c2_b_cv[19] = { 'r', 'e', 'm', 'o', 'v', 'e', 'I', 'n', 'v', 'a',
    'l', 'i', 'd', 'P', 'o', 'i', 'n', 't', 's' };

  c2_pointCloud *c2_c_this;
  c2_pointCloud *c2_d_this;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  int32_T c2_i;
  int32_T c2_i1;
  boolean_T c2_c_indices[72000];
  boolean_T c2_n;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_st.site = &c2_fb_emlrtRSI;
  c2_c_this = c2_b_this;
  c2_d_this = c2_c_this;
  c2_n = (c2_d_this->PointCloudArrayData.size[0] *
          c2_d_this->PointCloudArrayData.size[1] == 1);
  if (!c2_n) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv1, 10, 0U, 1, 0U, 2, 1, 35),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv1, 10, 0U, 1, 0U, 2, 1, 35),
                  false);
    c2_d_y = NULL;
    sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 19),
                  false);
    sf_mex_call(&c2_st, &c2_e_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 2U, 14, c2_c_y, 14, c2_d_y)));
  }

  c2_st.site = &c2_gb_emlrtRSI;
  c2_pointCloudBase_extractValidPointsImpl(chartInstance, c2_b_this,
    chartInstance->c2_bv);
  for (c2_i = 0; c2_i < 72000; c2_i++) {
    c2_b_indices[c2_i] = chartInstance->c2_bv[c2_i];
  }

  c2_st.site = &c2_hb_emlrtRSI;
  for (c2_i1 = 0; c2_i1 < 72000; c2_i1++) {
    c2_c_indices[c2_i1] = c2_b_indices[c2_i1];
  }

  c2_pointCloudBase_subsetImpl(chartInstance, &c2_st, c2_b_this, c2_c_indices,
    c2_location, c2_color, c2_normals, c2_intensity, c2_rangeData);
}

static void c2_pointCloudBase_subsetImpl(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_pointCloud *c2_b_this, boolean_T c2_b_indices
  [72000], c2_coder_array_real32_T_2D *c2_loc, c2_coder_array_uint8_T_2D *c2_c,
  c2_coder_array_real32_T_2D *c2_nv, c2_coder_array_real32_T_2D *c2_intensity,
  c2_coder_array_real32_T_2D *c2_b_r)
{
  c2_coder_array_real32_T_2D c2_b_nv;
  c2_coder_array_real32_T_2D c2_c_r;
  c2_coder_array_real32_T_2D c2_e_this;
  c2_coder_array_real32_T_3D c2_d_this;
  c2_coder_array_real32_T_3D c2_f_this;
  c2_coder_array_uint8_T_2D c2_b_c;
  c2_coder_array_uint8_T_3D c2_c_this;
  emlrtStack c2_st;
  int32_T c2_b_loop_ub;
  int32_T c2_c_loop_ub;
  int32_T c2_d_loop_ub;
  int32_T c2_e_loop_ub;
  int32_T c2_f_loop_ub;
  int32_T c2_g_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_loop_ub;
  boolean_T c2_c_indices[72000];
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_array_uint8_T_3D_Constructor(chartInstance, &c2_c_this);
  c2_st.site = &c2_od_emlrtRSI;
  c2_array_uint8_T_3D_SetSize(chartInstance, &c2_st, &c2_c_this,
    &c2_bb_emlrtRTEI, c2_b_this->Color.size[0], c2_b_this->Color.size[1],
    c2_b_this->Color.size[2]);
  c2_loop_ub = c2_b_this->Color.size[0] * c2_b_this->Color.size[1] *
    c2_b_this->Color.size[2] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_c_this.vector.data[c2_i] = c2_b_this->Color.vector.data[c2_i];
  }

  c2_array_real32_T_3D_Constructor(chartInstance, &c2_d_this);
  c2_st.site = &c2_od_emlrtRSI;
  c2_array_real32_T_3D_SetSize(chartInstance, &c2_st, &c2_d_this,
    &c2_cb_emlrtRTEI, c2_b_this->Normal.size[0], c2_b_this->Normal.size[1],
    c2_b_this->Normal.size[2]);
  c2_b_loop_ub = c2_b_this->Normal.size[0] * c2_b_this->Normal.size[1] *
    c2_b_this->Normal.size[2] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_b_loop_ub; c2_i1++) {
    c2_d_this.vector.data[c2_i1] = c2_b_this->Normal.vector.data[c2_i1];
  }

  c2_array_real32_T_2D_Constructor(chartInstance, &c2_e_this);
  c2_st.site = &c2_pd_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, &c2_e_this,
    &c2_db_emlrtRTEI, c2_b_this->Intensity.size[0], c2_b_this->Intensity.size[1]);
  c2_c_loop_ub = c2_b_this->Intensity.size[0] * c2_b_this->Intensity.size[1] - 1;
  for (c2_i2 = 0; c2_i2 <= c2_c_loop_ub; c2_i2++) {
    c2_e_this.vector.data[c2_i2] = c2_b_this->Intensity.vector.data[c2_i2];
  }

  c2_array_real32_T_3D_Constructor(chartInstance, &c2_f_this);
  c2_st.site = &c2_pd_emlrtRSI;
  c2_array_real32_T_3D_SetSize(chartInstance, &c2_st, &c2_f_this,
    &c2_eb_emlrtRTEI, c2_b_this->RangeData.size[0], c2_b_this->RangeData.size[1],
    c2_b_this->RangeData.size[2]);
  c2_d_loop_ub = c2_b_this->RangeData.size[0] * c2_b_this->RangeData.size[1] *
    c2_b_this->RangeData.size[2] - 1;
  for (c2_i3 = 0; c2_i3 <= c2_d_loop_ub; c2_i3++) {
    c2_f_this.vector.data[c2_i3] = c2_b_this->RangeData.vector.data[c2_i3];
  }

  c2_array_uint8_T_2D_Constructor(chartInstance, &c2_b_c);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_b_nv);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_c_r);
  c2_st.site = &c2_ib_emlrtRSI;
  for (c2_i4 = 0; c2_i4 < 216000; c2_i4++) {
    chartInstance->c2_this[c2_i4] = c2_b_this->Location[c2_i4];
  }

  for (c2_i5 = 0; c2_i5 < 72000; c2_i5++) {
    c2_c_indices[c2_i5] = c2_b_indices[c2_i5];
  }

  c2_getSubset(chartInstance, &c2_st, chartInstance->c2_this, &c2_c_this,
               &c2_d_this, &c2_e_this, &c2_f_this, c2_c_indices, c2_loc, &c2_b_c,
               &c2_b_nv, c2_intensity, &c2_c_r);
  c2_array_real32_T_3D_Destructor(chartInstance, &c2_f_this);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_e_this);
  c2_array_real32_T_3D_Destructor(chartInstance, &c2_d_this);
  c2_array_uint8_T_3D_Destructor(chartInstance, &c2_c_this);
  c2_st.site = &c2_ib_emlrtRSI;
  c2_array_uint8_T_2D_SetSize(chartInstance, &c2_st, c2_c, &c2_fb_emlrtRTEI,
    c2_b_c.size[0], c2_b_c.size[1]);
  c2_e_loop_ub = c2_b_c.size[0] * c2_b_c.size[1] - 1;
  for (c2_i6 = 0; c2_i6 <= c2_e_loop_ub; c2_i6++) {
    c2_c->vector.data[c2_i6] = c2_b_c.vector.data[c2_i6];
  }

  c2_array_uint8_T_2D_Destructor(chartInstance, &c2_b_c);
  c2_st.site = &c2_ib_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, c2_nv, &c2_gb_emlrtRTEI,
    c2_b_nv.size[0], c2_b_nv.size[1]);
  c2_f_loop_ub = c2_b_nv.size[0] * c2_b_nv.size[1] - 1;
  for (c2_i7 = 0; c2_i7 <= c2_f_loop_ub; c2_i7++) {
    c2_nv->vector.data[c2_i7] = c2_b_nv.vector.data[c2_i7];
  }

  c2_array_real32_T_2D_Destructor(chartInstance, &c2_b_nv);
  c2_st.site = &c2_ib_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, c2_b_r, &c2_hb_emlrtRTEI,
    c2_c_r.size[0], c2_c_r.size[1]);
  c2_g_loop_ub = c2_c_r.size[0] * c2_c_r.size[1] - 1;
  for (c2_i8 = 0; c2_i8 <= c2_g_loop_ub; c2_i8++) {
    c2_b_r->vector.data[c2_i8] = c2_c_r.vector.data[c2_i8];
  }

  c2_array_real32_T_2D_Destructor(chartInstance, &c2_c_r);
}

static void c2_getSubset(SFc2_modelInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, real32_T c2_location[216000], c2_coder_array_uint8_T_3D
  *c2_color, c2_coder_array_real32_T_3D *c2_normal, c2_coder_array_real32_T_2D
  *c2_intensity, c2_coder_array_real32_T_3D *c2_rangeData, boolean_T
  c2_b_indices[72000], c2_coder_array_real32_T_2D *c2_loc,
  c2_coder_array_uint8_T_2D *c2_c, c2_coder_array_real32_T_2D *c2_nv,
  c2_coder_array_real32_T_2D *c2_intens, c2_coder_array_real32_T_2D *c2_b_r)
{
  static char_T c2_b_cv1[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D',
    'i', 'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e',
    'l' };

  static char_T c2_cv3[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D', 'i',
    'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e', 'l' };

  static char_T c2_cv5[40] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T', 'L',
    'A', 'B', ':', 'g', 'e', 't', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'D', 'i',
    'm', 's', '_', 'n', 'o', 't', 'S', 'a', 'm', 'e', 'N', 'u', 'm', 'e', 'l' };

  static char_T c2_b_cv[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'r', 'e', 's', 'h', 'a', 'p', 'e', '_', 'e', 'm', 'p',
    't', 'y', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'L', 'i', 'm', 'i', 't' };

  static char_T c2_b_cv2[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'r', 'e', 's', 'h', 'a', 'p', 'e', '_', 'e', 'm',
    'p', 't', 'y', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'L', 'i', 'm', 'i', 't' };

  static char_T c2_cv4[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'r', 'e', 's', 'h', 'a', 'p', 'e', '_', 'e', 'm', 'p',
    't', 'y', 'R', 'e', 's', 'h', 'a', 'p', 'e', 'L', 'i', 'm', 'i', 't' };

  c2_coder_array_int32_T c2_c_r;
  c2_coder_array_int32_T c2_r1;
  c2_coder_array_int32_T c2_r2;
  c2_coder_array_int32_T c2_r3;
  c2_coder_array_real32_T c2_tempIntens;
  c2_coder_array_real32_T_2D c2_d_nv;
  c2_coder_array_real32_T_2D c2_f_r;
  c2_coder_array_uint8_T_2D c2_d_c;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_m_y = NULL;
  const mxArray *c2_n_y = NULL;
  const mxArray *c2_o_y = NULL;
  const mxArray *c2_p_y = NULL;
  const mxArray *c2_q_y = NULL;
  const mxArray *c2_r_y = NULL;
  const mxArray *c2_s_y = NULL;
  const mxArray *c2_t_y = NULL;
  const mxArray *c2_u_y = NULL;
  const mxArray *c2_v_y = NULL;
  const mxArray *c2_w_y = NULL;
  const mxArray *c2_x_y = NULL;
  const mxArray *c2_y_y = NULL;
  int32_T c2_sz[2];
  int32_T c2_a;
  int32_T c2_b_a;
  int32_T c2_b_c;
  int32_T c2_b_emptyDimValue;
  int32_T c2_b_end;
  int32_T c2_b_i;
  int32_T c2_b_loop_ub;
  int32_T c2_b_maxdimlen;
  int32_T c2_b_n;
  int32_T c2_b_nv;
  int32_T c2_b_nx;
  int32_T c2_b_partialTrueCount;
  int32_T c2_b_result;
  int32_T c2_b_trueCount;
  int32_T c2_b_varargin_1;
  int32_T c2_c_a;
  int32_T c2_c_c;
  int32_T c2_c_emptyDimValue;
  int32_T c2_c_end;
  int32_T c2_c_i;
  int32_T c2_c_loop_ub;
  int32_T c2_c_maxdimlen;
  int32_T c2_c_n;
  int32_T c2_c_nv;
  int32_T c2_c_nx;
  int32_T c2_c_partialTrueCount;
  int32_T c2_c_result;
  int32_T c2_c_trueCount;
  int32_T c2_c_varargin_1;
  int32_T c2_d_end;
  int32_T c2_d_i;
  int32_T c2_d_loop_ub;
  int32_T c2_d_nx;
  int32_T c2_d_partialTrueCount;
  int32_T c2_d_r;
  int32_T c2_d_trueCount;
  int32_T c2_d_varargin_1;
  int32_T c2_e_end;
  int32_T c2_e_i;
  int32_T c2_e_loop_ub;
  int32_T c2_e_nx;
  int32_T c2_e_partialTrueCount;
  int32_T c2_e_r;
  int32_T c2_e_trueCount;
  int32_T c2_e_varargin_1;
  int32_T c2_emptyDimValue;
  int32_T c2_end;
  int32_T c2_f_i;
  int32_T c2_f_loop_ub;
  int32_T c2_f_nx;
  int32_T c2_f_varargin_1;
  int32_T c2_g_i;
  int32_T c2_g_loop_ub;
  int32_T c2_h_i;
  int32_T c2_h_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_i;
  int32_T c2_i_loop_ub;
  int32_T c2_j_i;
  int32_T c2_j_loop_ub;
  int32_T c2_k_i;
  int32_T c2_k_loop_ub;
  int32_T c2_l_loop_ub;
  int32_T c2_loop_ub;
  int32_T c2_maxdimlen;
  int32_T c2_n;
  int32_T c2_nx;
  int32_T c2_partialTrueCount;
  int32_T c2_result;
  int32_T c2_trueCount;
  int32_T c2_varargin_1;
  boolean_T c2_b1;
  boolean_T c2_b10;
  boolean_T c2_b11;
  boolean_T c2_b12;
  boolean_T c2_b13;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b4;
  boolean_T c2_b5;
  boolean_T c2_b6;
  boolean_T c2_b7;
  boolean_T c2_b8;
  boolean_T c2_b9;
  boolean_T c2_b_b;
  boolean_T c2_b_p;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  for (c2_i = 0; c2_i < 216000; c2_i++) {
    chartInstance->c2_tempLocation[c2_i] = c2_location[c2_i];
  }

  c2_end = 72000;
  c2_trueCount = 0;
  for (c2_b_i = 0; c2_b_i < c2_end; c2_b_i++) {
    if (c2_b_indices[c2_b_i]) {
      c2_trueCount++;
    }
  }

  c2_array_int32_T_Constructor(chartInstance, &c2_c_r);
  c2_st.site = &c2_jb_emlrtRSI;
  c2_array_int32_T_SetSize(chartInstance, &c2_st, &c2_c_r, &c2_ib_emlrtRTEI,
    c2_trueCount);
  c2_partialTrueCount = 0;
  for (c2_c_i = 0; c2_c_i < c2_end; c2_c_i++) {
    if (c2_b_indices[c2_c_i]) {
      c2_c_r.vector.data[c2_partialTrueCount] = c2_c_i;
      c2_partialTrueCount++;
    }
  }

  c2_st.site = &c2_jb_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, c2_loc, &c2_ib_emlrtRTEI,
    c2_c_r.size[0], 3);
  for (c2_i1 = 0; c2_i1 < 3; c2_i1++) {
    c2_loop_ub = c2_c_r.size[0] - 1;
    for (c2_i2 = 0; c2_i2 <= c2_loop_ub; c2_i2++) {
      c2_loc->vector.data[c2_i2 + c2_loc->size[0] * c2_i1] =
        chartInstance->c2_tempLocation[c2_c_r.vector.data[c2_i2] + 72000 * c2_i1];
    }
  }

  c2_array_int32_T_Destructor(chartInstance, &c2_c_r);
  c2_b_b = (c2_color->size[0] == 0);
  c2_b1 = (c2_color->size[1] == 0);
  c2_b2 = (c2_b_b || c2_b1);
  c2_b3 = (c2_color->size[2] == 0);
  if ((!c2_b2) && (!c2_b3)) {
    c2_st.site = &c2_jb_emlrtRSI;
    c2_nx = c2_color->size[0] * c2_color->size[1] * c2_color->size[2];
    c2_b_st.site = &c2_kb_emlrtRSI;
    c2_b_nx = c2_nx;
    c2_a = c2_b_nx;
    c2_emptyDimValue = (int32_T)((uint32_T)c2_a / 3U);
    if (c2_emptyDimValue > c2_b_nx) {
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv, 10, 0U, 1, 0U, 2, 1, 30),
                    false);
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv, 10, 0U, 1, 0U, 2, 1, 30),
                    false);
      sf_mex_call(&c2_b_st, &c2_f_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
    }

    c2_sz[0] = c2_emptyDimValue;
    c2_n = c2_color->size[0];
    if (c2_color->size[1] > c2_n) {
      c2_n = c2_color->size[1];
    }

    if (c2_color->size[2] > c2_n) {
      c2_n = c2_color->size[2];
    }

    c2_maxdimlen = muIntScalarMax_sint32(c2_nx, c2_n);
    if (c2_sz[0] > c2_maxdimlen) {
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      c2_h_y = NULL;
      sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      sf_mex_call(&c2_st, &c2_g_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 1U, 14, c2_h_y)));
    }

    if (c2_maxdimlen < 3) {
      c2_g_y = NULL;
      sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      c2_i_y = NULL;
      sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      sf_mex_call(&c2_st, &c2_g_emlrtMCI, "error", 0U, 2U, 14, c2_g_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 1U, 14, c2_i_y)));
    }

    c2_varargin_1 = c2_sz[0];
    c2_b_varargin_1 = c2_varargin_1;
    c2_result = c2_b_varargin_1 * 3;
    if (c2_result != c2_nx) {
      c2_j_y = NULL;
      sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1,
        40), false);
      c2_l_y = NULL;
      sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1,
        40), false);
      sf_mex_call(&c2_st, &c2_i_emlrtMCI, "error", 0U, 2U, 14, c2_j_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 1U, 14, c2_l_y)));
    }

    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_uint8_T_2D_SetSize(chartInstance, &c2_st, c2_c, &c2_ib_emlrtRTEI,
      c2_emptyDimValue, 3);
    c2_b_loop_ub = c2_emptyDimValue * 3 - 1;
    for (c2_i4 = 0; c2_i4 <= c2_b_loop_ub; c2_i4++) {
      c2_c->vector.data[c2_i4] = c2_color->vector.data[c2_i4];
    }

    c2_c_end = 72000;
    c2_c_trueCount = 0;
    for (c2_f_i = 0; c2_f_i < c2_c_end; c2_f_i++) {
      if (c2_b_indices[c2_f_i]) {
        c2_c_trueCount++;
      }
    }

    c2_array_int32_T_Constructor(chartInstance, &c2_r1);
    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_int32_T_SetSize(chartInstance, &c2_st, &c2_r1, &c2_ib_emlrtRTEI,
      c2_c_trueCount);
    c2_c_partialTrueCount = 0;
    for (c2_g_i = 0; c2_g_i < c2_c_end; c2_g_i++) {
      if (c2_b_indices[c2_g_i]) {
        c2_r1.vector.data[c2_c_partialTrueCount] = c2_g_i;
        c2_c_partialTrueCount++;
      }
    }

    c2_b_c = c2_c->size[0];
    c2_c_c = c2_b_c - 1;
    c2_array_uint8_T_2D_Constructor(chartInstance, &c2_d_c);
    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_uint8_T_2D_SetSize(chartInstance, &c2_st, &c2_d_c, &c2_ib_emlrtRTEI,
      c2_r1.size[0], 3);
    for (c2_i8 = 0; c2_i8 < 3; c2_i8++) {
      c2_f_loop_ub = c2_r1.size[0] - 1;
      for (c2_i9 = 0; c2_i9 <= c2_f_loop_ub; c2_i9++) {
        c2_i11 = c2_r1.vector.data[c2_i9];
        if ((c2_i11 < 0) || (c2_i11 > c2_c_c)) {
          emlrtDynamicBoundsCheckR2012b(c2_i11, 0, c2_c_c, &c2_c_emlrtBCI,
            (emlrtConstCTX)c2_sp);
        }

        c2_d_c.vector.data[c2_i9 + c2_d_c.size[0] * c2_i8] = c2_c->
          vector.data[c2_i11 + c2_c->size[0] * c2_i8];
      }
    }

    c2_array_int32_T_Destructor(chartInstance, &c2_r1);
    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_uint8_T_2D_SetSize(chartInstance, &c2_st, c2_c, &c2_ib_emlrtRTEI,
      c2_d_c.size[0], c2_d_c.size[1]);
    c2_h_loop_ub = c2_d_c.size[0] * c2_d_c.size[1] - 1;
    for (c2_i12 = 0; c2_i12 <= c2_h_loop_ub; c2_i12++) {
      c2_c->vector.data[c2_i12] = c2_d_c.vector.data[c2_i12];
    }

    c2_array_uint8_T_2D_Destructor(chartInstance, &c2_d_c);
  } else {
    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_uint8_T_2D_SetSize(chartInstance, &c2_st, c2_c, &c2_ib_emlrtRTEI, 0,
      0);
  }

  c2_b4 = (c2_normal->size[0] == 0);
  c2_b5 = (c2_normal->size[1] == 0);
  c2_b6 = (c2_b4 || c2_b5);
  c2_b7 = (c2_normal->size[2] == 0);
  if ((!c2_b6) && (!c2_b7)) {
    c2_st.site = &c2_jb_emlrtRSI;
    c2_c_nx = c2_normal->size[0] * c2_normal->size[1] * c2_normal->size[2];
    c2_b_st.site = &c2_kb_emlrtRSI;
    c2_d_nx = c2_c_nx;
    c2_b_a = c2_d_nx;
    c2_b_emptyDimValue = (int32_T)((uint32_T)c2_b_a / 3U);
    if (c2_b_emptyDimValue > c2_d_nx) {
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_cv, 10, 0U, 1, 0U, 2, 1, 30),
                    false);
      c2_f_y = NULL;
      sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_cv, 10, 0U, 1, 0U, 2, 1, 30),
                    false);
      sf_mex_call(&c2_b_st, &c2_f_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_f_y)));
    }

    c2_sz[0] = c2_b_emptyDimValue;
    c2_b_n = c2_normal->size[0];
    if (c2_normal->size[1] > c2_b_n) {
      c2_b_n = c2_normal->size[1];
    }

    if (c2_normal->size[2] > c2_b_n) {
      c2_b_n = c2_normal->size[2];
    }

    c2_b_maxdimlen = muIntScalarMax_sint32(c2_c_nx, c2_b_n);
    if (c2_sz[0] > c2_b_maxdimlen) {
      c2_k_y = NULL;
      sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2, 1,
        39), false);
      c2_n_y = NULL;
      sf_mex_assign(&c2_n_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2, 1,
        39), false);
      sf_mex_call(&c2_st, &c2_g_emlrtMCI, "error", 0U, 2U, 14, c2_k_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 1U, 14, c2_n_y)));
    }

    if (c2_b_maxdimlen < 3) {
      c2_m_y = NULL;
      sf_mex_assign(&c2_m_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2, 1,
        39), false);
      c2_o_y = NULL;
      sf_mex_assign(&c2_o_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2, 1,
        39), false);
      sf_mex_call(&c2_st, &c2_g_emlrtMCI, "error", 0U, 2U, 14, c2_m_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 1U, 14, c2_o_y)));
    }

    c2_c_varargin_1 = c2_sz[0];
    c2_d_varargin_1 = c2_c_varargin_1;
    c2_b_result = c2_d_varargin_1 * 3;
    if (c2_b_result != c2_c_nx) {
      c2_r_y = NULL;
      sf_mex_assign(&c2_r_y, sf_mex_create("y", c2_cv3, 10, 0U, 1, 0U, 2, 1, 40),
                    false);
      c2_s_y = NULL;
      sf_mex_assign(&c2_s_y, sf_mex_create("y", c2_cv3, 10, 0U, 1, 0U, 2, 1, 40),
                    false);
      sf_mex_call(&c2_st, &c2_i_emlrtMCI, "error", 0U, 2U, 14, c2_r_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 1U, 14, c2_s_y)));
    }

    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, c2_nv, &c2_ib_emlrtRTEI,
      c2_b_emptyDimValue, 3);
    c2_e_loop_ub = c2_b_emptyDimValue * 3 - 1;
    for (c2_i7 = 0; c2_i7 <= c2_e_loop_ub; c2_i7++) {
      c2_nv->vector.data[c2_i7] = c2_normal->vector.data[c2_i7];
    }

    c2_d_end = 72000;
    c2_d_trueCount = 0;
    for (c2_h_i = 0; c2_h_i < c2_d_end; c2_h_i++) {
      if (c2_b_indices[c2_h_i]) {
        c2_d_trueCount++;
      }
    }

    c2_array_int32_T_Constructor(chartInstance, &c2_r2);
    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_int32_T_SetSize(chartInstance, &c2_st, &c2_r2, &c2_ib_emlrtRTEI,
      c2_d_trueCount);
    c2_d_partialTrueCount = 0;
    for (c2_i_i = 0; c2_i_i < c2_d_end; c2_i_i++) {
      if (c2_b_indices[c2_i_i]) {
        c2_r2.vector.data[c2_d_partialTrueCount] = c2_i_i;
        c2_d_partialTrueCount++;
      }
    }

    c2_b_nv = c2_nv->size[0];
    c2_c_nv = c2_b_nv - 1;
    c2_array_real32_T_2D_Constructor(chartInstance, &c2_d_nv);
    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, &c2_d_nv,
      &c2_ib_emlrtRTEI, c2_r2.size[0], 3);
    for (c2_i13 = 0; c2_i13 < 3; c2_i13++) {
      c2_i_loop_ub = c2_r2.size[0] - 1;
      for (c2_i14 = 0; c2_i14 <= c2_i_loop_ub; c2_i14++) {
        c2_i15 = c2_r2.vector.data[c2_i14];
        if ((c2_i15 < 0) || (c2_i15 > c2_c_nv)) {
          emlrtDynamicBoundsCheckR2012b(c2_i15, 0, c2_c_nv, &c2_c_emlrtBCI,
            (emlrtConstCTX)c2_sp);
        }

        c2_d_nv.vector.data[c2_i14 + c2_d_nv.size[0] * c2_i13] =
          c2_nv->vector.data[c2_i15 + c2_nv->size[0] * c2_i13];
      }
    }

    c2_array_int32_T_Destructor(chartInstance, &c2_r2);
    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, c2_nv, &c2_ib_emlrtRTEI,
      c2_d_nv.size[0], c2_d_nv.size[1]);
    c2_j_loop_ub = c2_d_nv.size[0] * c2_d_nv.size[1] - 1;
    for (c2_i16 = 0; c2_i16 <= c2_j_loop_ub; c2_i16++) {
      c2_nv->vector.data[c2_i16] = c2_d_nv.vector.data[c2_i16];
    }

    c2_array_real32_T_2D_Destructor(chartInstance, &c2_d_nv);
  } else {
    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, c2_nv, &c2_ib_emlrtRTEI,
      0, 0);
  }

  c2_b8 = (c2_intensity->size[0] == 0);
  c2_b9 = (c2_intensity->size[1] == 0);
  if ((!c2_b8) && (!c2_b9)) {
    c2_st.site = &c2_jb_emlrtRSI;
    c2_indexShapeCheck(chartInstance, &c2_st, c2_intensity->size);
    c2_b_end = 72000;
    c2_b_trueCount = 0;
    for (c2_d_i = 0; c2_d_i < c2_b_end; c2_d_i++) {
      if (c2_b_indices[c2_d_i]) {
        c2_b_trueCount++;
      }
    }

    c2_array_real32_T_Constructor(chartInstance, &c2_tempIntens);
    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_real32_T_SetSize(chartInstance, &c2_st, &c2_tempIntens,
      &c2_ib_emlrtRTEI, c2_b_trueCount);
    c2_b_partialTrueCount = 0;
    for (c2_e_i = 0; c2_e_i < c2_b_end; c2_e_i++) {
      if (c2_b_indices[c2_e_i]) {
        c2_i3 = c2_intensity->size[0] * c2_intensity->size[1] - 1;
        if ((c2_e_i < 0) || (c2_e_i > c2_i3)) {
          emlrtDynamicBoundsCheckR2012b(c2_e_i, 0, c2_i3, &c2_c_emlrtBCI,
            (emlrtConstCTX)c2_sp);
        }

        c2_tempIntens.vector.data[c2_b_partialTrueCount] =
          c2_intensity->vector.data[c2_e_i];
        c2_b_partialTrueCount++;
      }
    }

    if (c2_tempIntens.size[0] == 1) {
      c2_p = true;
    } else {
      c2_p = false;
    }

    c2_b_p = c2_p;
    if (c2_b_p) {
      c2_st.site = &c2_jb_emlrtRSI;
      c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, c2_intens,
        &c2_ib_emlrtRTEI, 1, c2_tempIntens.size[0]);
      c2_d_loop_ub = c2_tempIntens.size[0] - 1;
      for (c2_i6 = 0; c2_i6 <= c2_d_loop_ub; c2_i6++) {
        c2_intens->vector.data[c2_intens->size[0] * c2_i6] =
          c2_tempIntens.vector.data[c2_i6];
      }
    } else {
      c2_st.site = &c2_jb_emlrtRSI;
      c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, c2_intens,
        &c2_ib_emlrtRTEI, c2_tempIntens.size[0], 1);
      c2_c_loop_ub = c2_tempIntens.size[0] - 1;
      for (c2_i5 = 0; c2_i5 <= c2_c_loop_ub; c2_i5++) {
        c2_intens->vector.data[c2_i5] = c2_tempIntens.vector.data[c2_i5];
      }
    }

    c2_array_real32_T_Destructor(chartInstance, &c2_tempIntens);
  } else {
    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, c2_intens,
      &c2_ib_emlrtRTEI, 0, 0);
  }

  c2_b10 = (c2_rangeData->size[0] == 0);
  c2_b11 = (c2_rangeData->size[1] == 0);
  c2_b12 = (c2_b10 || c2_b11);
  c2_b13 = (c2_rangeData->size[2] == 0);
  if ((!c2_b12) && (!c2_b13)) {
    c2_st.site = &c2_jb_emlrtRSI;
    c2_e_nx = c2_rangeData->size[0] * c2_rangeData->size[1] * c2_rangeData->
      size[2];
    c2_b_st.site = &c2_kb_emlrtRSI;
    c2_f_nx = c2_e_nx;
    c2_c_a = c2_f_nx;
    c2_c_emptyDimValue = (int32_T)((uint32_T)c2_c_a / 3U);
    if (c2_c_emptyDimValue > c2_f_nx) {
      c2_p_y = NULL;
      sf_mex_assign(&c2_p_y, sf_mex_create("y", c2_cv, 10, 0U, 1, 0U, 2, 1, 30),
                    false);
      c2_q_y = NULL;
      sf_mex_assign(&c2_q_y, sf_mex_create("y", c2_cv, 10, 0U, 1, 0U, 2, 1, 30),
                    false);
      sf_mex_call(&c2_b_st, &c2_f_emlrtMCI, "error", 0U, 2U, 14, c2_p_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_q_y)));
    }

    c2_sz[0] = c2_c_emptyDimValue;
    c2_c_n = c2_rangeData->size[0];
    if (c2_rangeData->size[1] > c2_c_n) {
      c2_c_n = c2_rangeData->size[1];
    }

    if (c2_rangeData->size[2] > c2_c_n) {
      c2_c_n = c2_rangeData->size[2];
    }

    c2_c_maxdimlen = muIntScalarMax_sint32(c2_e_nx, c2_c_n);
    if (c2_sz[0] > c2_c_maxdimlen) {
      c2_t_y = NULL;
      sf_mex_assign(&c2_t_y, sf_mex_create("y", c2_cv4, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      c2_v_y = NULL;
      sf_mex_assign(&c2_v_y, sf_mex_create("y", c2_cv4, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      sf_mex_call(&c2_st, &c2_g_emlrtMCI, "error", 0U, 2U, 14, c2_t_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 1U, 14, c2_v_y)));
    }

    if (c2_c_maxdimlen < 3) {
      c2_u_y = NULL;
      sf_mex_assign(&c2_u_y, sf_mex_create("y", c2_cv4, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      c2_w_y = NULL;
      sf_mex_assign(&c2_w_y, sf_mex_create("y", c2_cv4, 10, 0U, 1, 0U, 2, 1, 39),
                    false);
      sf_mex_call(&c2_st, &c2_g_emlrtMCI, "error", 0U, 2U, 14, c2_u_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 1U, 14, c2_w_y)));
    }

    c2_e_varargin_1 = c2_sz[0];
    c2_f_varargin_1 = c2_e_varargin_1;
    c2_c_result = c2_f_varargin_1 * 3;
    if (c2_c_result != c2_e_nx) {
      c2_x_y = NULL;
      sf_mex_assign(&c2_x_y, sf_mex_create("y", c2_cv5, 10, 0U, 1, 0U, 2, 1, 40),
                    false);
      c2_y_y = NULL;
      sf_mex_assign(&c2_y_y, sf_mex_create("y", c2_cv5, 10, 0U, 1, 0U, 2, 1, 40),
                    false);
      sf_mex_call(&c2_st, &c2_i_emlrtMCI, "error", 0U, 2U, 14, c2_x_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 1U, 14, c2_y_y)));
    }

    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, c2_b_r, &c2_ib_emlrtRTEI,
      c2_c_emptyDimValue, 3);
    c2_g_loop_ub = c2_c_emptyDimValue * 3 - 1;
    for (c2_i10 = 0; c2_i10 <= c2_g_loop_ub; c2_i10++) {
      c2_b_r->vector.data[c2_i10] = c2_rangeData->vector.data[c2_i10];
    }

    c2_e_end = 72000;
    c2_e_trueCount = 0;
    for (c2_j_i = 0; c2_j_i < c2_e_end; c2_j_i++) {
      if (c2_b_indices[c2_j_i]) {
        c2_e_trueCount++;
      }
    }

    c2_array_int32_T_Constructor(chartInstance, &c2_r3);
    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_int32_T_SetSize(chartInstance, &c2_st, &c2_r3, &c2_ib_emlrtRTEI,
      c2_e_trueCount);
    c2_e_partialTrueCount = 0;
    for (c2_k_i = 0; c2_k_i < c2_e_end; c2_k_i++) {
      if (c2_b_indices[c2_k_i]) {
        c2_r3.vector.data[c2_e_partialTrueCount] = c2_k_i;
        c2_e_partialTrueCount++;
      }
    }

    c2_d_r = c2_b_r->size[0];
    c2_e_r = c2_d_r - 1;
    c2_array_real32_T_2D_Constructor(chartInstance, &c2_f_r);
    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, &c2_f_r,
      &c2_ib_emlrtRTEI, c2_r3.size[0], 3);
    for (c2_i17 = 0; c2_i17 < 3; c2_i17++) {
      c2_k_loop_ub = c2_r3.size[0] - 1;
      for (c2_i18 = 0; c2_i18 <= c2_k_loop_ub; c2_i18++) {
        c2_i19 = c2_r3.vector.data[c2_i18];
        if ((c2_i19 < 0) || (c2_i19 > c2_e_r)) {
          emlrtDynamicBoundsCheckR2012b(c2_i19, 0, c2_e_r, &c2_c_emlrtBCI,
            (emlrtConstCTX)c2_sp);
        }

        c2_f_r.vector.data[c2_i18 + c2_f_r.size[0] * c2_i17] =
          c2_b_r->vector.data[c2_i19 + c2_b_r->size[0] * c2_i17];
      }
    }

    c2_array_int32_T_Destructor(chartInstance, &c2_r3);
    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, c2_b_r, &c2_ib_emlrtRTEI,
      c2_f_r.size[0], c2_f_r.size[1]);
    c2_l_loop_ub = c2_f_r.size[0] * c2_f_r.size[1] - 1;
    for (c2_i20 = 0; c2_i20 <= c2_l_loop_ub; c2_i20++) {
      c2_b_r->vector.data[c2_i20] = c2_f_r.vector.data[c2_i20];
    }

    c2_array_real32_T_2D_Destructor(chartInstance, &c2_f_r);
  } else {
    c2_st.site = &c2_jb_emlrtRSI;
    c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, c2_b_r, &c2_ib_emlrtRTEI,
      0, 0);
  }
}

static void c2_indexShapeCheck(SFc2_modelInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_matrixSize[2])
{
  static char_T c2_b_cv[41] = { 'C', 'o', 'd', 'e', 'r', ':', 'F', 'E', ':', 'P',
    'o', 't', 'e', 'n', 't', 'i', 'a', 'l', 'M', 'a', 't', 'r', 'i', 'x', 'M',
    'a', 't', 'r', 'i', 'x', '_', 'V', 'V', '_', 'L', 'o', 'g', 'i', 'c', 'a',
    'l' };

  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  boolean_T c2_b_b;
  boolean_T c2_b_c;
  boolean_T c2_c;
  boolean_T c2_c_c;
  boolean_T c2_d_c;
  boolean_T c2_e_c;
  boolean_T c2_nonSingletonDimFound;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_nonSingletonDimFound = false;
  if (c2_matrixSize[0] != 1) {
    c2_nonSingletonDimFound = true;
  }

  if (c2_matrixSize[1] != 1) {
    if (c2_nonSingletonDimFound) {
      c2_b_b = false;
    } else {
      c2_nonSingletonDimFound = true;
      c2_b_b = c2_nonSingletonDimFound;
    }
  } else {
    c2_b_b = c2_nonSingletonDimFound;
  }

  if (c2_b_b) {
    if (c2_matrixSize[0] == 1) {
      c2_b_c = true;
    } else {
      c2_b_c = false;
    }

    if (c2_b_c || (c2_matrixSize[1] != 1)) {
      c2_d_c = true;
    } else {
      c2_d_c = false;
    }

    c2_e_c = c2_d_c;
    if (c2_e_c) {
      c2_c = true;
    } else {
      c2_c = false;
    }
  } else {
    c2_c = false;
  }

  c2_st.site = &c2_lb_emlrtRSI;
  c2_c_c = c2_c;
  if (c2_c_c) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 41),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 41),
                  false);
    sf_mex_call(&c2_st, &c2_j_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
  }
}

static c2_pointCloud_2 *c2_b_pointCloud_pointCloud(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud_2 *c2_b_this,
  c2_coder_array_real32_T_2D *c2_varargin_1, c2_coder_array_uint8_T_2D
  *c2_varargin_3, c2_coder_array_real32_T_2D *c2_varargin_5,
  c2_coder_array_real32_T_2D *c2_varargin_7)
{
  c2_coder_array_c_pointclouds_inter c2_data;
  c2_coder_array_real32_T_2D c2_b_varargin_1;
  c2_coder_array_real32_T_2D c2_b_varargin_5;
  c2_coder_array_real32_T_2D c2_b_varargin_7;
  c2_coder_array_uint8_T_2D c2_b_varargin_3;
  c2_pointCloud_2 *c2_c_this;
  c2_pointCloud_2 *c2_c_varargin_1;
  c2_pointCloud_2 *c2_d_this;
  c2_pointCloud_2 *c2_e_this;
  c2_pointclouds_internal_codegen_pc_pointCloudArray_1 c2_b_r;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  int32_T c2_b_loop_ub;
  int32_T c2_c_loop_ub;
  int32_T c2_d_loop_ub;
  int32_T c2_e_loop_ub;
  int32_T c2_f_loop_ub;
  int32_T c2_g_loop_ub;
  int32_T c2_h_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i_loop_ub;
  int32_T c2_loop_ub;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_this = c2_b_this;
  c2_c_this->HasKdtreeConstructed = false;
  c2_c_this->HasLocationHandleAllocated = false;
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_b_varargin_1);
  c2_st.site = &c2_d_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, &c2_b_varargin_1,
    &c2_jb_emlrtRTEI, c2_varargin_1->size[0], 3);
  c2_loop_ub = c2_varargin_1->size[0] * c2_varargin_1->size[1] - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_b_varargin_1.vector.data[c2_i] = c2_varargin_1->vector.data[c2_i];
  }

  c2_array_uint8_T_2D_Constructor(chartInstance, &c2_b_varargin_3);
  c2_st.site = &c2_d_emlrtRSI;
  c2_array_uint8_T_2D_SetSize(chartInstance, &c2_st, &c2_b_varargin_3,
    &c2_jb_emlrtRTEI, c2_varargin_3->size[0], c2_varargin_3->size[1]);
  c2_b_loop_ub = c2_varargin_3->size[0] * c2_varargin_3->size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_b_loop_ub; c2_i1++) {
    c2_b_varargin_3.vector.data[c2_i1] = c2_varargin_3->vector.data[c2_i1];
  }

  c2_array_real32_T_2D_Constructor(chartInstance, &c2_b_varargin_5);
  c2_st.site = &c2_d_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, &c2_b_varargin_5,
    &c2_jb_emlrtRTEI, c2_varargin_5->size[0], c2_varargin_5->size[1]);
  c2_c_loop_ub = c2_varargin_5->size[0] * c2_varargin_5->size[1] - 1;
  for (c2_i2 = 0; c2_i2 <= c2_c_loop_ub; c2_i2++) {
    c2_b_varargin_5.vector.data[c2_i2] = c2_varargin_5->vector.data[c2_i2];
  }

  c2_array_real32_T_2D_Constructor(chartInstance, &c2_b_varargin_7);
  c2_st.site = &c2_d_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, &c2_b_varargin_7,
    &c2_jb_emlrtRTEI, c2_varargin_7->size[0], c2_varargin_7->size[1]);
  c2_d_loop_ub = c2_varargin_7->size[0] * c2_varargin_7->size[1] - 1;
  for (c2_i3 = 0; c2_i3 <= c2_d_loop_ub; c2_i3++) {
    c2_b_varargin_7.vector.data[c2_i3] = c2_varargin_7->vector.data[c2_i3];
  }

  c2_st.site = &c2_d_emlrtRSI;
  c2_c_this = c2_pointCloudBase_pointCloudBase(chartInstance, &c2_st, c2_c_this,
    &c2_b_varargin_1, &c2_b_varargin_3, &c2_b_varargin_5, &c2_b_varargin_7);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_b_varargin_7);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_b_varargin_5);
  c2_array_uint8_T_2D_Destructor(chartInstance, &c2_b_varargin_3);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_b_varargin_1);
  c2_st.site = &c2_e_emlrtRSI;
  c2_d_this = c2_c_this;
  c2_b_st.site = &c2_o_emlrtRSI;
  c2_c_varargin_1 = c2_d_this;
  c2_f_array_pointclouds_internal_code(chartInstance, &c2_b_r);
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_b_st, &c2_b_r.Location,
    &c2_kb_emlrtRTEI, c2_c_varargin_1->Location.size[0], 3);
  c2_e_loop_ub = c2_c_varargin_1->Location.size[0] * 3 - 1;
  for (c2_i4 = 0; c2_i4 <= c2_e_loop_ub; c2_i4++) {
    c2_b_r.Location.vector.data[c2_i4] = c2_c_varargin_1->
      Location.vector.data[c2_i4];
  }

  c2_array_real32_T_2D_SetSize(chartInstance, &c2_b_st, &c2_b_r.Normal,
    &c2_m_emlrtRTEI, c2_c_varargin_1->Normal.size[0],
    c2_c_varargin_1->Normal.size[1]);
  c2_f_loop_ub = c2_c_varargin_1->Normal.size[0] * c2_c_varargin_1->Normal.size
    [1] - 1;
  for (c2_i5 = 0; c2_i5 <= c2_f_loop_ub; c2_i5++) {
    c2_b_r.Normal.vector.data[c2_i5] = c2_c_varargin_1->Normal.vector.data[c2_i5];
  }

  c2_array_uint8_T_2D_SetSize(chartInstance, &c2_b_st, &c2_b_r.Color,
    &c2_n_emlrtRTEI, c2_c_varargin_1->Color.size[0], c2_c_varargin_1->
    Color.size[1]);
  c2_g_loop_ub = c2_c_varargin_1->Color.size[0] * c2_c_varargin_1->Color.size[1]
    - 1;
  for (c2_i6 = 0; c2_i6 <= c2_g_loop_ub; c2_i6++) {
    c2_b_r.Color.vector.data[c2_i6] = c2_c_varargin_1->Color.vector.data[c2_i6];
  }

  c2_array_real32_T_2D_SetSize(chartInstance, &c2_b_st, &c2_b_r.Intensity,
    &c2_o_emlrtRTEI, c2_c_varargin_1->Intensity.size[0],
    c2_c_varargin_1->Intensity.size[1]);
  c2_h_loop_ub = c2_c_varargin_1->Intensity.size[0] *
    c2_c_varargin_1->Intensity.size[1] - 1;
  for (c2_i7 = 0; c2_i7 <= c2_h_loop_ub; c2_i7++) {
    c2_b_r.Intensity.vector.data[c2_i7] = c2_c_varargin_1->
      Intensity.vector.data[c2_i7];
  }

  c2_n_array_pointclouds_internal_code(chartInstance, &c2_data);
  c2_d_array_pointclouds_internal_code(chartInstance, &c2_st,
    (c2_pointclouds_internal_codegen_pc_pointCloudArray_1 *)&c2_data.data[0],
    c2_data.size, &c2_p_emlrtRTEI, 1, 1);
  c2_m_array_pointclouds_internal_code(chartInstance, &c2_st, &c2_data.data[0],
    &c2_b_r, &c2_p_emlrtRTEI);
  c2_e_array_pointclouds_internal_code(chartInstance, &c2_b_r);
  c2_g_array_pointclouds_internal_code(chartInstance, &c2_st,
    &c2_d_this->PointCloudArrayData, &c2_q_emlrtRTEI, 1, 1);
  c2_i_loop_ub = 0;
  for (c2_i8 = 0; c2_i8 <= c2_i_loop_ub; c2_i8++) {
    c2_m_array_pointclouds_internal_code(chartInstance, &c2_st,
      &c2_d_this->PointCloudArrayData.vector.data[c2_i8], &c2_data.data[c2_i8],
      &c2_q_emlrtRTEI);
  }

  c2_o_array_pointclouds_internal_code(chartInstance, &c2_data);
  c2_st.site = &c2_td_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st,
    &c2_c_this->XLimitsInternal, &c2_j_emlrtRTEI, 0, 0);
  c2_st.site = &c2_sd_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st,
    &c2_c_this->YLimitsInternal, &c2_k_emlrtRTEI, 0, 0);
  c2_st.site = &c2_rd_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st,
    &c2_c_this->ZLimitsInternal, &c2_l_emlrtRTEI, 0, 0);
  c2_st.site = &c2_f_emlrtRSI;
  c2_e_this = c2_c_this;
  c2_e_this->Kdtree = NULL;
  c2_e_this->LocationHandle = NULL;
  c2_c_this->matlabCodegenIsDeleted = false;
  return c2_c_this;
}

static c2_pointCloud_2 *c2_pointCloudBase_pointCloudBase
  (SFc2_modelInstanceStruct *chartInstance, const emlrtStack *c2_sp,
   c2_pointCloud_2 *c2_b_this, c2_coder_array_real32_T_2D *c2_varargin_1,
   c2_coder_array_uint8_T_2D *c2_varargin_3, c2_coder_array_real32_T_2D
   *c2_varargin_5, c2_coder_array_real32_T_2D *c2_varargin_7)
{
  static char_T c2_b_cv1[39] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'p', 'o',
    'i', 'n', 't', 'c', 'l', 'o', 'u', 'd', ':', 'u', 'n', 'm', 'a', 't', 'c',
    'h', 'e', 'd', 'X', 'Y', 'Z', 'I', 'n', 't', 'e', 'n', 's', 'i', 't', 'y' };

  static char_T c2_b_cv[36] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'p', 'o', 'i',
    'n', 't', 'c', 'l', 'o', 'u', 'd', ':', 'u', 'n', 'm', 'a', 't', 'c', 'h',
    'e', 'd', 'X', 'Y', 'Z', 'N', 'o', 'r', 'm', 'a', 'l' };

  c2_coder_array_real32_T_2D c2_rangeData_data;
  c2_coder_array_real32_T_2D c2_xyzPoints;
  c2_coder_array_uint8_T_2D c2_b_varargin_3;
  c2_pointCloud_2 *c2_c_this;
  c2_pointCloud_2 *c2_d_this;
  c2_pointCloud_2 *c2_e_this;
  c2_pointCloud_2 *c2_f_this;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  real_T c2_b_varargin_1[2];
  real_T c2_varargin_2[2];
  real_T c2_b_k;
  real_T c2_x1;
  real_T c2_x2;
  int32_T c2_rangeData_size[2];
  int32_T c2_b_loop_ub;
  int32_T c2_c_loop_ub;
  int32_T c2_d_loop_ub;
  int32_T c2_e_loop_ub;
  int32_T c2_f_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_k;
  int32_T c2_loop_ub;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b4;
  boolean_T c2_b5;
  boolean_T c2_b_b;
  boolean_T c2_b_p;
  boolean_T c2_c_p;
  boolean_T c2_d_p;
  boolean_T c2_e_p;
  boolean_T c2_exitg1;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_this = c2_b_this;
  c2_st.site = &c2_g_emlrtRSI;
  c2_d_this = c2_c_this;
  c2_c_this = c2_d_this;
  memset(&c2_rangeData_size[0], 0, sizeof(int32_T) << 1);
  c2_st.site = &c2_qd_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, &c2_c_this->Location,
    &c2_mb_emlrtRTEI, c2_varargin_1->size[0], 3);
  c2_loop_ub = c2_varargin_1->size[0] * 3 - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_c_this->Location.vector.data[c2_i] = c2_varargin_1->vector.data[c2_i];
  }

  c2_array_uint8_T_2D_Constructor(chartInstance, &c2_b_varargin_3);
  c2_st.site = &c2_wd_emlrtRSI;
  c2_array_uint8_T_2D_SetSize(chartInstance, &c2_st, &c2_b_varargin_3,
    &c2_nb_emlrtRTEI, c2_varargin_3->size[0], c2_varargin_3->size[1]);
  c2_b_loop_ub = c2_varargin_3->size[0] * c2_varargin_3->size[1] - 1;
  for (c2_i1 = 0; c2_i1 <= c2_b_loop_ub; c2_i1++) {
    c2_b_varargin_3.vector.data[c2_i1] = c2_varargin_3->vector.data[c2_i1];
  }

  c2_st.site = &c2_h_emlrtRSI;
  c2_pointCloudBase_set_Color(chartInstance, &c2_st, c2_c_this, &c2_b_varargin_3);
  c2_array_uint8_T_2D_Destructor(chartInstance, &c2_b_varargin_3);
  c2_st.site = &c2_i_emlrtRSI;
  c2_e_this = c2_c_this;
  c2_b_st.site = &c2_m_emlrtRSI;
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_xyzPoints);
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_b_st, &c2_xyzPoints,
    &c2_ob_emlrtRTEI, c2_e_this->Location.size[0], 3);
  c2_c_loop_ub = c2_e_this->Location.size[0] * 3 - 1;
  for (c2_i2 = 0; c2_i2 <= c2_c_loop_ub; c2_i2++) {
    c2_xyzPoints.vector.data[c2_i2] = c2_e_this->Location.vector.data[c2_i2];
  }

  c2_b_b = (c2_varargin_5->size[0] == 0);
  c2_b1 = (c2_varargin_5->size[1] == 0);
  if ((!c2_b_b) && (!c2_b1)) {
    for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
      c2_b_varargin_1[c2_i3] = (real_T)c2_varargin_5->size[c2_i3];
    }

    for (c2_i4 = 0; c2_i4 < 2; c2_i4++) {
      c2_varargin_2[c2_i4] = (real_T)c2_xyzPoints.size[c2_i4];
    }

    c2_p = false;
    c2_b_p = true;
    c2_k = 0;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_k < 2)) {
      c2_b_k = (real_T)c2_k + 1.0;
      c2_x1 = c2_b_varargin_1[(int32_T)c2_b_k - 1];
      c2_x2 = c2_varargin_2[(int32_T)c2_b_k - 1];
      c2_c_p = (c2_x1 == c2_x2);
      if (!c2_c_p) {
        c2_b_p = false;
        c2_exitg1 = true;
      } else {
        c2_k++;
      }
    }

    if (c2_b_p) {
      c2_p = true;
    }

    if (!c2_p) {
      c2_b2 = true;
    } else {
      c2_b2 = false;
    }
  } else {
    c2_b2 = false;
  }

  if (c2_b2) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 36),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 36),
                  false);
    sf_mex_call(&c2_b_st, &c2_b_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_b_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
  }

  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, &c2_e_this->Normal,
    &c2_f_emlrtRTEI, c2_varargin_5->size[0], c2_varargin_5->size[1]);
  c2_d_loop_ub = c2_varargin_5->size[0] * c2_varargin_5->size[1] - 1;
  for (c2_i5 = 0; c2_i5 <= c2_d_loop_ub; c2_i5++) {
    c2_e_this->Normal.vector.data[c2_i5] = c2_varargin_5->vector.data[c2_i5];
  }

  c2_st.site = &c2_j_emlrtRSI;
  c2_f_this = c2_c_this;
  c2_b_st.site = &c2_sb_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_b_st, &c2_xyzPoints,
    &c2_pb_emlrtRTEI, c2_f_this->Location.size[0], 3);
  c2_e_loop_ub = c2_f_this->Location.size[0] * 3 - 1;
  for (c2_i6 = 0; c2_i6 <= c2_e_loop_ub; c2_i6++) {
    c2_xyzPoints.vector.data[c2_i6] = c2_f_this->Location.vector.data[c2_i6];
  }

  c2_b3 = (c2_varargin_7->size[0] == 0);
  c2_b4 = (c2_varargin_7->size[1] == 0);
  if ((!c2_b3) && (!c2_b4)) {
    if (c2_varargin_7->size[1] == 1) {
      c2_d_p = true;
    } else {
      c2_d_p = false;
    }

    c2_e_p = c2_d_p;
    if (c2_e_p && (c2_varargin_7->size[0] == c2_xyzPoints.size[0]) &&
        (c2_varargin_7->size[1] == 1)) {
      c2_b5 = true;
    } else {
      c2_b5 = false;
    }

    if (!c2_b5) {
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1,
        39), false);
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1,
        39), false);
      sf_mex_call(&c2_b_st, &c2_o_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                  sf_mex_call(&c2_b_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_b_st, NULL, "message", 1U, 1U, 14, c2_e_y)));
    }
  }

  c2_array_real32_T_2D_Destructor(chartInstance, &c2_xyzPoints);
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, &c2_f_this->Intensity,
    &c2_g_emlrtRTEI, c2_varargin_7->size[0], c2_varargin_7->size[1]);
  c2_f_loop_ub = c2_varargin_7->size[0] * c2_varargin_7->size[1] - 1;
  for (c2_i7 = 0; c2_i7 <= c2_f_loop_ub; c2_i7++) {
    c2_f_this->Intensity.vector.data[c2_i7] = c2_varargin_7->vector.data[c2_i7];
  }

  c2_rangeData_data.vector.numel = c2_rangeData_size[0] * c2_rangeData_size[1];
  c2_rangeData_data.vector.allocated = c2_rangeData_data.vector.numel;
  c2_rangeData_data.vector.owner = false;
  c2_rangeData_data.size[0] = c2_rangeData_size[0];
  c2_rangeData_data.size[1] = c2_rangeData_size[1];
  c2_st.site = &c2_k_emlrtRSI;
  c2_pointCloudBase_set_RangeData(chartInstance, &c2_st, c2_c_this,
    &c2_rangeData_data);
  return c2_c_this;
}

static void c2_pointCloudBase_set_Color(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_pointCloud_2 *c2_b_this, c2_coder_array_uint8_T_2D
  *c2_value)
{
  static char_T c2_b_cv1[57] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 's', 's', 'e', 'r', 't',
    '_', 'v', 'a', 'l', 'i', 'd', '_', 's', 'i', 'z', 'e', '_', 'a', 'r', 'g',
    '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'z', 'e', 'V', 'e', 'c',
    't', 'o', 'r' };

  static char_T c2_b_cv[35] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'p', 'o', 'i',
    'n', 't', 'c', 'l', 'o', 'u', 'd', ':', 'u', 'n', 'm', 'a', 't', 'c', 'h',
    'e', 'd', 'X', 'Y', 'Z', 'C', 'o', 'l', 'o', 'r' };

  static char_T c2_b_cv2[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  static char_T c2_cv3[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm', 'a',
    'x', 's', 'i', 'z', 'e' };

  c2_coder_array_boolean_T c2_tile;
  c2_coder_array_real32_T_2D c2_xyzPoints;
  c2_coder_array_uint8_T_2D c2_b_value;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  real_T c2_numPoints[2];
  real_T c2_varargin_2[2];
  real_T c2_b_k;
  real_T c2_b_x1;
  real_T c2_b_x2;
  real_T c2_d_k;
  real_T c2_f_k;
  real_T c2_h_k;
  real_T c2_n;
  real_T c2_x1;
  real_T c2_x2;
  int32_T c2_outsize[2];
  int32_T c2_b_itilerow;
  int32_T c2_b_jcol;
  int32_T c2_b_loop_ub;
  int32_T c2_b_u;
  int32_T c2_c_b;
  int32_T c2_c_k;
  int32_T c2_c_loop_ub;
  int32_T c2_d_b;
  int32_T c2_d_loop_ub;
  int32_T c2_e_b;
  int32_T c2_e_k;
  int32_T c2_exitg2;
  int32_T c2_f_b;
  int32_T c2_g_b;
  int32_T c2_g_k;
  int32_T c2_h_b;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_i4;
  int32_T c2_i5;
  int32_T c2_i6;
  int32_T c2_i7;
  int32_T c2_i_k;
  int32_T c2_iacol;
  int32_T c2_ibcol;
  int32_T c2_ibmat;
  int32_T c2_itilerow;
  int32_T c2_j_k;
  int32_T c2_jcol;
  int32_T c2_k;
  int32_T c2_loop_ub;
  int32_T c2_ncols;
  int32_T c2_nrows;
  int32_T c2_ntilerows;
  int32_T c2_u;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b_b;
  boolean_T c2_b_overflow;
  boolean_T c2_b_p;
  boolean_T c2_c_overflow;
  boolean_T c2_c_p;
  boolean_T c2_d_p;
  boolean_T c2_e_p;
  boolean_T c2_exitg1;
  boolean_T c2_f_p;
  boolean_T c2_isInputScalarRGBTriplet;
  boolean_T c2_overflow;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_array_uint8_T_2D_Constructor(chartInstance, &c2_b_value);
  c2_st.site = &c2_l_emlrtRSI;
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_xyzPoints);
  c2_b_st.site = &c2_l_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_b_st, &c2_xyzPoints,
    &c2_qb_emlrtRTEI, c2_b_this->Location.size[0], 3);
  c2_loop_ub = c2_b_this->Location.size[0] * 3 - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_xyzPoints.vector.data[c2_i] = c2_b_this->Location.vector.data[c2_i];
  }

  for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
    c2_numPoints[c2_i1] = (real_T)c2_value->size[c2_i1];
  }

  c2_isInputScalarRGBTriplet = false;
  c2_p = true;
  c2_k = 0;
  c2_exitg1 = false;
  while ((!c2_exitg1) && (c2_k < 2)) {
    c2_b_k = (real_T)c2_k + 1.0;
    c2_x1 = c2_numPoints[(int32_T)c2_b_k - 1];
    c2_x2 = 1.0 + 2.0 * (real_T)((int32_T)c2_b_k - 1);
    c2_b_p = (c2_x1 == c2_x2);
    if (!c2_b_p) {
      c2_p = false;
      c2_exitg1 = true;
    } else {
      c2_k++;
    }
  }

  if (c2_p) {
    c2_isInputScalarRGBTriplet = true;
  }

  if (c2_isInputScalarRGBTriplet) {
    c2_numPoints[0] = (real_T)c2_xyzPoints.size[0];
    c2_numPoints[1] = 1.0;
    c2_b_st.site = &c2_mb_emlrtRSI;
    c2_c_st.site = &c2_nb_emlrtRSI;
    c2_c_k = 0;
    do {
      c2_exitg2 = 0;
      if (c2_c_k < 2) {
        c2_d_k = (real_T)c2_c_k + 1.0;
        if (c2_numPoints[(int32_T)c2_d_k - 1] != c2_numPoints[(int32_T)c2_d_k -
            1]) {
          c2_e_p = false;
          c2_exitg2 = 1;
        } else {
          c2_c_k++;
        }
      } else {
        c2_e_p = true;
        c2_exitg2 = 1;
      }
    } while (c2_exitg2 == 0);

    if (c2_e_p) {
      c2_b3 = true;
    } else {
      c2_b3 = false;
    }

    if (!c2_b3) {
      c2_d_y = NULL;
      sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1,
        57), false);
      c2_e_y = NULL;
      sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1,
        57), false);
      c2_u = MIN_int32_T;
      c2_g_y = NULL;
      sf_mex_assign(&c2_g_y, sf_mex_create("y", &c2_u, 6, 0U, 0, 0U, 0), false);
      c2_b_u = MAX_int32_T;
      c2_i_y = NULL;
      sf_mex_assign(&c2_i_y, sf_mex_create("y", &c2_b_u, 6, 0U, 0, 0U, 0), false);
      sf_mex_call(&c2_c_st, &c2_m_emlrtMCI, "error", 0U, 2U, 14, c2_d_y, 14,
                  sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_c_st, NULL, "message", 1U, 3U, 14, c2_e_y, 14, c2_g_y,
                    14, c2_i_y)));
    }

    c2_n = 1.0;
    for (c2_g_k = 0; c2_g_k < 2; c2_g_k++) {
      c2_h_k = (real_T)c2_g_k + 1.0;
      if (c2_numPoints[(int32_T)c2_h_k - 1] <= 0.0) {
        c2_n = 0.0;
      } else {
        c2_n *= c2_numPoints[(int32_T)c2_h_k - 1];
      }
    }

    if (!(c2_n <= 2.147483647E+9)) {
      c2_f_y = NULL;
      sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2, 1,
        21), false);
      c2_h_y = NULL;
      sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2, 1,
        21), false);
      sf_mex_call(&c2_c_st, &c2_n_emlrtMCI, "error", 0U, 2U, 14, c2_f_y, 14,
                  sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
        sf_mex_call(&c2_c_st, NULL, "message", 1U, 1U, 14, c2_h_y)));
    }

    c2_array_boolean_T_Constructor(chartInstance, &c2_tile);
    c2_array_boolean_T_SetSize(chartInstance, &c2_b_st, &c2_tile,
      &c2_sb_emlrtRTEI, (int32_T)c2_numPoints[0]);
    c2_d_loop_ub = (int32_T)c2_numPoints[0] - 1;
    for (c2_i6 = 0; c2_i6 <= c2_d_loop_ub; c2_i6++) {
      c2_tile.vector.data[c2_i6] = false;
    }

    c2_outsize[0] = c2_value->size[0] * c2_tile.size[0];
    if (!((real_T)c2_outsize[0] == (real_T)c2_value->size[0] * (real_T)
          c2_tile.size[0])) {
      c2_j_y = NULL;
      sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_cv3, 10, 0U, 1, 0U, 2, 1, 15),
                    false);
      sf_mex_call(&c2_b_st, &c2_k_emlrtMCI, "error", 0U, 1U, 14, c2_j_y);
    }

    c2_outsize[1] = c2_value->size[1];
    if (c2_outsize[1] != c2_value->size[1]) {
      c2_k_y = NULL;
      sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv3, 10, 0U, 1, 0U, 2, 1, 15),
                    false);
      sf_mex_call(&c2_b_st, &c2_k_emlrtMCI, "error", 0U, 1U, 14, c2_k_y);
    }

    c2_array_uint8_T_2D_SetSize(chartInstance, &c2_b_st, &c2_b_value,
      &c2_tb_emlrtRTEI, c2_outsize[0], c2_outsize[1]);
    c2_nrows = c2_value->size[0];
    c2_ncols = c2_value->size[1];
    c2_ntilerows = c2_tile.size[0];
    c2_array_boolean_T_Destructor(chartInstance, &c2_tile);
    c2_c_st.site = &c2_ob_emlrtRSI;
    c2_c_b = c2_ncols;
    c2_d_b = c2_c_b;
    if (c2_d_b < 1) {
      c2_overflow = false;
    } else {
      c2_overflow = (c2_d_b > 2147483646);
    }

    if (c2_overflow) {
      c2_d_st.site = &c2_rb_emlrtRSI;
      c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
    }

    c2_i7 = (uint8_T)c2_ncols;
    for (c2_jcol = 0; c2_jcol < c2_i7; c2_jcol++) {
      c2_b_jcol = c2_jcol;
      c2_iacol = c2_b_jcol * c2_nrows - 1;
      c2_ibmat = c2_b_jcol * (c2_nrows * c2_ntilerows);
      c2_c_st.site = &c2_pb_emlrtRSI;
      c2_e_b = c2_ntilerows;
      c2_f_b = c2_e_b;
      if (c2_f_b < 1) {
        c2_b_overflow = false;
      } else {
        c2_b_overflow = (c2_f_b > 2147483646);
      }

      if (c2_b_overflow) {
        c2_d_st.site = &c2_rb_emlrtRSI;
        c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
      }

      for (c2_itilerow = 0; c2_itilerow < c2_ntilerows; c2_itilerow++) {
        c2_b_itilerow = c2_itilerow;
        c2_ibcol = (c2_ibmat + c2_b_itilerow * c2_nrows) - 1;
        c2_c_st.site = &c2_qb_emlrtRSI;
        c2_g_b = c2_nrows;
        c2_h_b = c2_g_b;
        if (c2_h_b < 1) {
          c2_c_overflow = false;
        } else {
          c2_c_overflow = (c2_h_b > 2147483646);
        }

        if (c2_c_overflow) {
          c2_d_st.site = &c2_rb_emlrtRSI;
          c2_check_forloop_overflow_error(chartInstance, &c2_d_st);
        }

        for (c2_i_k = 0; c2_i_k < c2_nrows; c2_i_k++) {
          c2_j_k = c2_i_k + 1;
          c2_b_value.vector.data[c2_ibcol + c2_j_k] = c2_value->
            vector.data[c2_iacol + c2_j_k];
        }
      }
    }
  } else {
    c2_b_b = (c2_value->size[0] == 0);
    c2_b1 = (c2_value->size[1] == 0);
    if ((!c2_b_b) && (!c2_b1)) {
      for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
        c2_numPoints[c2_i2] = (real_T)c2_value->size[c2_i2];
      }

      for (c2_i3 = 0; c2_i3 < 2; c2_i3++) {
        c2_varargin_2[c2_i3] = (real_T)c2_xyzPoints.size[c2_i3];
      }

      c2_c_p = false;
      c2_d_p = true;
      c2_e_k = 0;
      c2_exitg1 = false;
      while ((!c2_exitg1) && (c2_e_k < 2)) {
        c2_f_k = (real_T)c2_e_k + 1.0;
        c2_b_x1 = c2_numPoints[(int32_T)c2_f_k - 1];
        c2_b_x2 = c2_varargin_2[(int32_T)c2_f_k - 1];
        c2_f_p = (c2_b_x1 == c2_b_x2);
        if (!c2_f_p) {
          c2_d_p = false;
          c2_exitg1 = true;
        } else {
          c2_e_k++;
        }
      }

      if (c2_d_p) {
        c2_c_p = true;
      }

      if (!c2_c_p) {
        c2_b2 = true;
      } else {
        c2_b2 = false;
      }
    } else {
      c2_b2 = false;
    }

    if (c2_b2) {
      c2_b_y = NULL;
      sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 35),
                    false);
      c2_c_y = NULL;
      sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 35),
                    false);
      sf_mex_call(&c2_st, &c2_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                  sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
        (&c2_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
    }

    c2_array_uint8_T_2D_SetSize(chartInstance, &c2_st, &c2_b_value,
      &c2_rb_emlrtRTEI, c2_value->size[0], c2_value->size[1]);
    c2_b_loop_ub = c2_value->size[0] * c2_value->size[1] - 1;
    for (c2_i4 = 0; c2_i4 <= c2_b_loop_ub; c2_i4++) {
      c2_b_value.vector.data[c2_i4] = c2_value->vector.data[c2_i4];
    }
  }

  c2_array_real32_T_2D_Destructor(chartInstance, &c2_xyzPoints);
  c2_st.site = &c2_l_emlrtRSI;
  c2_array_uint8_T_2D_SetSize(chartInstance, &c2_st, &c2_b_this->Color,
    &c2_e_emlrtRTEI, c2_b_value.size[0], c2_b_value.size[1]);
  c2_c_loop_ub = c2_b_value.size[0] * c2_b_value.size[1] - 1;
  for (c2_i5 = 0; c2_i5 <= c2_c_loop_ub; c2_i5++) {
    c2_b_this->Color.vector.data[c2_i5] = c2_b_value.vector.data[c2_i5];
  }

  c2_array_uint8_T_2D_Destructor(chartInstance, &c2_b_value);
}

static void c2_check_forloop_overflow_error(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp)
{
  static char_T c2_b_cv[34] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'i', 'n', 't', '_', 'f', 'o', 'r', 'l', 'o', 'o', 'p',
    '_', 'o', 'v', 'e', 'r', 'f', 'l', 'o', 'w' };

  static char_T c2_b_cv1[5] = { 'i', 'n', 't', '3', '2' };

  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  (void)chartInstance;
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 34),
                false);
  c2_c_y = NULL;
  sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 34),
                false);
  c2_d_y = NULL;
  sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1, 5),
                false);
  sf_mex_call(c2_sp, &c2_l_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
              sf_mex_call(c2_sp, NULL, "getString", 1U, 1U, 14, sf_mex_call
    (c2_sp, NULL, "message", 1U, 2U, 14, c2_c_y, 14, c2_d_y)));
}

static void c2_pointCloudBase_set_RangeData(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud_2 *c2_b_this,
  c2_coder_array_real32_T_2D *c2_value)
{
  static char_T c2_b_cv[35] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'p', 'o', 'i',
    'n', 't', 'c', 'l', 'o', 'u', 'd', ':', 'u', 'n', 'm', 'a', 't', 'c', 'h',
    'e', 'd', 'X', 'Y', 'Z', 'R', 'a', 'n', 'g', 'e' };

  c2_coder_array_real32_T_2D c2_xyzPoints;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  real_T c2_varargin_1[2];
  real_T c2_varargin_2[2];
  real_T c2_b_k;
  real_T c2_x1;
  real_T c2_x2;
  int32_T c2_b_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
  int32_T c2_k;
  int32_T c2_loop_ub;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b_b;
  boolean_T c2_b_p;
  boolean_T c2_c_p;
  boolean_T c2_exitg1;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_st.site = &c2_n_emlrtRSI;
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_xyzPoints);
  c2_b_st.site = &c2_n_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_b_st, &c2_xyzPoints,
    &c2_ub_emlrtRTEI, c2_b_this->Location.size[0], 3);
  c2_loop_ub = c2_b_this->Location.size[0] * 3 - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_xyzPoints.vector.data[c2_i] = c2_b_this->Location.vector.data[c2_i];
  }

  c2_b_b = (c2_value->size[0] == 0);
  c2_b1 = (c2_value->size[1] == 0);
  if ((!c2_b_b) && (!c2_b1)) {
    for (c2_i1 = 0; c2_i1 < 2; c2_i1++) {
      c2_varargin_1[c2_i1] = (real_T)c2_value->size[c2_i1];
    }

    for (c2_i2 = 0; c2_i2 < 2; c2_i2++) {
      c2_varargin_2[c2_i2] = (real_T)c2_xyzPoints.size[c2_i2];
    }

    c2_p = false;
    c2_b_p = true;
    c2_k = 0;
    c2_exitg1 = false;
    while ((!c2_exitg1) && (c2_k < 2)) {
      c2_b_k = (real_T)c2_k + 1.0;
      c2_x1 = c2_varargin_1[(int32_T)c2_b_k - 1];
      c2_x2 = c2_varargin_2[(int32_T)c2_b_k - 1];
      c2_c_p = (c2_x1 == c2_x2);
      if (!c2_c_p) {
        c2_b_p = false;
        c2_exitg1 = true;
      } else {
        c2_k++;
      }
    }

    if (c2_b_p) {
      c2_p = true;
    }

    if (!c2_p) {
      c2_b2 = true;
    } else {
      c2_b2 = false;
    }
  } else {
    c2_b2 = false;
  }

  c2_array_real32_T_2D_Destructor(chartInstance, &c2_xyzPoints);
  if (c2_b2) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 35),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1, 35),
                  false);
    sf_mex_call(&c2_st, &c2_c_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
  }

  c2_st.site = &c2_n_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st, &c2_b_this->RangeData,
    &c2_h_emlrtRTEI, c2_value->size[0], c2_value->size[1]);
  c2_b_loop_ub = c2_value->size[0] * c2_value->size[1] - 1;
  for (c2_i3 = 0; c2_i3 <= c2_b_loop_ub; c2_i3++) {
    c2_b_this->RangeData.vector.data[c2_i3] = c2_value->vector.data[c2_i3];
  }
}

static void c2_b_indexShapeCheck(SFc2_modelInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_matrixSize, int32_T c2_indexSize[2])
{
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  int32_T c2_size1;
  boolean_T c2_b_b;
  boolean_T c2_b_c;
  boolean_T c2_c;
  boolean_T c2_c_b;
  boolean_T c2_nonSingletonDimFound;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_size1 = c2_matrixSize;
  if (c2_size1 != 1) {
    c2_b_b = false;
  } else {
    c2_b_b = true;
  }

  if (c2_b_b) {
    c2_nonSingletonDimFound = false;
    if (c2_indexSize[1] != 1) {
      c2_nonSingletonDimFound = true;
    }

    c2_c_b = c2_nonSingletonDimFound;
    if (c2_c_b) {
      c2_c = true;
    } else {
      c2_c = false;
    }
  } else {
    c2_c = false;
  }

  c2_st.site = &c2_wb_emlrtRSI;
  c2_b_c = c2_c;
  if (c2_b_c) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv2, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv2, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c2_st, &c2_j_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
  }
}

static void c2_pcsegdistApproximateImpl(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_pointCloud_2 *c2_b_pc, c2_coder_array_uint32_T
  *c2_L)
{
  static char_T c2_b_cv2[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't',
    't', 'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e',
    'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c2_cv5[46] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'V', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'a', 't', 't',
    'r', 'i', 'b', 'u', 't', 'e', 's', 'e', 'x', 'p', 'e', 'c', 't', 'e', 'd',
    'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c2_cv8[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o', 'l',
    'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i', 'n',
    'E', 'r', 'r', 'o', 'r' };

  static char_T c2_cv7[27] = { 'v', 'i', 's', 'i', 'o', 'n', ':', 'o', 'c', 'v',
    'S', 'h', 'a', 'r', 'e', 'd', ':', 'e', 'm', 'p', 't', 'y', 'I', 'n', 'p',
    'u', 't' };

  static char_T c2_b_cv[21] = { 'f', 'i', 'n', 'd', 'N', 'e', 'i', 'g', 'h', 'b',
    'o', 'r', 's', 'I', 'n', 'R', 'a', 'd', 'i', 'u', 's' };

  static char_T c2_b_cv1[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x',
    'p', 'e', 'c', 't', 'e', 'd', 'N', 'o', 'n', 'N', 'a', 'N' };

  static char_T c2_cv4[21] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'e', 'x', 'p',
    'e', 'c', 't', 'e', 'd', 'F', 'i', 'n', 'i', 't', 'e' };

  static char_T c2_cv3[5] = { 'p', 'o', 'i', 'n', 't' };

  static char_T c2_cv6[5] = { 'p', 'o', 'i', 'n', 't' };

  static char_T c2_cv9[4] = { 's', 'q', 'r', 't' };

  void *c2_b_kdtreeObj;
  void *c2_b_locationPtr;
  void *c2_c_kdtreeObj;
  void *c2_c_locationPtr;
  void *c2_kdtreeObj;
  void *c2_locationPtr;
  void *c2_ptrDists;
  void *c2_ptrIndices;
  void *c2_ptrObj;
  c2_coder_array_boolean_T c2_b_b;
  c2_coder_array_boolean_T c2_isFinite;
  c2_coder_array_boolean_T_2D c2_b_x;
  c2_coder_array_int32_T c2_b_r;
  c2_coder_array_int32_T c2_r2;
  c2_coder_array_int32_T c2_r3;
  c2_coder_array_int32_T_2D c2_ii;
  c2_coder_array_real32_T c2_dists_;
  c2_coder_array_real32_T_2D c2_allDists;
  c2_coder_array_real32_T_2D c2_location;
  c2_coder_array_real32_T_2D c2_r1;
  c2_coder_array_real_T_2D c2_b_i;
  c2_coder_array_uint32_T c2_indices_;
  c2_pointCloud_2 *c2_b_this;
  c2_pointCloud_2 *c2_c_this;
  c2_pointCloud_2 *c2_d_this;
  c2_pointCloud_2 *c2_e_this;
  c2_pointCloud_2 *c2_f_this;
  c2_pointCloud_2 *c2_g_this;
  c2_pointCloud_2 *c2_h_this;
  c2_pointCloud_2 *c2_i_this;
  c2_pointCloud_2 *c2_j_this;
  c2_pointCloud_2 *c2_k_this;
  c2_pointCloud_2 *c2_l_this;
  c2_pointCloud_2 *c2_m_this;
  emlrtStack c2_b_st;
  emlrtStack c2_c_st;
  emlrtStack c2_d_st;
  emlrtStack c2_e_st;
  emlrtStack c2_f_st;
  emlrtStack c2_g_st;
  emlrtStack c2_h_st;
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  const mxArray *c2_d_y = NULL;
  const mxArray *c2_e_y = NULL;
  const mxArray *c2_f_y = NULL;
  const mxArray *c2_g_y = NULL;
  const mxArray *c2_h_y = NULL;
  const mxArray *c2_i_y = NULL;
  const mxArray *c2_j_y = NULL;
  const mxArray *c2_k_y = NULL;
  const mxArray *c2_l_y = NULL;
  const mxArray *c2_o_y = NULL;
  const mxArray *c2_p_y = NULL;
  const mxArray *c2_q_y = NULL;
  const mxArray *c2_r_y = NULL;
  const mxArray *c2_s_y = NULL;
  real_T c2_N2;
  real_T c2_b_count;
  real_T c2_b_dataSize;
  real_T c2_b_k;
  real_T c2_b_newLabel;
  real_T c2_c_newLabel;
  real_T c2_count;
  real_T c2_d;
  real_T c2_d1;
  real_T c2_d2;
  real_T c2_d3;
  real_T c2_d4;
  real_T c2_d5;
  real_T c2_d_i;
  real_T c2_d_k;
  real_T c2_f_i;
  real_T c2_g_k;
  real_T c2_i_k;
  real_T c2_m_y;
  real_T c2_n_y;
  real_T c2_newLabel;
  real_T c2_numPoints2;
  int32_T c2_iv[1];
  int32_T c2_b_L;
  int32_T c2_b_allDists;
  int32_T c2_b_end;
  int32_T c2_b_ii;
  int32_T c2_b_loop_ub;
  int32_T c2_b_nx;
  int32_T c2_b_partialTrueCount;
  int32_T c2_b_trueCount;
  int32_T c2_c_end;
  int32_T c2_c_i;
  int32_T c2_c_ii;
  int32_T c2_c_k;
  int32_T c2_c_loop_ub;
  int32_T c2_c_nx;
  int32_T c2_c_partialTrueCount;
  int32_T c2_c_trueCount;
  int32_T c2_d_L;
  int32_T c2_d_end;
  int32_T c2_d_loop_ub;
  int32_T c2_d_partialTrueCount;
  int32_T c2_d_trueCount;
  int32_T c2_e_i;
  int32_T c2_e_k;
  int32_T c2_e_loop_ub;
  int32_T c2_end;
  int32_T c2_f_L;
  int32_T c2_f_k;
  int32_T c2_f_loop_ub;
  int32_T c2_g_i;
  int32_T c2_g_loop_ub;
  int32_T c2_h_b;
  int32_T c2_h_i;
  int32_T c2_h_k;
  int32_T c2_h_loop_ub;
  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i10;
  int32_T c2_i11;
  int32_T c2_i12;
  int32_T c2_i13;
  int32_T c2_i14;
  int32_T c2_i15;
  int32_T c2_i16;
  int32_T c2_i17;
  int32_T c2_i18;
  int32_T c2_i19;
  int32_T c2_i2;
  int32_T c2_i20;
  int32_T c2_i21;
  int32_T c2_i22;
  int32_T c2_i23;
  int32_T c2_i24;
  int32_T c2_i25;
  int32_T c2_i26;
  int32_T c2_i27;
  int32_T c2_i28;
  int32_T c2_i29;
  int32_T c2_i3;
  int32_T c2_i30;
  int32_T c2_i31;
  int32_T c2_i32;
  int32_T c2_i33;
  int32_T c2_i34;
  int32_T c2_i35;
  int32_T c2_i36;
  int32_T c2_i37;
  int32_T c2_i38;
  int32_T c2_i39;
  int32_T c2_i4;
  int32_T c2_i40;
  int32_T c2_i41;
  int32_T c2_i42;
  int32_T c2_i43;
  int32_T c2_i44;
  int32_T c2_i45;
  int32_T c2_i46;
  int32_T c2_i47;
  int32_T c2_i48;
  int32_T c2_i49;
  int32_T c2_i5;
  int32_T c2_i50;
  int32_T c2_i51;
  int32_T c2_i52;
  int32_T c2_i53;
  int32_T c2_i54;
  int32_T c2_i55;
  int32_T c2_i56;
  int32_T c2_i57;
  int32_T c2_i58;
  int32_T c2_i59;
  int32_T c2_i6;
  int32_T c2_i60;
  int32_T c2_i61;
  int32_T c2_i7;
  int32_T c2_i8;
  int32_T c2_i9;
  int32_T c2_i_b;
  int32_T c2_i_i;
  int32_T c2_i_loop_ub;
  int32_T c2_idx;
  int32_T c2_j_b;
  int32_T c2_j_i;
  int32_T c2_j_loop_ub;
  int32_T c2_k;
  int32_T c2_k_b;
  int32_T c2_k_i;
  int32_T c2_k_loop_ub;
  int32_T c2_l_i;
  int32_T c2_l_loop_ub;
  int32_T c2_loop_ub;
  int32_T c2_m_i;
  int32_T c2_m_loop_ub;
  int32_T c2_n_i;
  int32_T c2_n_loop_ub;
  int32_T c2_nx;
  int32_T c2_o_loop_ub;
  int32_T c2_p_loop_ub;
  int32_T c2_partialTrueCount;
  int32_T c2_trueCount;
  real32_T c2_varargin_1[3];
  real32_T c2_c_x;
  real32_T c2_d_x;
  real32_T c2_e_x;
  real32_T c2_f_x;
  real32_T c2_g_x;
  uint32_T c2_c_L;
  uint32_T c2_dataSize;
  uint32_T c2_e_L;
  uint32_T c2_h_x;
  uint32_T c2_i_x;
  uint32_T c2_j;
  uint32_T c2_j_x;
  uint32_T c2_k_x;
  uint32_T c2_l_x;
  uint32_T c2_m_x;
  uint32_T c2_n_x;
  uint32_T c2_numFeatures2;
  uint32_T c2_o_x;
  uint32_T c2_p_x;
  uint32_T c2_q_x;
  uint32_T c2_r_x;
  uint32_T c2_s_x;
  uint32_T c2_u;
  uint32_T c2_u1;
  uint32_T c2_u2;
  uint32_T c2_valid;
  boolean_T c2_b1;
  boolean_T c2_b2;
  boolean_T c2_b3;
  boolean_T c2_b4;
  boolean_T c2_b5;
  boolean_T c2_b_overflow;
  boolean_T c2_b_p;
  boolean_T c2_c_b;
  boolean_T c2_c_p;
  boolean_T c2_createIndex;
  boolean_T c2_d_b;
  boolean_T c2_d_p;
  boolean_T c2_e_b;
  boolean_T c2_e_p;
  boolean_T c2_exitg1;
  boolean_T c2_f_b;
  boolean_T c2_g_b;
  boolean_T c2_guard1;
  boolean_T c2_isIndexed;
  boolean_T c2_n;
  boolean_T c2_numOut;
  boolean_T c2_overflow;
  boolean_T c2_p;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_c_st.prev = &c2_b_st;
  c2_c_st.tls = c2_b_st.tls;
  c2_d_st.prev = &c2_c_st;
  c2_d_st.tls = c2_c_st.tls;
  c2_e_st.prev = &c2_d_st;
  c2_e_st.tls = c2_d_st.tls;
  c2_f_st.prev = &c2_e_st;
  c2_f_st.tls = c2_e_st.tls;
  c2_g_st.prev = &c2_f_st;
  c2_g_st.tls = c2_f_st.tls;
  c2_h_st.prev = &c2_g_st;
  c2_h_st.tls = c2_g_st.tls;
  c2_st.site = &c2_xb_emlrtRSI;
  c2_b_this = c2_b_pc;
  c2_count = (real_T)c2_b_this->Location.size[0];
  c2_st.site = &c2_xb_emlrtRSI;
  c2_array_uint32_T_SetSize(chartInstance, &c2_st, c2_L, &c2_vb_emlrtRTEI,
    (int32_T)c2_count);
  c2_loop_ub = (int32_T)c2_count - 1;
  for (c2_i = 0; c2_i <= c2_loop_ub; c2_i++) {
    c2_L->vector.data[c2_i] = 0U;
  }

  c2_newLabel = 0.0;
  c2_st.site = &c2_yb_emlrtRSI;
  c2_c_this = c2_b_pc;
  c2_d = (real_T)c2_c_this->Location.size[0];
  c2_i1 = (int32_T)c2_d;
  c2_array_int32_T_Constructor(chartInstance, &c2_b_r);
  c2_array_uint32_T_Constructor(chartInstance, &c2_indices_);
  c2_array_real32_T_Constructor(chartInstance, &c2_dists_);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_allDists);
  c2_array_boolean_T_Constructor(chartInstance, &c2_isFinite);
  c2_array_real_T_2D_Constructor(chartInstance, &c2_b_i);
  c2_array_boolean_T_2D_Constructor(chartInstance, &c2_b_x);
  c2_array_int32_T_2D_Constructor(chartInstance, &c2_ii);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_location);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_r1);
  c2_array_boolean_T_Constructor(chartInstance, &c2_b_b);
  c2_array_int32_T_Constructor(chartInstance, &c2_r2);
  c2_array_int32_T_Constructor(chartInstance, &c2_r3);
  for (c2_c_i = 0; c2_c_i < c2_i1; c2_c_i++) {
    c2_d_i = (real_T)c2_c_i + 1.0;
    c2_i2 = c2_L->size[0];
    c2_i3 = (int32_T)c2_d_i;
    if ((c2_i3 < 1) || (c2_i3 > c2_i2)) {
      emlrtDynamicBoundsCheckR2012b(c2_i3, 1, c2_i2, &c2_g_emlrtBCI,
        (emlrtConstCTX)c2_sp);
    }

    if (c2_L->vector.data[c2_i3 - 1] == 0U) {
      c2_st.site = &c2_ac_emlrtRSI;
      c2_d_this = c2_b_pc;
      c2_i4 = c2_b_pc->Location.size[0];
      c2_i5 = (int32_T)c2_d_i;
      if ((c2_i5 < 1) || (c2_i5 > c2_i4)) {
        emlrtDynamicBoundsCheckR2012b(c2_i5, 1, c2_i4, &c2_f_emlrtBCI, &c2_st);
      }

      c2_e_i = c2_i5 - 1;
      for (c2_i6 = 0; c2_i6 < 3; c2_i6++) {
        c2_varargin_1[c2_i6] = c2_b_pc->Location.vector.data[c2_e_i +
          c2_b_pc->Location.size[0] * c2_i6];
      }

      c2_b_st.site = &c2_cc_emlrtRSI;
      c2_e_this = c2_d_this;
      c2_c_st.site = &c2_dc_emlrtRSI;
      c2_f_this = c2_e_this;
      c2_d_st.site = &c2_u_emlrtRSI;
      c2_g_this = c2_f_this;
      c2_n = (c2_g_this->PointCloudArrayData.size[0] *
              c2_g_this->PointCloudArrayData.size[1] == 1);
      if (!c2_n) {
        c2_b_y = NULL;
        sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv1, 10, 0U, 1, 0U, 2, 1,
          35), false);
        c2_c_y = NULL;
        sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv1, 10, 0U, 1, 0U, 2, 1,
          35), false);
        c2_d_y = NULL;
        sf_mex_assign(&c2_d_y, sf_mex_create("y", c2_b_cv, 10, 0U, 1, 0U, 2, 1,
          21), false);
        sf_mex_call(&c2_c_st, &c2_e_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                    sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_c_y, 14, c2_d_y)));
      }

      c2_c_st.site = &c2_ec_emlrtRSI;
      c2_d_st.site = &c2_jc_emlrtRSI;
      c2_e_st.site = &c2_kc_emlrtRSI;
      c2_f_st.site = &c2_s_emlrtRSI;
      c2_p = true;
      c2_k = 0;
      c2_exitg1 = false;
      while ((!c2_exitg1) && (c2_k < 3)) {
        c2_b_k = (real_T)c2_k + 1.0;
        c2_c_x = c2_varargin_1[(int32_T)c2_b_k - 1];
        c2_d_x = c2_c_x;
        c2_d_b = muSingleScalarIsNaN(c2_d_x);
        c2_b_p = !c2_d_b;
        if (c2_b_p) {
          c2_k++;
        } else {
          c2_p = false;
          c2_exitg1 = true;
        }
      }

      if (c2_p) {
        c2_c_b = true;
      } else {
        c2_c_b = false;
      }

      if (!c2_c_b) {
        c2_e_y = NULL;
        sf_mex_assign(&c2_e_y, sf_mex_create("y", c2_b_cv1, 10, 0U, 1, 0U, 2, 1,
          21), false);
        c2_f_y = NULL;
        sf_mex_assign(&c2_f_y, sf_mex_create("y", c2_b_cv2, 10, 0U, 1, 0U, 2, 1,
          46), false);
        c2_g_y = NULL;
        sf_mex_assign(&c2_g_y, sf_mex_create("y", c2_cv3, 10, 0U, 1, 0U, 2, 1, 5),
                      false);
        sf_mex_call(&c2_f_st, &c2_p_emlrtMCI, "error", 0U, 2U, 14, c2_e_y, 14,
                    sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_f_st, NULL, "message", 1U, 2U, 14, c2_f_y, 14, c2_g_y)));
      }

      c2_f_st.site = &c2_s_emlrtRSI;
      c2_c_p = true;
      c2_c_k = 0;
      c2_exitg1 = false;
      while ((!c2_exitg1) && (c2_c_k < 3)) {
        c2_d_k = (real_T)c2_c_k + 1.0;
        c2_e_x = c2_varargin_1[(int32_T)c2_d_k - 1];
        c2_f_x = c2_e_x;
        c2_e_b = muSingleScalarIsInf(c2_f_x);
        c2_b2 = !c2_e_b;
        c2_g_x = c2_e_x;
        c2_f_b = muSingleScalarIsNaN(c2_g_x);
        c2_b3 = !c2_f_b;
        c2_g_b = (c2_b2 && c2_b3);
        if (c2_g_b) {
          c2_c_k++;
        } else {
          c2_c_p = false;
          c2_exitg1 = true;
        }
      }

      if (c2_c_p) {
        c2_b1 = true;
      } else {
        c2_b1 = false;
      }

      if (!c2_b1) {
        c2_h_y = NULL;
        sf_mex_assign(&c2_h_y, sf_mex_create("y", c2_cv4, 10, 0U, 1, 0U, 2, 1,
          21), false);
        c2_i_y = NULL;
        sf_mex_assign(&c2_i_y, sf_mex_create("y", c2_cv5, 10, 0U, 1, 0U, 2, 1,
          46), false);
        c2_j_y = NULL;
        sf_mex_assign(&c2_j_y, sf_mex_create("y", c2_cv6, 10, 0U, 1, 0U, 2, 1, 5),
                      false);
        sf_mex_call(&c2_f_st, &c2_q_emlrtMCI, "error", 0U, 2U, 14, c2_h_y, 14,
                    sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_f_st, NULL, "message", 1U, 2U, 14, c2_i_y, 14, c2_j_y)));
      }

      c2_c_st.site = &c2_fc_emlrtRSI;
      c2_h_this = c2_e_this;
      c2_b_count = (real_T)c2_h_this->Location.size[0];
      if (c2_b_count < 500.0) {
        c2_c_st.site = &c2_gc_emlrtRSI;
        c2_j_this = c2_e_this;
        c2_d_st.site = &c2_lc_emlrtRSI;
        c2_l_this = c2_j_this;
        c2_numPoints2 = (real_T)c2_l_this->Location.size[0];
        c2_e_st.site = &c2_oc_emlrtRSI;
        c2_array_real32_T_2D_SetSize(chartInstance, &c2_e_st, &c2_location,
          &c2_ac_emlrtRTEI, c2_l_this->Location.size[0], 3);
        c2_c_loop_ub = c2_l_this->Location.size[0] * 3 - 1;
        for (c2_i8 = 0; c2_i8 <= c2_c_loop_ub; c2_i8++) {
          c2_location.vector.data[c2_i8] = c2_l_this->Location.vector.data[c2_i8];
        }

        c2_N2 = c2_numPoints2;
        c2_i9 = c2_location.size[0];
        if (c2_i9 < 0) {
          c2_i9 = 0;
        }

        c2_numFeatures2 = (uint32_T)c2_i9;
        c2_array_real32_T_2D_SetSize(chartInstance, &c2_e_st, &c2_allDists,
          &c2_bc_emlrtRTEI, 1, (int32_T)c2_N2);
        c2_d_loop_ub = (int32_T)c2_N2 - 1;
        for (c2_i11 = 0; c2_i11 <= c2_d_loop_ub; c2_i11++) {
          c2_allDists.vector.data[c2_i11] = 0.0F;
        }

        c2_array_real32_T_2D_SetSize(chartInstance, &c2_e_st, &c2_r1,
          &c2_cc_emlrtRTEI, 3, c2_location.size[0]);
        c2_e_loop_ub = c2_location.size[0] - 1;
        for (c2_i12 = 0; c2_i12 <= c2_e_loop_ub; c2_i12++) {
          for (c2_i13 = 0; c2_i13 < 3; c2_i13++) {
            c2_r1.vector.data[c2_i13 + 3 * c2_i12] =
              c2_location.vector.data[c2_i12 + c2_location.size[0] * c2_i13];
          }
        }

        ComputeMetric_ssd_single(&c2_varargin_1[0], &c2_r1.vector.data[0],
          &c2_allDists.vector.data[0], 1U, c2_numFeatures2, 3U);
        c2_d_st.site = &c2_mc_emlrtRSI;
        c2_e_st.site = &c2_pc_emlrtRSI;
        c2_f_st.site = &c2_qc_emlrtRSI;
        c2_d_st.site = &c2_mc_emlrtRSI;
        c2_array_boolean_T_2D_SetSize(chartInstance, &c2_d_st, &c2_b_x,
          &c2_dc_emlrtRTEI, 1, c2_allDists.size[1]);
        c2_f_loop_ub = c2_allDists.size[1] - 1;
        for (c2_i14 = 0; c2_i14 <= c2_f_loop_ub; c2_i14++) {
          c2_b_x.vector.data[c2_i14] = (c2_allDists.vector.data[c2_i14] <=
            100.0F);
        }

        c2_e_st.site = &c2_tb_emlrtRSI;
        c2_nx = c2_b_x.size[1];
        c2_f_st.site = &c2_ub_emlrtRSI;
        c2_e_k = c2_nx;
        c2_b_nx = c2_nx;
        c2_idx = 0;
        c2_array_int32_T_2D_SetSize(chartInstance, &c2_f_st, &c2_ii,
          &c2_ec_emlrtRTEI, 1, c2_e_k);
        c2_g_st.site = &c2_rc_emlrtRSI;
        c2_h_b = c2_b_nx;
        c2_i_b = c2_h_b;
        if (c2_i_b < 1) {
          c2_overflow = false;
        } else {
          c2_overflow = (c2_i_b > 2147483646);
        }

        if (c2_overflow) {
          c2_h_st.site = &c2_rb_emlrtRSI;
          c2_check_forloop_overflow_error(chartInstance, &c2_h_st);
        }

        c2_b_ii = 1;
        c2_exitg1 = false;
        while ((!c2_exitg1) && (c2_b_ii - 1 <= c2_b_nx - 1)) {
          c2_c_ii = c2_b_ii;
          if (c2_b_x.vector.data[c2_c_ii - 1]) {
            c2_idx++;
            c2_ii.vector.data[c2_idx - 1] = c2_c_ii;
            if (c2_idx >= c2_e_k) {
              c2_exitg1 = true;
            } else {
              c2_b_ii++;
            }
          } else {
            c2_b_ii++;
          }
        }

        if (c2_idx > c2_e_k) {
          c2_p_y = NULL;
          sf_mex_assign(&c2_p_y, sf_mex_create("y", c2_cv, 10, 0U, 1, 0U, 2, 1,
            30), false);
          c2_r_y = NULL;
          sf_mex_assign(&c2_r_y, sf_mex_create("y", c2_cv, 10, 0U, 1, 0U, 2, 1,
            30), false);
          sf_mex_call(&c2_f_st, &c2_s_emlrtMCI, "error", 0U, 2U, 14, c2_p_y, 14,
                      sf_mex_call(&c2_f_st, NULL, "getString", 1U, 1U, 14,
            sf_mex_call(&c2_f_st, NULL, "message", 1U, 1U, 14, c2_r_y)));
        }

        if (c2_e_k == 1) {
          if (c2_idx == 0) {
            c2_array_int32_T_2D_SetSize(chartInstance, &c2_f_st, &c2_ii,
              &c2_y_emlrtRTEI, 1, 0);
          }
        } else {
          c2_b5 = (c2_idx < 1);
          if (c2_b5) {
            c2_i16 = 0;
          } else {
            c2_i16 = c2_idx;
          }

          c2_array_int32_T_2D_SetSize(chartInstance, &c2_f_st, &c2_ii,
            &c2_y_emlrtRTEI, c2_ii.size[0], c2_i16);
        }

        c2_array_real_T_2D_SetSize(chartInstance, &c2_d_st, &c2_b_i,
          &c2_fc_emlrtRTEI, 1, c2_ii.size[1]);
        c2_g_loop_ub = c2_ii.size[1] - 1;
        for (c2_i17 = 0; c2_i17 <= c2_g_loop_ub; c2_i17++) {
          c2_b_i.vector.data[c2_i17] = (real_T)c2_ii.vector.data[c2_i17];
        }

        c2_array_uint32_T_SetSize(chartInstance, &c2_c_st, &c2_indices_,
          &c2_gc_emlrtRTEI, c2_b_i.size[1]);
        c2_h_loop_ub = c2_b_i.size[1] - 1;
        for (c2_i18 = 0; c2_i18 <= c2_h_loop_ub; c2_i18++) {
          c2_d3 = muDoubleScalarRound(c2_b_i.vector.data[c2_i18]);
          if (c2_d3 < 4.294967296E+9) {
            if (c2_d3 >= 0.0) {
              c2_u1 = (uint32_T)c2_d3;
            } else {
              c2_u1 = 0U;
            }
          } else if (c2_d3 >= 4.294967296E+9) {
            c2_u1 = MAX_uint32_T;
          } else {
            c2_u1 = 0U;
          }

          c2_indices_.vector.data[c2_i18] = c2_u1;
        }

        if (c2_indices_.size[0] == 0) {
          c2_array_real32_T_SetSize(chartInstance, &c2_c_st, &c2_dists_,
            &c2_lc_emlrtRTEI, 0);
        } else {
          c2_d_st.site = &c2_nc_emlrtRSI;
          c2_c_indexShapeCheck(chartInstance, &c2_d_st, c2_allDists.size,
                               c2_indices_.size[0]);
          c2_b_allDists = c2_allDists.size[1];
          c2_array_real32_T_SetSize(chartInstance, &c2_c_st, &c2_dists_,
            &c2_hc_emlrtRTEI, c2_indices_.size[0]);
          c2_i_loop_ub = c2_indices_.size[0] - 1;
          for (c2_i21 = 0; c2_i21 <= c2_i_loop_ub; c2_i21++) {
            c2_i25 = (int32_T)c2_indices_.vector.data[c2_i21];
            if ((c2_i25 < 1) || (c2_i25 > c2_b_allDists)) {
              emlrtDynamicBoundsCheckR2012b(c2_i25, 1, c2_b_allDists,
                &c2_h_emlrtBCI, &c2_c_st);
            }

            c2_dists_.vector.data[c2_i21] = c2_allDists.vector.data[c2_i25 - 1];
          }

          c2_array_boolean_T_SetSize(chartInstance, &c2_c_st, &c2_b_b,
            &c2_ic_emlrtRTEI, c2_dists_.size[0]);
          c2_j_loop_ub = c2_dists_.size[0] - 1;
          for (c2_i26 = 0; c2_i26 <= c2_j_loop_ub; c2_i26++) {
            c2_b_b.vector.data[c2_i26] = muSingleScalarIsNaN
              (c2_dists_.vector.data[c2_i26]);
          }

          c2_k_loop_ub = c2_b_b.size[0] - 1;
          for (c2_i28 = 0; c2_i28 <= c2_k_loop_ub; c2_i28++) {
            c2_b_b.vector.data[c2_i28] = !c2_b_b.vector.data[c2_i28];
          }

          c2_array_boolean_T_SetSize(chartInstance, &c2_c_st, &c2_isFinite,
            &c2_jc_emlrtRTEI, c2_dists_.size[0]);
          c2_m_loop_ub = c2_dists_.size[0] - 1;
          for (c2_i32 = 0; c2_i32 <= c2_m_loop_ub; c2_i32++) {
            c2_isFinite.vector.data[c2_i32] = ((!muSingleScalarIsInf
              (c2_dists_.vector.data[c2_i32])) && c2_b_b.vector.data[c2_i32]);
          }

          c2_end = c2_isFinite.size[0];
          c2_trueCount = 0;
          for (c2_g_i = 0; c2_g_i < c2_end; c2_g_i++) {
            if (c2_isFinite.vector.data[c2_g_i]) {
              c2_trueCount++;
            }
          }

          c2_partialTrueCount = 0;
          for (c2_h_i = 0; c2_h_i < c2_end; c2_h_i++) {
            if (c2_isFinite.vector.data[c2_h_i]) {
              c2_i43 = c2_indices_.size[0] - 1;
              if ((c2_h_i < 0) || (c2_h_i > c2_i43)) {
                emlrtDynamicBoundsCheckR2012b(c2_h_i, 0, c2_i43, &c2_x_emlrtBCI,
                  &c2_c_st);
              }

              c2_indices_.vector.data[c2_partialTrueCount] =
                c2_indices_.vector.data[c2_h_i];
              c2_partialTrueCount++;
            }
          }

          c2_array_uint32_T_SetSize(chartInstance, &c2_c_st, &c2_indices_,
            &c2_kc_emlrtRTEI, c2_trueCount);
          c2_b_end = c2_isFinite.size[0];
          c2_b_trueCount = 0;
          for (c2_i_i = 0; c2_i_i < c2_b_end; c2_i_i++) {
            if (c2_isFinite.vector.data[c2_i_i]) {
              c2_b_trueCount++;
            }
          }

          c2_b_partialTrueCount = 0;
          for (c2_j_i = 0; c2_j_i < c2_b_end; c2_j_i++) {
            if (c2_isFinite.vector.data[c2_j_i]) {
              c2_i52 = c2_dists_.size[0] - 1;
              if ((c2_j_i < 0) || (c2_j_i > c2_i52)) {
                emlrtDynamicBoundsCheckR2012b(c2_j_i, 0, c2_i52, &c2_db_emlrtBCI,
                  &c2_c_st);
              }

              c2_dists_.vector.data[c2_b_partialTrueCount] =
                c2_dists_.vector.data[c2_j_i];
              c2_b_partialTrueCount++;
            }
          }

          c2_array_real32_T_SetSize(chartInstance, &c2_c_st, &c2_dists_,
            &c2_kc_emlrtRTEI, c2_b_trueCount);
        }
      } else {
        c2_c_st.site = &c2_hc_emlrtRSI;
        c2_i_this = c2_e_this;
        c2_d_st.site = &c2_sc_emlrtRSI;
        c2_k_this = c2_i_this;
        if (!c2_k_this->HasLocationHandleAllocated) {
          c2_e_st.site = &c2_uc_emlrtRSI;
          c2_array_real32_T_2D_SetSize(chartInstance, &c2_e_st, &c2_location,
            &c2_wb_emlrtRTEI, c2_k_this->Location.size[0], 3);
          c2_b_loop_ub = c2_k_this->Location.size[0] * 3 - 1;
          for (c2_i7 = 0; c2_i7 <= c2_b_loop_ub; c2_i7++) {
            c2_location.vector.data[c2_i7] = c2_k_this->
              Location.vector.data[c2_i7];
          }

          c2_b_locationPtr = NULL;
          c2_b4 = (c2_location.size[0] == 0);
          if (!c2_b4) {
            c2_i10 = c2_location.size[0];
            if (c2_i10 < 0) {
              c2_i10 = 0;
            }

            c2_dataSize = (uint32_T)c2_i10;
            kdtreeGetLocationDataPointer_single(&c2_location.vector.data[0],
              c2_dataSize, 3U, &c2_b_locationPtr);
          }

          c2_k_this->LocationHandle = c2_b_locationPtr;
          c2_k_this->HasLocationHandleAllocated = true;
        }

        if (!c2_k_this->HasKdtreeConstructed) {
          c2_e_st.site = &c2_vc_emlrtRSI;
          c2_ptrObj = NULL;
          kdtreeConstruct_single(&c2_ptrObj);
          c2_k_this->Kdtree = c2_ptrObj;
          c2_k_this->HasKdtreeConstructed = true;
          c2_createIndex = true;
        } else {
          c2_e_st.site = &c2_wc_emlrtRSI;
          c2_kdtreeObj = c2_k_this->Kdtree;
          c2_locationPtr = c2_k_this->LocationHandle;
          c2_numOut = kdtreeNeedsReindex_single(c2_kdtreeObj, c2_locationPtr);
          c2_isIndexed = c2_numOut;
          if (c2_isIndexed) {
            c2_createIndex = true;
          } else {
            c2_createIndex = false;
          }
        }

        if (c2_createIndex) {
          c2_e_st.site = &c2_xc_emlrtRSI;
          c2_b_kdtreeObj = c2_k_this->Kdtree;
          c2_c_locationPtr = c2_k_this->LocationHandle;
          c2_f_st.site = &c2_xc_emlrtRSI;
          c2_m_this = c2_k_this;
          c2_b_dataSize = (real_T)c2_m_this->Location.size[0];
          if (c2_b_dataSize == 0.0) {
            c2_k_y = NULL;
            sf_mex_assign(&c2_k_y, sf_mex_create("y", c2_cv7, 10, 0U, 1, 0U, 2,
              1, 27), false);
            c2_l_y = NULL;
            sf_mex_assign(&c2_l_y, sf_mex_create("y", c2_cv7, 10, 0U, 1, 0U, 2,
              1, 27), false);
            sf_mex_call(&c2_e_st, &c2_t_emlrtMCI, "error", 0U, 2U, 14, c2_k_y,
                        14, sf_mex_call(&c2_e_st, NULL, "getString", 1U, 1U, 14,
              sf_mex_call(&c2_e_st, NULL, "message", 1U, 1U, 14, c2_l_y)));
          }

          c2_d1 = muDoubleScalarRound(c2_b_dataSize);
          if (c2_d1 < 4.294967296E+9) {
            if (c2_d1 >= 0.0) {
              c2_u = (uint32_T)c2_d1;
            } else {
              c2_u = 0U;
            }
          } else if (c2_d1 >= 4.294967296E+9) {
            c2_u = MAX_uint32_T;
          } else {
            c2_u = 0U;
          }

          kdtreeIndex_single(c2_b_kdtreeObj, c2_c_locationPtr, c2_u, 3U, 10.0);
        }

        c2_d_st.site = &c2_tc_emlrtRSI;
        c2_c_kdtreeObj = c2_i_this->Kdtree;
        c2_ptrIndices = NULL;
        c2_ptrDists = NULL;
        kdtreeRadiusSearch_single(c2_c_kdtreeObj, &c2_varargin_1[0], 1U, 3U,
          10.0F, 0.0F, &c2_ptrIndices, &c2_ptrDists, &c2_valid, 1000, 500U);
        c2_h_x = c2_valid;
        c2_i_x = c2_h_x;
        c2_j_x = c2_i_x;
        c2_k_x = c2_j_x;
        c2_l_x = c2_k_x;
        c2_m_x = c2_l_x;
        c2_m_y = c2_sumColumnB(chartInstance, c2_m_x);
        if (c2_m_y != (real_T)(int32_T)muDoubleScalarFloor(c2_m_y)) {
          emlrtIntegerCheckR2012b(c2_m_y, &c2_emlrtDCI, &c2_d_st);
        }

        c2_iv[0] = (int32_T)c2_m_y;
        c2_array_uint32_T_SetSize(chartInstance, &c2_d_st, &c2_indices_,
          &c2_xb_emlrtRTEI, c2_iv[0]);
        c2_n_x = c2_valid;
        c2_o_x = c2_n_x;
        c2_p_x = c2_o_x;
        c2_q_x = c2_p_x;
        c2_r_x = c2_q_x;
        c2_s_x = c2_r_x;
        c2_n_y = c2_sumColumnB(chartInstance, c2_s_x);
        if (c2_n_y != (real_T)(int32_T)muDoubleScalarFloor(c2_n_y)) {
          emlrtIntegerCheckR2012b(c2_n_y, &c2_b_emlrtDCI, &c2_d_st);
        }

        c2_iv[0] = (int32_T)c2_n_y;
        c2_array_real32_T_SetSize(chartInstance, &c2_d_st, &c2_dists_,
          &c2_yb_emlrtRTEI, c2_iv[0]);
        kdtreeRadiusSearchSetOutputs_single(c2_ptrIndices, c2_ptrDists,
          &c2_indices_.vector.data[0], &c2_dists_.vector.data[0]);
      }

      c2_c_st.site = &c2_ic_emlrtRSI;
      c2_d_p = false;
      c2_d2 = (real_T)c2_dists_.size[0];
      c2_i15 = (int32_T)c2_d2;
      for (c2_f_k = 0; c2_f_k < c2_i15; c2_f_k++) {
        c2_g_k = (real_T)c2_f_k + 1.0;
        if (c2_d_p || (c2_dists_.vector.data[(int32_T)c2_g_k - 1] < 0.0F)) {
          c2_e_p = true;
        } else {
          c2_e_p = false;
        }

        c2_d_p = c2_e_p;
      }

      if (c2_d_p) {
        c2_o_y = NULL;
        sf_mex_assign(&c2_o_y, sf_mex_create("y", c2_cv8, 10, 0U, 1, 0U, 2, 1,
          30), false);
        c2_q_y = NULL;
        sf_mex_assign(&c2_q_y, sf_mex_create("y", c2_cv8, 10, 0U, 1, 0U, 2, 1,
          30), false);
        c2_s_y = NULL;
        sf_mex_assign(&c2_s_y, sf_mex_create("y", c2_cv9, 10, 0U, 1, 0U, 2, 1, 4),
                      false);
        sf_mex_call(&c2_c_st, &c2_u_emlrtMCI, "error", 0U, 2U, 14, c2_o_y, 14,
                    sf_mex_call(&c2_c_st, NULL, "getString", 1U, 1U, 14,
          sf_mex_call(&c2_c_st, NULL, "message", 1U, 2U, 14, c2_q_y, 14, c2_s_y)));
      }

      c2_d_st.site = &c2_yc_emlrtRSI;
      c2_c_nx = c2_dists_.size[0];
      c2_e_st.site = &c2_ad_emlrtRSI;
      c2_j_b = c2_c_nx;
      c2_k_b = c2_j_b;
      if (c2_k_b < 1) {
        c2_b_overflow = false;
      } else {
        c2_b_overflow = (c2_k_b > 2147483646);
      }

      if (c2_b_overflow) {
        c2_f_st.site = &c2_rb_emlrtRSI;
        c2_check_forloop_overflow_error(chartInstance, &c2_f_st);
      }

      c2_st.site = &c2_bc_emlrtRSI;
      c2_f_i = c2_d_i;
      c2_b_newLabel = c2_newLabel;
      c2_c_newLabel = c2_b_newLabel;
      c2_d4 = (real_T)c2_indices_.size[0];
      c2_i19 = (int32_T)c2_d4;
      for (c2_h_k = 0; c2_h_k < c2_i19; c2_h_k++) {
        c2_i_k = (real_T)c2_h_k + 1.0;
        c2_i23 = c2_indices_.size[0];
        c2_i24 = (int32_T)c2_i_k;
        if ((c2_i24 < 1) || (c2_i24 > c2_i23)) {
          emlrtDynamicBoundsCheckR2012b(c2_i24, 1, c2_i23, &c2_j_emlrtBCI,
            &c2_st);
        }

        c2_j = c2_indices_.vector.data[c2_i24 - 1];
        c2_i27 = c2_L->size[0];
        if (((int32_T)c2_j < 1) || ((int32_T)c2_j > c2_i27)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)c2_j, 1, c2_i27, &c2_k_emlrtBCI,
            &c2_st);
        }

        c2_guard1 = false;
        if (c2_L->vector.data[(int32_T)c2_j - 1] > 0U) {
          c2_i31 = c2_L->size[0];
          c2_i34 = (int32_T)c2_f_i;
          if ((c2_i34 < 1) || (c2_i34 > c2_i31)) {
            emlrtDynamicBoundsCheckR2012b(c2_i34, 1, c2_i31, &c2_m_emlrtBCI,
              &c2_st);
          }

          if (c2_L->vector.data[c2_i34 - 1] > 0U) {
            c2_i36 = c2_L->size[0];
            if (((int32_T)c2_j < 1) || ((int32_T)c2_j > c2_i36)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)c2_j, 1, c2_i36,
                &c2_o_emlrtBCI, &c2_st);
            }

            c2_i40 = c2_L->size[0];
            c2_i41 = (int32_T)c2_f_i;
            if ((c2_i41 < 1) || (c2_i41 > c2_i40)) {
              emlrtDynamicBoundsCheckR2012b(c2_i41, 1, c2_i40, &c2_p_emlrtBCI,
                &c2_st);
            }

            if (c2_L->vector.data[(int32_T)c2_j - 1] > c2_L->vector.data[c2_i41
                - 1]) {
              c2_i48 = c2_L->size[0];
              if (((int32_T)c2_j < 1) || ((int32_T)c2_j > c2_i48)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)c2_j, 1, c2_i48,
                  &c2_e_emlrtBCI, &c2_st);
              }

              c2_c_end = c2_L->size[0];
              c2_c_trueCount = 0;
              for (c2_k_i = 0; c2_k_i < c2_c_end; c2_k_i++) {
                if (c2_L->vector.data[c2_k_i] == c2_L->vector.data[(int32_T)c2_j
                    - 1]) {
                  c2_c_trueCount++;
                }
              }

              c2_array_int32_T_SetSize(chartInstance, &c2_st, &c2_r2,
                &c2_kc_emlrtRTEI, c2_c_trueCount);
              c2_c_partialTrueCount = 0;
              for (c2_l_i = 0; c2_l_i < c2_c_end; c2_l_i++) {
                if (c2_L->vector.data[c2_l_i] == c2_L->vector.data[(int32_T)c2_j
                    - 1]) {
                  c2_r2.vector.data[c2_c_partialTrueCount] = c2_l_i;
                  c2_c_partialTrueCount++;
                }
              }

              c2_i55 = c2_L->size[0];
              c2_i56 = (int32_T)c2_f_i;
              if ((c2_i56 < 1) || (c2_i56 > c2_i55)) {
                emlrtDynamicBoundsCheckR2012b(c2_i56, 1, c2_i55, &c2_y_emlrtBCI,
                  &c2_st);
              }

              c2_c_L = c2_L->vector.data[c2_i56 - 1];
              c2_d_L = c2_L->size[0] - 1;
              c2_o_loop_ub = c2_r2.size[0] - 1;
              for (c2_i57 = 0; c2_i57 <= c2_o_loop_ub; c2_i57++) {
                c2_i59 = c2_r2.vector.data[c2_i57];
                if ((c2_i59 < 0) || (c2_i59 > c2_d_L)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i59, 0, c2_d_L,
                    &c2_bb_emlrtBCI, &c2_st);
                }

                c2_L->vector.data[c2_i59] = c2_c_L;
              }
            } else {
              c2_i47 = c2_L->size[0];
              if (((int32_T)c2_j < 1) || ((int32_T)c2_j > c2_i47)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)c2_j, 1, c2_i47,
                  &c2_t_emlrtBCI, &c2_st);
              }

              c2_i50 = c2_L->size[0];
              c2_i51 = (int32_T)c2_f_i;
              if ((c2_i51 < 1) || (c2_i51 > c2_i50)) {
                emlrtDynamicBoundsCheckR2012b(c2_i51, 1, c2_i50, &c2_u_emlrtBCI,
                  &c2_st);
              }

              if (c2_L->vector.data[(int32_T)c2_j - 1] < c2_L->
                  vector.data[c2_i51 - 1]) {
                c2_i53 = c2_L->size[0];
                c2_i54 = (int32_T)c2_f_i;
                if ((c2_i54 < 1) || (c2_i54 > c2_i53)) {
                  emlrtDynamicBoundsCheckR2012b(c2_i54, 1, c2_i53,
                    &c2_d_emlrtBCI, &c2_st);
                }

                c2_d_end = c2_L->size[0];
                c2_d_trueCount = 0;
                for (c2_m_i = 0; c2_m_i < c2_d_end; c2_m_i++) {
                  if (c2_L->vector.data[c2_m_i] == c2_L->vector.data[(int32_T)
                      c2_f_i - 1]) {
                    c2_d_trueCount++;
                  }
                }

                c2_array_int32_T_SetSize(chartInstance, &c2_st, &c2_r3,
                  &c2_kc_emlrtRTEI, c2_d_trueCount);
                c2_d_partialTrueCount = 0;
                for (c2_n_i = 0; c2_n_i < c2_d_end; c2_n_i++) {
                  if (c2_L->vector.data[c2_n_i] == c2_L->vector.data[(int32_T)
                      c2_f_i - 1]) {
                    c2_r3.vector.data[c2_d_partialTrueCount] = c2_n_i;
                    c2_d_partialTrueCount++;
                  }
                }

                c2_i58 = c2_L->size[0];
                if (((int32_T)c2_j < 1) || ((int32_T)c2_j > c2_i58)) {
                  emlrtDynamicBoundsCheckR2012b((int32_T)c2_j, 1, c2_i58,
                    &c2_ab_emlrtBCI, &c2_st);
                }

                c2_e_L = c2_L->vector.data[(int32_T)c2_j - 1];
                c2_f_L = c2_L->size[0] - 1;
                c2_p_loop_ub = c2_r3.size[0] - 1;
                for (c2_i60 = 0; c2_i60 <= c2_p_loop_ub; c2_i60++) {
                  c2_i61 = c2_r3.vector.data[c2_i60];
                  if ((c2_i61 < 0) || (c2_i61 > c2_f_L)) {
                    emlrtDynamicBoundsCheckR2012b(c2_i61, 0, c2_f_L,
                      &c2_cb_emlrtBCI, &c2_st);
                  }

                  c2_L->vector.data[c2_i61] = c2_e_L;
                }
              }
            }
          } else {
            c2_guard1 = true;
          }
        } else {
          c2_guard1 = true;
        }

        if (c2_guard1) {
          c2_i35 = c2_L->size[0];
          if (((int32_T)c2_j < 1) || ((int32_T)c2_j > c2_i35)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)c2_j, 1, c2_i35,
              &c2_n_emlrtBCI, &c2_st);
          }

          if (c2_L->vector.data[(int32_T)c2_j - 1] > 0U) {
            c2_i38 = c2_L->size[0];
            if (((int32_T)c2_j < 1) || ((int32_T)c2_j > c2_i38)) {
              emlrtDynamicBoundsCheckR2012b((int32_T)c2_j, 1, c2_i38,
                &c2_r_emlrtBCI, &c2_st);
            }

            c2_i42 = c2_L->size[0];
            c2_i44 = (int32_T)c2_f_i;
            if ((c2_i44 < 1) || (c2_i44 > c2_i42)) {
              emlrtDynamicBoundsCheckR2012b(c2_i44, 1, c2_i42, &c2_s_emlrtBCI,
                &c2_st);
            }

            c2_L->vector.data[c2_i44 - 1] = c2_L->vector.data[(int32_T)c2_j - 1];
          } else {
            c2_i37 = c2_L->size[0];
            c2_i39 = (int32_T)c2_f_i;
            if ((c2_i39 < 1) || (c2_i39 > c2_i37)) {
              emlrtDynamicBoundsCheckR2012b(c2_i39, 1, c2_i37, &c2_q_emlrtBCI,
                &c2_st);
            }

            if (c2_L->vector.data[c2_i39 - 1] > 0U) {
              c2_i45 = c2_L->size[0];
              c2_i46 = (int32_T)c2_f_i;
              if ((c2_i46 < 1) || (c2_i46 > c2_i45)) {
                emlrtDynamicBoundsCheckR2012b(c2_i46, 1, c2_i45, &c2_v_emlrtBCI,
                  &c2_st);
              }

              c2_i49 = c2_L->size[0];
              if (((int32_T)c2_j < 1) || ((int32_T)c2_j > c2_i49)) {
                emlrtDynamicBoundsCheckR2012b((int32_T)c2_j, 1, c2_i49,
                  &c2_w_emlrtBCI, &c2_st);
              }

              c2_L->vector.data[(int32_T)c2_j - 1] = c2_L->vector.data[c2_i46 -
                1];
            }
          }
        }
      }

      c2_i20 = c2_L->size[0];
      c2_i22 = (int32_T)c2_f_i;
      if ((c2_i22 < 1) || (c2_i22 > c2_i20)) {
        emlrtDynamicBoundsCheckR2012b(c2_i22, 1, c2_i20, &c2_i_emlrtBCI, &c2_st);
      }

      if (c2_L->vector.data[c2_i22 - 1] == 0U) {
        c2_c_newLabel++;
        c2_b_L = c2_L->size[0];
        c2_array_int32_T_SetSize(chartInstance, &c2_st, &c2_b_r,
          &c2_mc_emlrtRTEI, c2_indices_.size[0]);
        c2_l_loop_ub = c2_indices_.size[0] - 1;
        for (c2_i29 = 0; c2_i29 <= c2_l_loop_ub; c2_i29++) {
          c2_i30 = (int32_T)c2_indices_.vector.data[c2_i29];
          if ((c2_i30 < 1) || (c2_i30 > c2_b_L)) {
            emlrtDynamicBoundsCheckR2012b(c2_i30, 1, c2_b_L, &c2_l_emlrtBCI,
              &c2_st);
          }

          c2_b_r.vector.data[c2_i29] = c2_i30;
        }

        c2_n_loop_ub = c2_b_r.size[0] - 1;
        for (c2_i33 = 0; c2_i33 <= c2_n_loop_ub; c2_i33++) {
          c2_d5 = muDoubleScalarRound(c2_c_newLabel);
          if (c2_d5 < 4.294967296E+9) {
            if (c2_d5 >= 0.0) {
              c2_u2 = (uint32_T)c2_d5;
            } else {
              c2_u2 = 0U;
            }
          } else if (c2_d5 >= 4.294967296E+9) {
            c2_u2 = MAX_uint32_T;
          } else {
            c2_u2 = 0U;
          }

          c2_L->vector.data[c2_b_r.vector.data[c2_i33] - 1] = c2_u2;
        }
      }

      c2_newLabel = c2_c_newLabel;
    }
  }

  c2_array_int32_T_Destructor(chartInstance, &c2_r3);
  c2_array_int32_T_Destructor(chartInstance, &c2_r2);
  c2_array_boolean_T_Destructor(chartInstance, &c2_b_b);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_r1);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_location);
  c2_array_int32_T_2D_Destructor(chartInstance, &c2_ii);
  c2_array_boolean_T_2D_Destructor(chartInstance, &c2_b_x);
  c2_array_real_T_2D_Destructor(chartInstance, &c2_b_i);
  c2_array_boolean_T_Destructor(chartInstance, &c2_isFinite);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_allDists);
  c2_array_real32_T_Destructor(chartInstance, &c2_dists_);
  c2_array_uint32_T_Destructor(chartInstance, &c2_indices_);
  c2_array_int32_T_Destructor(chartInstance, &c2_b_r);
}

static void c2_c_indexShapeCheck(SFc2_modelInstanceStruct *chartInstance, const
  emlrtStack *c2_sp, int32_T c2_matrixSize[2], int32_T c2_indexSize)
{
  emlrtStack c2_st;
  const mxArray *c2_b_y = NULL;
  const mxArray *c2_c_y = NULL;
  int32_T c2_sz;
  boolean_T c2_b_b;
  boolean_T c2_b_c;
  boolean_T c2_c;
  boolean_T c2_c_b;
  boolean_T c2_nonSingletonDimFound;
  (void)chartInstance;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  if (c2_matrixSize[1] != 1) {
    c2_b_b = false;
  } else {
    c2_b_b = true;
  }

  if (c2_b_b) {
    c2_sz = c2_indexSize;
    c2_nonSingletonDimFound = false;
    if (c2_sz != 1) {
      c2_nonSingletonDimFound = true;
    }

    c2_c_b = c2_nonSingletonDimFound;
    if (c2_c_b) {
      c2_c = true;
    } else {
      c2_c = false;
    }
  } else {
    c2_c = false;
  }

  c2_st.site = &c2_wb_emlrtRSI;
  c2_b_c = c2_c;
  if (c2_b_c) {
    c2_b_y = NULL;
    sf_mex_assign(&c2_b_y, sf_mex_create("y", c2_cv2, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    c2_c_y = NULL;
    sf_mex_assign(&c2_c_y, sf_mex_create("y", c2_cv2, 10, 0U, 1, 0U, 2, 1, 30),
                  false);
    sf_mex_call(&c2_st, &c2_j_emlrtMCI, "error", 0U, 2U, 14, c2_b_y, 14,
                sf_mex_call(&c2_st, NULL, "getString", 1U, 1U, 14, sf_mex_call
      (&c2_st, NULL, "message", 1U, 1U, 14, c2_c_y)));
  }
}

static real_T c2_sumColumnB(SFc2_modelInstanceStruct *chartInstance, uint32_T
  c2_b_x)
{
  uint32_T c2_c_x;
  (void)chartInstance;
  c2_c_x = c2_b_x;
  return (real_T)c2_c_x;
}

static real_T c2_b_sumColumnB(SFc2_modelInstanceStruct *chartInstance, uint32_T
  c2_b_x[32])
{
  real_T c2_b_y;
  int32_T c2_b_k;
  int32_T c2_k;
  (void)chartInstance;
  c2_b_y = (real_T)c2_b_x[0];
  for (c2_k = 0; c2_k < 31; c2_k++) {
    c2_b_k = c2_k;
    c2_b_y += (real_T)c2_b_x[c2_b_k + 1];
  }

  return c2_b_y;
}

static void c2_handle_matlabCodegenDestructor(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud *c2_obj)
{
  void *c2_kdtreeObj;
  void *c2_locationPtr;
  c2_pointCloud *c2_b_this;
  (void)chartInstance;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
    c2_b_this = c2_obj;
    if (c2_b_this->HasLocationHandleAllocated) {
      c2_locationPtr = c2_b_this->LocationHandle;
      kdtreeDeleteLocationDataPointer_single(c2_locationPtr);
      c2_b_this->HasLocationHandleAllocated = false;
    }

    if (c2_b_this->HasKdtreeConstructed) {
      c2_kdtreeObj = c2_b_this->Kdtree;
      kdtreeDeleteObj_single(c2_kdtreeObj);
      c2_b_this->HasKdtreeConstructed = false;
    }
  }
}

static void c2_b_handle_matlabCodegenDestructor(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud_2 *c2_obj)
{
  void *c2_kdtreeObj;
  void *c2_locationPtr;
  c2_pointCloud_2 *c2_b_this;
  (void)chartInstance;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
    c2_b_this = c2_obj;
    if (c2_b_this->HasLocationHandleAllocated) {
      c2_locationPtr = c2_b_this->LocationHandle;
      kdtreeDeleteLocationDataPointer_single(c2_locationPtr);
      c2_b_this->HasLocationHandleAllocated = false;
    }

    if (c2_b_this->HasKdtreeConstructed) {
      c2_kdtreeObj = c2_b_this->Kdtree;
      kdtreeDeleteObj_single(c2_kdtreeObj);
      c2_b_this->HasKdtreeConstructed = false;
    }
  }
}

const mxArray *sf_c2_model_get_eml_resolved_functions_info(void)
{
  const mxArray *c2_nameCaptureInfo = NULL;
  c2_nameCaptureInfo = NULL;
  sf_mex_assign(&c2_nameCaptureInfo, sf_mex_create("nameCaptureInfo", NULL, 0,
    0U, 1, 0U, 2, 0, 1), false);
  return c2_nameCaptureInfo;
}

static void c2_emlrt_marshallIn(SFc2_modelInstanceStruct *chartInstance, const
  mxArray *c2_nullptr, const char_T *c2_identifier, uint32_T c2_b_y[72000])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_nullptr), &c2_thisId,
                        c2_b_y);
  sf_mex_destroy(&c2_nullptr);
}

static void c2_b_emlrt_marshallIn(SFc2_modelInstanceStruct *chartInstance, const
  mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, uint32_T c2_b_y[72000])
{
  int32_T c2_i;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), chartInstance->c2_b_uv, 1, 7, 0U,
                1, 0U, 2, 32, 2250);
  for (c2_i = 0; c2_i < 72000; c2_i++) {
    c2_b_y[c2_i] = chartInstance->c2_b_uv[c2_i];
  }

  sf_mex_destroy(&c2_u);
}

static void c2_array_uint8_T_3D_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_uint8_T_3D *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T c2_size1, int32_T
  c2_size2)
{
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  uint8_T *c2_newData;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_coderArray->size[1] = c2_size1;
  c2_coderArray->size[2] = c2_size2;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)emlrtSizeMulR2012b((size_t)1U,
    (size_t)(uint32_T)c2_coderArray->size[0], c2_srcLocation, (void *)c2_sp),
                       (size_t)(uint32_T)c2_coderArray->size[1], c2_srcLocation,
                       (void *)c2_sp), (size_t)(uint32_T)c2_coderArray->size[2],
    c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (uint8_T *)emlrtMallocMex(sizeof(uint8_T) * (uint32_T)
      c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof(uint8_T) * (uint32_T)
             c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_real32_T_3D_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_real32_T_3D *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T c2_size1, int32_T
  c2_size2)
{
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  real32_T *c2_newData;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_coderArray->size[1] = c2_size1;
  c2_coderArray->size[2] = c2_size2;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)emlrtSizeMulR2012b((size_t)1U,
    (size_t)(uint32_T)c2_coderArray->size[0], c2_srcLocation, (void *)c2_sp),
                       (size_t)(uint32_T)c2_coderArray->size[1], c2_srcLocation,
                       (void *)c2_sp), (size_t)(uint32_T)c2_coderArray->size[2],
    c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (real32_T *)emlrtMallocMex(sizeof(real32_T) * (uint32_T)
      c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof(real32_T)
             * (uint32_T)c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_real32_T_2D_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_real32_T_2D *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T c2_size1)
{
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  real32_T *c2_newData;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_coderArray->size[1] = c2_size1;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c2_coderArray->size[0],
                       c2_srcLocation, (void *)c2_sp), (size_t)(uint32_T)
    c2_coderArray->size[1], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (real32_T *)emlrtMallocMex(sizeof(real32_T) * (uint32_T)
      c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof(real32_T)
             * (uint32_T)c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_pointclouds_interna
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1)
{
  c2_pointclouds_internal_codegen_pc_pointCloudArray *c2_newData;
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  c2_coderArray->size[0] = c2_size0;
  c2_coderArray->size[1] = c2_size1;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c2_coderArray->size[0],
                       c2_srcLocation, (void *)c2_sp), (size_t)(uint32_T)
    c2_coderArray->size[1], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel < c2_coderArray->vector.numel) {
    for (c2_i = c2_newNumel; c2_i < c2_coderArray->vector.numel; c2_i++) {
      c2_b_array_pointclouds_internal_code(chartInstance,
        &c2_coderArray->vector.data[c2_i]);
    }
  }

  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (c2_pointclouds_internal_codegen_pc_pointCloudArray *)
      emlrtMallocMex(sizeof(c2_pointclouds_internal_codegen_pc_pointCloudArray) *
                     (uint32_T)c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof
             (c2_pointclouds_internal_codegen_pc_pointCloudArray) * (uint32_T)
             c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  for (c2_b_i = c2_coderArray->vector.numel; c2_b_i < c2_newNumel; c2_b_i++) {
    c2_c_array_pointclouds_internal_code(chartInstance,
      &c2_coderArray->vector.data[c2_b_i]);
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_real32_T_3D_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_real32_T_3D *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data != (real32_T *)
       NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_b_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_pointclouds_internal_codegen_pc_pointCloudArray *c2_pStruct)
{
  c2_array_real32_T_3D_Destructor(chartInstance, &c2_pStruct->Normal);
  c2_array_uint8_T_3D_Destructor(chartInstance, &c2_pStruct->Color);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_pStruct->Intensity);
}

static void c2_array_uint8_T_3D_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_uint8_T_3D *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data != (uint8_T *)
       NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_array_real32_T_2D_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_real32_T_2D *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data != (real32_T *)
       NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_c_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_pointclouds_internal_codegen_pc_pointCloudArray *c2_pStruct)
{
  c2_array_real32_T_3D_Constructor(chartInstance, &c2_pStruct->Normal);
  c2_array_uint8_T_3D_Constructor(chartInstance, &c2_pStruct->Color);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_pStruct->Intensity);
}

static void c2_array_real32_T_3D_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_real32_T_3D *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (real32_T *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
  c2_coderArray->size[1] = 0;
  c2_coderArray->size[2] = 0;
}

static void c2_array_uint8_T_3D_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_uint8_T_3D *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (uint8_T *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
  c2_coderArray->size[1] = 0;
  c2_coderArray->size[2] = 0;
}

static void c2_array_real32_T_2D_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_real32_T_2D *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (real32_T *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
  c2_coderArray->size[1] = 0;
}

static void c2_array_int32_T_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_int32_T *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0)
{
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  int32_T *c2_newData;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)
    c2_coderArray->size[0], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
      c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof(int32_T) * (uint32_T)
             c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_uint32_T_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_uint32_T *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0)
{
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  uint32_T *c2_newData;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)
    c2_coderArray->size[0], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (uint32_T *)emlrtMallocMex(sizeof(uint32_T) * (uint32_T)
      c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof(uint32_T)
             * (uint32_T)c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_real_T_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_real_T *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0)
{
  real_T *c2_newData;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)
    c2_coderArray->size[0], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (real_T *)emlrtMallocMex(sizeof(real_T) * (uint32_T)
      c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof(real_T) * (uint32_T)
             c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_uint8_T_2D_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_uint8_T_2D *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T c2_size1)
{
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  uint8_T *c2_newData;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_coderArray->size[1] = c2_size1;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c2_coderArray->size[0],
                       c2_srcLocation, (void *)c2_sp), (size_t)(uint32_T)
    c2_coderArray->size[1], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (uint8_T *)emlrtMallocMex(sizeof(uint8_T) * (uint32_T)
      c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof(uint8_T) * (uint32_T)
             c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_real32_T_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_real32_T *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0)
{
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  real32_T *c2_newData;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)
    c2_coderArray->size[0], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (real32_T *)emlrtMallocMex(sizeof(real32_T) * (uint32_T)
      c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof(real32_T)
             * (uint32_T)c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_d_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_pointclouds_internal_codegen_pc_pointCloudArray_1 c2_data[], int32_T
  c2_size[2], const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1)
{
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_newNumel;
  int32_T c2_oldNumel;
  c2_oldNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c2_size[0], c2_srcLocation,
                       (void *)c2_sp), (size_t)(uint32_T)c2_size[1],
    c2_srcLocation, (void *)c2_sp);
  c2_size[0] = c2_size0;
  c2_size[1] = c2_size1;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c2_size[0], c2_srcLocation,
                       (void *)c2_sp), (size_t)(uint32_T)c2_size[1],
    c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel < c2_oldNumel) {
    for (c2_i = c2_newNumel; c2_i < c2_oldNumel; c2_i++) {
      c2_e_array_pointclouds_internal_code(chartInstance, &c2_data[c2_i]);
    }
  }

  for (c2_b_i = c2_oldNumel; c2_b_i < c2_newNumel; c2_b_i++) {
    c2_f_array_pointclouds_internal_code(chartInstance, &c2_data[c2_b_i]);
  }
}

static void c2_e_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_pointclouds_internal_codegen_pc_pointCloudArray_1
  *c2_pStruct)
{
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_pStruct->Location);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_pStruct->Normal);
  c2_array_uint8_T_2D_Destructor(chartInstance, &c2_pStruct->Color);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_pStruct->Intensity);
}

static void c2_array_uint8_T_2D_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_uint8_T_2D *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data != (uint8_T *)
       NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_f_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_pointclouds_internal_codegen_pc_pointCloudArray_1
  *c2_pStruct)
{
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_pStruct->Location);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_pStruct->Normal);
  c2_array_uint8_T_2D_Constructor(chartInstance, &c2_pStruct->Color);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_pStruct->Intensity);
}

static void c2_array_uint8_T_2D_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_uint8_T_2D *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (uint8_T *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
  c2_coderArray->size[1] = 0;
}

static void c2_g_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_b_pointclouds_inter
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1)
{
  c2_pointclouds_internal_codegen_pc_pointCloudArray_1 *c2_newData;
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  c2_coderArray->size[0] = c2_size0;
  c2_coderArray->size[1] = c2_size1;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c2_coderArray->size[0],
                       c2_srcLocation, (void *)c2_sp), (size_t)(uint32_T)
    c2_coderArray->size[1], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel < c2_coderArray->vector.numel) {
    for (c2_i = c2_newNumel; c2_i < c2_coderArray->vector.numel; c2_i++) {
      c2_e_array_pointclouds_internal_code(chartInstance,
        &c2_coderArray->vector.data[c2_i]);
    }
  }

  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (c2_pointclouds_internal_codegen_pc_pointCloudArray_1 *)
      emlrtMallocMex(sizeof(c2_pointclouds_internal_codegen_pc_pointCloudArray_1)
                     * (uint32_T)c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof
             (c2_pointclouds_internal_codegen_pc_pointCloudArray_1) * (uint32_T)
             c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  for (c2_b_i = c2_coderArray->vector.numel; c2_b_i < c2_newNumel; c2_b_i++) {
    c2_f_array_pointclouds_internal_code(chartInstance,
      &c2_coderArray->vector.data[c2_b_i]);
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_boolean_T_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_boolean_T *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0)
{
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  boolean_T *c2_newData;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)
    c2_coderArray->size[0], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (boolean_T *)emlrtMallocMex(sizeof(boolean_T) * (uint32_T)
      c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof(boolean_T)
             * (uint32_T)c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_boolean_T_2D_SetSize(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_coder_array_boolean_T_2D
  *c2_coderArray, const emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T
  c2_size1)
{
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  boolean_T *c2_newData;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_coderArray->size[1] = c2_size1;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c2_coderArray->size[0],
                       c2_srcLocation, (void *)c2_sp), (size_t)(uint32_T)
    c2_coderArray->size[1], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (boolean_T *)emlrtMallocMex(sizeof(boolean_T) * (uint32_T)
      c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof(boolean_T)
             * (uint32_T)c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_int32_T_2D_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_int32_T_2D *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T c2_size1)
{
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  int32_T *c2_newData;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_coderArray->size[1] = c2_size1;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c2_coderArray->size[0],
                       c2_srcLocation, (void *)c2_sp), (size_t)(uint32_T)
    c2_coderArray->size[1], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (int32_T *)emlrtMallocMex(sizeof(int32_T) * (uint32_T)
      c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof(int32_T) * (uint32_T)
             c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_real_T_2D_SetSize(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_real_T_2D *c2_coderArray, const
  emlrtRTEInfo *c2_srcLocation, int32_T c2_size0, int32_T c2_size1)
{
  real_T *c2_newData;
  int32_T c2_newCapacity;
  int32_T c2_newNumel;
  (void)chartInstance;
  c2_coderArray->size[0] = c2_size0;
  c2_coderArray->size[1] = c2_size1;
  c2_newNumel = (int32_T)emlrtSizeMulR2012b((size_t)(uint32_T)(int32_T)
    emlrtSizeMulR2012b((size_t)1U, (size_t)(uint32_T)c2_coderArray->size[0],
                       c2_srcLocation, (void *)c2_sp), (size_t)(uint32_T)
    c2_coderArray->size[1], c2_srcLocation, (void *)c2_sp);
  if (c2_newNumel > c2_coderArray->vector.allocated) {
    c2_newCapacity = c2_coderArray->vector.allocated;
    if (c2_newCapacity < 16) {
      c2_newCapacity = 16;
    }

    while (c2_newCapacity < c2_newNumel) {
      if (c2_newCapacity > 1073741823) {
        c2_newCapacity = MAX_int32_T;
      } else {
        c2_newCapacity <<= 1;
      }
    }

    c2_newData = (real_T *)emlrtMallocMex(sizeof(real_T) * (uint32_T)
      c2_newCapacity);
    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if ((void *)c2_newData == NULL) {
      emlrtHeapAllocationErrorR2012b(c2_srcLocation, (void *)c2_sp);
    }

    if (c2_coderArray->vector.data != NULL) {
      memcpy(c2_newData, c2_coderArray->vector.data, sizeof(real_T) * (uint32_T)
             c2_coderArray->vector.numel);
      if (c2_coderArray->vector.owner) {
        emlrtFreeMex(c2_coderArray->vector.data);
      }
    }

    c2_coderArray->vector.data = c2_newData;
    c2_coderArray->vector.allocated = c2_newCapacity;
    c2_coderArray->vector.owner = true;
  }

  c2_coderArray->vector.numel = c2_newNumel;
}

static void c2_array_pointCloud_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_pointCloud *c2_pStruct)
{
  c2_array_uint8_T_3D_Constructor(chartInstance, &c2_pStruct->Color);
  c2_array_real32_T_3D_Constructor(chartInstance, &c2_pStruct->Normal);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_pStruct->Intensity);
  c2_array_real32_T_3D_Constructor(chartInstance, &c2_pStruct->RangeData);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_pStruct->XLimitsInternal);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_pStruct->YLimitsInternal);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_pStruct->ZLimitsInternal);
  c2_h_array_pointclouds_internal_code(chartInstance,
    &c2_pStruct->PointCloudArrayData);
}

static void c2_h_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_pointclouds_interna *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data =
    (c2_pointclouds_internal_codegen_pc_pointCloudArray *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
  c2_coderArray->size[1] = 0;
}

static void c2_array_pointCloud_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_pointCloud *c2_pStruct)
{
  c2_array_uint8_T_3D_Destructor(chartInstance, &c2_pStruct->Color);
  c2_array_real32_T_3D_Destructor(chartInstance, &c2_pStruct->Normal);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_pStruct->Intensity);
  c2_array_real32_T_3D_Destructor(chartInstance, &c2_pStruct->RangeData);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_pStruct->XLimitsInternal);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_pStruct->YLimitsInternal);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_pStruct->ZLimitsInternal);
  c2_i_array_pointclouds_internal_code(chartInstance,
    &c2_pStruct->PointCloudArrayData);
}

static void c2_i_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_pointclouds_interna *c2_coderArray)
{
  int32_T c2_i;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data !=
       (c2_pointclouds_internal_codegen_pc_pointCloudArray *)NULL)) {
    for (c2_i = 0; c2_i < c2_coderArray->vector.numel; c2_i++) {
      c2_b_array_pointclouds_internal_code(chartInstance,
        &c2_coderArray->vector.data[c2_i]);
    }

    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_j_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_pointclouds_internal_codegen_pc_pointCloudArray *c2_dst, const
  c2_pointclouds_internal_codegen_pc_pointCloudArray *c2_src, const emlrtRTEInfo
  *c2_srcLocation)
{
  c2_array_real32_T_32x2250x3s_Copy(chartInstance, c2_dst->Location,
    c2_src->Location);
  c2_array_real32_T_3D_Copy(chartInstance, c2_sp, &c2_dst->Normal,
    &c2_src->Normal, c2_srcLocation);
  c2_array_uint8_T_3D_Copy(chartInstance, c2_sp, &c2_dst->Color, &c2_src->Color,
    c2_srcLocation);
  c2_array_real32_T_2D_Copy(chartInstance, c2_sp, &c2_dst->Intensity,
    &c2_src->Intensity, c2_srcLocation);
}

static void c2_array_real32_T_32x2250x3s_Copy(SFc2_modelInstanceStruct
  *chartInstance, real32_T c2_dst[216000], const real32_T c2_src[216000])
{
  int32_T c2_i;
  (void)chartInstance;
  for (c2_i = 0; c2_i < 216000; c2_i++) {
    c2_dst[c2_i] = c2_src[c2_i];
  }
}

static void c2_array_real32_T_3D_Copy(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_real32_T_3D *c2_dst, const
  c2_coder_array_real32_T_3D *c2_src, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  c2_array_real32_T_3D_SetSize(chartInstance, c2_sp, c2_dst, c2_srcLocation,
    c2_src->size[0], c2_src->size[1], c2_src->size[2]);
  for (c2_i = 0; c2_i < c2_src->vector.numel; c2_i++) {
    c2_dst->vector.data[c2_i] = c2_src->vector.data[c2_i];
  }
}

static void c2_array_uint8_T_3D_Copy(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_uint8_T_3D *c2_dst, const
  c2_coder_array_uint8_T_3D *c2_src, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  c2_array_uint8_T_3D_SetSize(chartInstance, c2_sp, c2_dst, c2_srcLocation,
    c2_src->size[0], c2_src->size[1], c2_src->size[2]);
  for (c2_i = 0; c2_i < c2_src->vector.numel; c2_i++) {
    c2_dst->vector.data[c2_i] = c2_src->vector.data[c2_i];
  }
}

static void c2_array_real32_T_2D_Copy(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_real32_T_2D *c2_dst, const
  c2_coder_array_real32_T_2D *c2_src, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  c2_array_real32_T_2D_SetSize(chartInstance, c2_sp, c2_dst, c2_srcLocation,
    c2_src->size[0], c2_src->size[1]);
  for (c2_i = 0; c2_i < c2_src->vector.numel; c2_i++) {
    c2_dst->vector.data[c2_i] = c2_src->vector.data[c2_i];
  }
}

static void c2_array_pointCloud_2_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_pointCloud_2 *c2_pStruct)
{
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_pStruct->Location);
  c2_array_uint8_T_2D_Constructor(chartInstance, &c2_pStruct->Color);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_pStruct->Normal);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_pStruct->Intensity);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_pStruct->RangeData);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_pStruct->XLimitsInternal);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_pStruct->YLimitsInternal);
  c2_array_real32_T_2D_Constructor(chartInstance, &c2_pStruct->ZLimitsInternal);
  c2_k_array_pointclouds_internal_code(chartInstance,
    &c2_pStruct->PointCloudArrayData);
}

static void c2_k_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_b_pointclouds_inter *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data =
    (c2_pointclouds_internal_codegen_pc_pointCloudArray_1 *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
  c2_coderArray->size[1] = 0;
}

static void c2_array_uint32_T_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_uint32_T *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (uint32_T *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
}

static void c2_array_real_T_Constructor(SFc2_modelInstanceStruct *chartInstance,
  c2_coder_array_real_T *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (real_T *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
}

static void c2_array_int32_T_Constructor(SFc2_modelInstanceStruct *chartInstance,
  c2_coder_array_int32_T *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (int32_T *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
}

static void c2_array_pointCloud_2_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_pointCloud_2 *c2_pStruct)
{
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_pStruct->Location);
  c2_array_uint8_T_2D_Destructor(chartInstance, &c2_pStruct->Color);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_pStruct->Normal);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_pStruct->Intensity);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_pStruct->RangeData);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_pStruct->XLimitsInternal);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_pStruct->YLimitsInternal);
  c2_array_real32_T_2D_Destructor(chartInstance, &c2_pStruct->ZLimitsInternal);
  c2_l_array_pointclouds_internal_code(chartInstance,
    &c2_pStruct->PointCloudArrayData);
}

static void c2_l_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_b_pointclouds_inter *c2_coderArray)
{
  int32_T c2_i;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data !=
       (c2_pointclouds_internal_codegen_pc_pointCloudArray_1 *)NULL)) {
    for (c2_i = 0; c2_i < c2_coderArray->vector.numel; c2_i++) {
      c2_e_array_pointclouds_internal_code(chartInstance,
        &c2_coderArray->vector.data[c2_i]);
    }

    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_array_uint32_T_Destructor(SFc2_modelInstanceStruct *chartInstance,
  c2_coder_array_uint32_T *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data != (uint32_T *)
       NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_array_real_T_Destructor(SFc2_modelInstanceStruct *chartInstance,
  c2_coder_array_real_T *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data != (real_T *)
       NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_array_int32_T_Destructor(SFc2_modelInstanceStruct *chartInstance,
  c2_coder_array_int32_T *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data != (int32_T *)
       NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_array_real32_T_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_real32_T *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (real32_T *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
}

static void c2_array_real32_T_Destructor(SFc2_modelInstanceStruct *chartInstance,
  c2_coder_array_real32_T *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data != (real32_T *)
       NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_m_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp,
  c2_pointclouds_internal_codegen_pc_pointCloudArray_1 *c2_dst, const
  c2_pointclouds_internal_codegen_pc_pointCloudArray_1 *c2_src, const
  emlrtRTEInfo *c2_srcLocation)
{
  c2_array_real32_T_2D_Copy(chartInstance, c2_sp, &c2_dst->Location,
    &c2_src->Location, c2_srcLocation);
  c2_array_real32_T_2D_Copy(chartInstance, c2_sp, &c2_dst->Normal,
    &c2_src->Normal, c2_srcLocation);
  c2_array_uint8_T_2D_Copy(chartInstance, c2_sp, &c2_dst->Color, &c2_src->Color,
    c2_srcLocation);
  c2_array_real32_T_2D_Copy(chartInstance, c2_sp, &c2_dst->Intensity,
    &c2_src->Intensity, c2_srcLocation);
}

static void c2_array_uint8_T_2D_Copy(SFc2_modelInstanceStruct *chartInstance,
  const emlrtStack *c2_sp, c2_coder_array_uint8_T_2D *c2_dst, const
  c2_coder_array_uint8_T_2D *c2_src, const emlrtRTEInfo *c2_srcLocation)
{
  int32_T c2_i;
  c2_array_uint8_T_2D_SetSize(chartInstance, c2_sp, c2_dst, c2_srcLocation,
    c2_src->size[0], c2_src->size[1]);
  for (c2_i = 0; c2_i < c2_src->vector.numel; c2_i++) {
    c2_dst->vector.data[c2_i] = c2_src->vector.data[c2_i];
  }
}

static void c2_n_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_c_pointclouds_inter *c2_pArray)
{
  (void)chartInstance;
  c2_pArray->size[0] = 0;
  c2_pArray->size[1] = 0;
}

static void c2_o_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_c_pointclouds_inter *c2_pArray)
{
  int32_T c2_b_i;
  int32_T c2_i;
  int32_T c2_numEl;
  c2_numEl = 1;
  for (c2_i = 0; c2_i < 2; c2_i++) {
    c2_numEl *= c2_pArray->size[c2_i];
  }

  for (c2_b_i = 0; c2_b_i < c2_numEl; c2_b_i++) {
    c2_e_array_pointclouds_internal_code(chartInstance, &c2_pArray->data[c2_b_i]);
  }
}

static void c2_array_boolean_T_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_boolean_T *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (boolean_T *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
}

static void c2_array_boolean_T_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_boolean_T *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data != (boolean_T *)
       NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_array_real_T_2D_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_real_T_2D *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (real_T *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
  c2_coderArray->size[1] = 0;
}

static void c2_array_boolean_T_2D_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_boolean_T_2D *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (boolean_T *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
  c2_coderArray->size[1] = 0;
}

static void c2_array_int32_T_2D_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_int32_T_2D *c2_coderArray)
{
  (void)chartInstance;
  c2_coderArray->vector.data = (int32_T *)NULL;
  c2_coderArray->vector.numel = 0;
  c2_coderArray->vector.allocated = 0;
  c2_coderArray->vector.owner = true;
  c2_coderArray->size[0] = 0;
  c2_coderArray->size[1] = 0;
}

static void c2_array_real_T_2D_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_real_T_2D *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data != (real_T *)
       NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_array_boolean_T_2D_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_boolean_T_2D *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data != (boolean_T *)
       NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void c2_array_int32_T_2D_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_int32_T_2D *c2_coderArray)
{
  (void)chartInstance;
  if (c2_coderArray->vector.owner && (c2_coderArray->vector.data != (int32_T *)
       NULL)) {
    emlrtFreeMex(c2_coderArray->vector.data);
  }
}

static void init_dsm_address_info(SFc2_modelInstanceStruct *chartInstance)
{
  (void)chartInstance;
}

static void init_simulink_io_address(SFc2_modelInstanceStruct *chartInstance)
{
  chartInstance->c2_covrtInstance = (CovrtStateflowInstance *)
    sfrtGetCovrtInstance(chartInstance->S);
  chartInstance->c2_fEmlrtCtx = (void *)sfrtGetEmlrtCtx(chartInstance->S);
  chartInstance->c2_b_cloud = (real32_T (*)[216000])ssGetInputPortSignal_wrapper
    (chartInstance->S, 0);
  chartInstance->c2_path = (uint32_T (*)[72000])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_model_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(1890842977U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(3993026775U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(2186827779U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(2889288521U);
}

mxArray *sf_c2_model_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,2);
  mxSetCell(mxcell3p, 0, mxCreateString(
             "vision.internal.buildable.ComputeMetricBuildable"));
  mxSetCell(mxcell3p, 1, mxCreateString(
             "vision.internal.buildable.kdtreeBuildable"));
  return(mxcell3p);
}

mxArray *sf_c2_model_jit_fallback_info(void)
{
  const char *infoFields[] = { "fallbackType", "fallbackReason",
    "hiddenFallbackType", "hiddenFallbackReason", "incompatibleSymbol" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 5, infoFields);
  mxArray *fallbackType = mxCreateString("late");
  mxArray *fallbackReason = mxCreateString("ir_function_calls");
  mxArray *hiddenFallbackType = mxCreateString("");
  mxArray *hiddenFallbackReason = mxCreateString("");
  mxArray *incompatibleSymbol = mxCreateString("ComputeMetric_ssd_single");
  mxSetField(mxInfo, 0, infoFields[0], fallbackType);
  mxSetField(mxInfo, 0, infoFields[1], fallbackReason);
  mxSetField(mxInfo, 0, infoFields[2], hiddenFallbackType);
  mxSetField(mxInfo, 0, infoFields[3], hiddenFallbackReason);
  mxSetField(mxInfo, 0, infoFields[4], incompatibleSymbol);
  return mxInfo;
}

mxArray *sf_c2_model_updateBuildInfo_args_info(void)
{
  mxArray *mxBIArgs = mxCreateCellMatrix(1,0);
  return mxBIArgs;
}

static const mxArray *sf_get_sim_state_info_c2_model(void)
{
  const char *infoFields[] = { "chartChecksum", "varInfo" };

  mxArray *mxInfo = mxCreateStructMatrix(1, 1, 2, infoFields);
  mxArray *mxVarInfo = sf_mex_decode(
    "eNpjYPT0ZQACPiCWYGRgYAPSHEDMxAABrFA+IxKGiLPAxRWAuKSyIBUkXlyU7JkCpPMSc8H8xNI"
    "Kz7y0fLD5FgwI89kImM8JFYeAD/aU6RdxAOk3QNLPgkU/C5J+ASCvILEkgw/KBwA4uQ3u"
    );
  mxArray *mxChecksum = mxCreateDoubleMatrix(1, 4, mxREAL);
  sf_c2_model_get_check_sum(&mxChecksum);
  mxSetField(mxInfo, 0, infoFields[0], mxChecksum);
  mxSetField(mxInfo, 0, infoFields[1], mxVarInfo);
  return mxInfo;
}

static const char* sf_get_instance_specialization(void)
{
  return "sq8WucpmdEc1b7Daw4pDLbD";
}

static void sf_opaque_initialize_c2_model(void *chartInstanceVar)
{
  initialize_params_c2_model((SFc2_modelInstanceStruct*) chartInstanceVar);
  initialize_c2_model((SFc2_modelInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_enable_c2_model(void *chartInstanceVar)
{
  enable_c2_model((SFc2_modelInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_disable_c2_model(void *chartInstanceVar)
{
  disable_c2_model((SFc2_modelInstanceStruct*) chartInstanceVar);
}

static void sf_opaque_gateway_c2_model(void *chartInstanceVar)
{
  sf_gateway_c2_model((SFc2_modelInstanceStruct*) chartInstanceVar);
}

static const mxArray* sf_opaque_get_sim_state_c2_model(SimStruct* S)
{
  return get_sim_state_c2_model((SFc2_modelInstanceStruct *)
    sf_get_chart_instance_ptr(S));     /* raw sim ctx */
}

static void sf_opaque_set_sim_state_c2_model(SimStruct* S, const mxArray *st)
{
  set_sim_state_c2_model((SFc2_modelInstanceStruct*)sf_get_chart_instance_ptr(S),
    st);
}

static void sf_opaque_cleanup_runtime_resources_c2_model(void *chartInstanceVar)
{
  if (chartInstanceVar!=NULL) {
    SimStruct *S = ((SFc2_modelInstanceStruct*) chartInstanceVar)->S;
    if (sim_mode_is_rtw_gen(S) || sim_mode_is_external(S)) {
      sf_clear_rtw_identifier(S);
      unload_model_optimization_info();
    }

    mdl_cleanup_runtime_resources_c2_model((SFc2_modelInstanceStruct*)
      chartInstanceVar);
    utFree(chartInstanceVar);
    if (ssGetUserData(S)!= NULL) {
      sf_free_ChartRunTimeInfo(S);
    }

    ssSetUserData(S,NULL);
  }
}

static void sf_opaque_mdl_start_c2_model(void *chartInstanceVar)
{
  mdl_start_c2_model((SFc2_modelInstanceStruct*) chartInstanceVar);
  if (chartInstanceVar) {
    sf_reset_warnings_ChartRunTimeInfo(((SFc2_modelInstanceStruct*)
      chartInstanceVar)->S);
  }
}

static void sf_opaque_mdl_terminate_c2_model(void *chartInstanceVar)
{
  mdl_terminate_c2_model((SFc2_modelInstanceStruct*) chartInstanceVar);
}

extern unsigned int sf_machine_global_initializer_called(void);
static void mdlProcessParameters_c2_model(SimStruct *S)
{
  mdlProcessParamsCommon(S);
  if (sf_machine_global_initializer_called()) {
    initialize_params_c2_model((SFc2_modelInstanceStruct*)
      sf_get_chart_instance_ptr(S));
  }
}

const char* sf_c2_model_get_post_codegen_info(void)
{
  int i;
  const char* encStrCodegen [20] = {
    "eNrdWE2P20QYnqzCqkVlVSSk9lCpHMsBiW5B9IDobmMHIu2yEc62EkJCE/tNPNrxjHc+kk3P/A7",
    "Eb0E9cEJC4sB/4MIRbrzjONngDbseR+q2WPJ6x/YzzzvPvF8OafUOCR47eO7dIWQbrzfw3CLz46",
    "1y3Fo55/fb5LNy3H+bkDilyvTESBL/I5YJjEFEdjRiZ55YYbM+VTTTDXgFzeBr0JJbw6TwM56JE",
    "SgQMU6QS2W8eDXLLGfipGtF7Jj185TFaZRKy5OnOCFNjgSf/Rdvbk0fGQOmIDZdgMSkStpx2uV0",
    "fLkKykw7KcQn2mbeWmkwkc3dUvWh5YblHMIziHtCG4oq6CvWGxlqoGPOvD2E6WiBllnOGRX1tU6",
    "pjiBH7zBwnCf498gaVK8mL/INmaBGKkZ5mPGO8/Ca2D5HOw/Rrbm3ziYzAQzteMzE2KmrbAYC14",
    "9+UkOrUUdOQNExHAnPGHSrC8+KDV76Zf0Y7Dm3bBSDNpvvim6ELXjDCSqkG/J2Y9GhnGs/7EDmB",
    "zABXvAH1NAG2Dm/B1hrlgzkM6pcFHhGkhXs1EKJ7UiRsPo7PKmgioT7FSbPGnCWOZeCBGVemr6c",
    "6CqftNrIrINhFBwc1OS7iO0JA2pEY6id+xRlGtDgwq88eROm6ZA7NKpkilXWngFEYyjRIyuCqVQ",
    "nqLFvkj3XykWCHxqSMQRgoEgYIXr3M8ptTZszjRnOucexxozlx4tYFz+NwDGNU0hcPWEcDkG7CX",
    "Tt/Ix1ZB9XO2FmFoCOFcvrRpLVkGAhcSoNZjkcixMhp6KrZBaVHcElfgWAWYMqgWXhKZYlNeui8",
    "fWsVnA6cJ7VpD3LqOF06HzjCxBYWdxaXSWkMUZVKLB1Q4M2wUbsBZZ2oZk22E7NwiIGkqIfvdvy",
    "60ffLcePlrHU0wOFO0WxDAvslPaHRbMHA5ZBcSOi2FPMh+XheD8i57w3ty7n3cL/Wg1xZEPc4xV",
    "ce40+N1Zwt8txvPtd5vqSKu+tGvqus7eKIxdw57ourg9W8K01vGTlusl+7K3g3qnwtCu47VKjX3",
    "4Md3598dMPH7z87Y+/v/2+uwn/z57+u1OO7y36sWXFmlxI6u7dL6/Y/zuV/Xdjffr4uY3zLAnjh",
    "8NPAzr9OA8OhkGjeFvcfx9PgwmtyI8q7iXlt5UbUzvv+av+un3F/DdX/ImQP59shn9vr7qP6/Rq",
    "/0uvNsmpSXfeoLxwXXnoOu2sk7darxhHXjFu0/X55uM3/f3L8gCpvH/7NV5H9dq0Lr9u6/qd+NW",
    "h++X48+U3cidlPFnTpZePsZEerXv6P/Hvvzz1W/QJodOv/JHvm0f7gvIZtuXzz57ydl+535eWjx",
    "RQvf7b5zrqEFnT962r87cq8e3GUyYSOdUfPtz9ZHeTuvYP2Iz9HQ==",
    ""
  };

  static char newstr [1405] = "";
  newstr[0] = '\0';
  for (i = 0; i < 20; i++) {
    strcat(newstr, encStrCodegen[i]);
  }

  return newstr;
}

static void mdlSetWorkWidths_c2_model(SimStruct *S)
{
  const char* newstr = sf_c2_model_get_post_codegen_info();
  sf_set_work_widths(S, newstr);
  ssSetChecksum0(S,(239444174U));
  ssSetChecksum1(S,(2663545553U));
  ssSetChecksum2(S,(3956589609U));
  ssSetChecksum3(S,(1183079673U));
}

static void mdlRTW_c2_model(SimStruct *S)
{
  if (sim_mode_is_rtw_gen(S)) {
    ssWriteRTWStrParam(S, "StateflowChartType", "Embedded MATLAB");
  }
}

static void mdlSetupRuntimeResources_c2_model(SimStruct *S)
{
  SFc2_modelInstanceStruct *chartInstance;
  chartInstance = (SFc2_modelInstanceStruct *)utMalloc(sizeof
    (SFc2_modelInstanceStruct));
  if (chartInstance==NULL) {
    sf_mex_error_message("Could not allocate memory for chart instance.");
  }

  memset(chartInstance, 0, sizeof(SFc2_modelInstanceStruct));
  chartInstance->chartInfo.chartInstance = chartInstance;
  chartInstance->chartInfo.isEMLChart = 1;
  chartInstance->chartInfo.chartInitialized = 0;
  chartInstance->chartInfo.sFunctionGateway = sf_opaque_gateway_c2_model;
  chartInstance->chartInfo.initializeChart = sf_opaque_initialize_c2_model;
  chartInstance->chartInfo.mdlStart = sf_opaque_mdl_start_c2_model;
  chartInstance->chartInfo.mdlTerminate = sf_opaque_mdl_terminate_c2_model;
  chartInstance->chartInfo.mdlCleanupRuntimeResources =
    sf_opaque_cleanup_runtime_resources_c2_model;
  chartInstance->chartInfo.enableChart = sf_opaque_enable_c2_model;
  chartInstance->chartInfo.disableChart = sf_opaque_disable_c2_model;
  chartInstance->chartInfo.getSimState = sf_opaque_get_sim_state_c2_model;
  chartInstance->chartInfo.setSimState = sf_opaque_set_sim_state_c2_model;
  chartInstance->chartInfo.getSimStateInfo = sf_get_sim_state_info_c2_model;
  chartInstance->chartInfo.zeroCrossings = NULL;
  chartInstance->chartInfo.outputs = NULL;
  chartInstance->chartInfo.derivatives = NULL;
  chartInstance->chartInfo.mdlRTW = mdlRTW_c2_model;
  chartInstance->chartInfo.mdlSetWorkWidths = mdlSetWorkWidths_c2_model;
  chartInstance->chartInfo.extModeExec = NULL;
  chartInstance->chartInfo.restoreLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.restoreBeforeLastMajorStepConfiguration = NULL;
  chartInstance->chartInfo.storeCurrentConfiguration = NULL;
  chartInstance->chartInfo.callAtomicSubchartUserFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartAutoFcn = NULL;
  chartInstance->chartInfo.callAtomicSubchartEventFcn = NULL;
  chartInstance->S = S;
  chartInstance->chartInfo.dispatchToExportedFcn = NULL;
  sf_init_ChartRunTimeInfo(S, &(chartInstance->chartInfo), false, 0);
  init_dsm_address_info(chartInstance);
  init_simulink_io_address(chartInstance);
  if (!sim_mode_is_rtw_gen(S)) {
  }

  mdl_setup_runtime_resources_c2_model(chartInstance);
}

void c2_model_method_dispatcher(SimStruct *S, int_T method, void *data)
{
  switch (method) {
   case SS_CALL_MDL_SETUP_RUNTIME_RESOURCES:
    mdlSetupRuntimeResources_c2_model(S);
    break;

   case SS_CALL_MDL_SET_WORK_WIDTHS:
    mdlSetWorkWidths_c2_model(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_c2_model(S);
    break;

   default:
    /* Unhandled method */
    sf_mex_error_message("Stateflow Internal Error:\n"
                         "Error calling c2_model_method_dispatcher.\n"
                         "Can't handle method %d.\n", method);
    break;
  }
}
