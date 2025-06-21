/* Include files */

#include "model_sfun.h"
#include "c2_model.h"
#include <string.h>
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

static emlrtMCInfo c2_d_emlrtMCI = { 87,/* lineNo */
  33,                                  /* colNo */
  "eml_int_forloop_overflow_check",    /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_overflow_check.m"/* pName */
};

static emlrtRSInfo c2_emlrtRSI = { 7,  /* lineNo */
  "Path Planning/MATLAB Function",     /* fcnName */
  "#model:149"                         /* pathName */
};

static emlrtRSInfo c2_b_emlrtRSI = { 28,/* lineNo */
  "Path Planning/MATLAB Function",     /* fcnName */
  "#model:149"                         /* pathName */
};

static emlrtRSInfo c2_c_emlrtRSI = { 33,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_d_emlrtRSI = { 34,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_e_emlrtRSI = { 43,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_f_emlrtRSI = { 75,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_g_emlrtRSI = { 87,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_h_emlrtRSI = { 88,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_i_emlrtRSI = { 89,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_j_emlrtRSI = { 90,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_k_emlrtRSI = { 134,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_l_emlrtRSI = { 139,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_m_emlrtRSI = { 149,/* lineNo */
  "pointCloudBase",                    /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\pointCloudBase.m"/* pathName */
};

static emlrtRSInfo c2_n_emlrtRSI = { 596,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_o_emlrtRSI = { 22,/* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\eml\\eml\\+coder\\+internal\\matlabCodegenHandle.m"/* pathName */
};

static emlrtRSInfo c2_p_emlrtRSI = { 281,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_q_emlrtRSI = { 286,/* lineNo */
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

static emlrtRTEInfo c2_r_emlrtRTEI = { 7,/* lineNo */
  5,                                   /* colNo */
  "Path Planning/MATLAB Function",     /* fName */
  "#model:149"                         /* pName */
};

static emlrtRTEInfo c2_s_emlrtRTEI = { 594,/* lineNo */
  18,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRTEInfo c2_t_emlrtRTEI = { 596,/* lineNo */
  21,                                  /* colNo */
  "pointCloud",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pName */
};

static emlrtRSInfo c2_r_emlrtRSI = { 41,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_s_emlrtRSI = { 40,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_t_emlrtRSI = { 39,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

static emlrtRSInfo c2_u_emlrtRSI = { 599,/* lineNo */
  "pointCloud",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2024b\\toolbox\\shared\\pointclouds\\+pointclouds\\+internal\\+codegen\\+pc\\pointCloud.m"/* pathName */
};

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
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud *c2_this, real32_T
  c2_varargin_1[216000]);
static void c2_pointCloud_initializePointCloudArray(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud *c2_this);
static real32_T c2_sumColumnB(SFc2_modelInstanceStruct *chartInstance, real32_T
  c2_x[32]);
static void c2_handle_matlabCodegenDestructor(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud *c2_obj);
static void c2_emlrt_marshallIn(SFc2_modelInstanceStruct *chartInstance, const
  mxArray *c2_nullptr, const char_T *c2_identifier, real32_T c2_y[216000]);
static void c2_b_emlrt_marshallIn(SFc2_modelInstanceStruct *chartInstance, const
  mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real32_T c2_y[216000]);
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
static void c2_array_pointCloud_Constructor(SFc2_modelInstanceStruct
  *chartInstance, c2_pointCloud *c2_pStruct);
static void c2_d_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_pointclouds_interna *c2_coderArray);
static void c2_array_pointCloud_Destructor(SFc2_modelInstanceStruct
  *chartInstance, c2_pointCloud *c2_pStruct);
static void c2_e_array_pointclouds_internal_code(SFc2_modelInstanceStruct
  *chartInstance, c2_coder_array_pointclouds_interna *c2_coderArray);
static void c2_f_array_pointclouds_internal_code(SFc2_modelInstanceStruct
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
                     -1, 913);
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

  int32_T c2_i;
  int32_T c2_i1;
  int32_T c2_i2;
  int32_T c2_i3;
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
  for (c2_i2 = 0; c2_i2 < 216000; c2_i2++) {
    (*chartInstance->c2_path)[c2_i2] = chartInstance->c2_pc.Location[c2_i2];
  }

  c2_b_st.site = &c2_b_emlrtRSI;
  c2_handle_matlabCodegenDestructor(chartInstance, &c2_b_st,
    &chartInstance->c2_pc);
  emlrtHeapReferenceStackLeaveFcnR2012b(&c2_st);
  if (covrtIsSigCovEnabledFcn(chartInstance->c2_covrtInstance, 1U) != 0U) {
    for (c2_i3 = 0; c2_i3 < 216000; c2_i3++) {
      covrtSigUpdateFcnAssumingCovEnabled(chartInstance->c2_covrtInstance, 1U,
        (real_T)(*chartInstance->c2_path)[c2_i3]);
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
  const mxArray *c2_st = NULL;
  const mxArray *c2_y = NULL;
  c2_st = NULL;
  c2_y = NULL;
  sf_mex_assign(&c2_y, sf_mex_createcellmatrix(1, 1), false);
  c2_b_y = NULL;
  sf_mex_assign(&c2_b_y, sf_mex_create("y", *chartInstance->c2_path, 1, 0U, 1,
    0U, 2, 32, 6750), false);
  sf_mex_setcell(c2_y, 0, c2_b_y);
  sf_mex_assign(&c2_st, c2_y, false);
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
                      chartInstance->c2_fv);
  for (c2_i = 0; c2_i < 216000; c2_i++) {
    (*chartInstance->c2_path)[c2_i] = chartInstance->c2_fv[c2_i];
  }

  sf_mex_destroy(&c2_u);
  sf_mex_destroy(&c2_st);
}

static c2_pointCloud *c2_pointCloud_pointCloud(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud *c2_this, real32_T
  c2_varargin_1[216000])
{
  c2_pointCloud *c2_b_this;
  c2_pointCloud *c2_c_this;
  c2_pointCloud *c2_d_this;
  c2_pointCloud *c2_e_this;
  c2_pointCloud *c2_f_this;
  c2_pointCloud *c2_g_this;
  c2_pointCloud *c2_h_this;
  c2_pointCloud *c2_i_this;
  emlrtStack c2_b_st;
  emlrtStack c2_st;
  int32_T c2_i;
  c2_st.prev = c2_sp;
  c2_st.tls = c2_sp->tls;
  c2_b_st.prev = &c2_st;
  c2_b_st.tls = c2_st.tls;
  c2_b_this = c2_this;
  c2_b_this->HasKdtreeConstructed = false;
  c2_b_this->HasLocationHandleAllocated = false;
  c2_st.site = &c2_c_emlrtRSI;
  c2_c_this = c2_b_this;
  c2_b_this = c2_c_this;
  c2_b_st.site = &c2_f_emlrtRSI;
  c2_d_this = c2_b_this;
  c2_b_this = c2_d_this;
  for (c2_i = 0; c2_i < 216000; c2_i++) {
    c2_b_this->Location[c2_i] = c2_varargin_1[c2_i];
  }

  c2_b_st.site = &c2_g_emlrtRSI;
  c2_e_this = c2_b_this;
  c2_array_uint8_T_3D_SetSize(chartInstance, &c2_b_st, &c2_e_this->Color,
    &c2_e_emlrtRTEI, 0, 0, 0);
  c2_b_st.site = &c2_h_emlrtRSI;
  c2_f_this = c2_b_this;
  c2_array_real32_T_3D_SetSize(chartInstance, &c2_b_st, &c2_f_this->Normal,
    &c2_f_emlrtRTEI, 0, 0, 0);
  c2_b_st.site = &c2_i_emlrtRSI;
  c2_g_this = c2_b_this;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_b_st, &c2_g_this->Intensity,
    &c2_g_emlrtRTEI, 0, 0);
  c2_b_st.site = &c2_j_emlrtRSI;
  c2_h_this = c2_b_this;
  c2_array_real32_T_3D_SetSize(chartInstance, &c2_b_st, &c2_h_this->RangeData,
    &c2_h_emlrtRTEI, 0, 0, 0);
  c2_st.site = &c2_d_emlrtRSI;
  c2_pointCloud_initializePointCloudArray(chartInstance, &c2_st, c2_b_this);
  c2_st.site = &c2_t_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st,
    &c2_b_this->XLimitsInternal, &c2_j_emlrtRTEI, 0, 0);
  c2_st.site = &c2_s_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st,
    &c2_b_this->YLimitsInternal, &c2_k_emlrtRTEI, 0, 0);
  c2_st.site = &c2_r_emlrtRSI;
  c2_array_real32_T_2D_SetSize(chartInstance, &c2_st,
    &c2_b_this->ZLimitsInternal, &c2_l_emlrtRTEI, 0, 0);
  c2_st.site = &c2_e_emlrtRSI;
  c2_i_this = c2_b_this;
  c2_i_this->Kdtree = NULL;
  c2_i_this->LocationHandle = NULL;
  c2_b_this->matlabCodegenIsDeleted = false;
  return c2_b_this;
}

static void c2_pointCloud_initializePointCloudArray(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud *c2_this)
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
  c2_st.site = &c2_n_emlrtRSI;
  c2_varargin_1 = c2_this;
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

  c2_d_array_pointclouds_internal_code(chartInstance, &c2_data);
  c2_st.site = &c2_n_emlrtRSI;
  c2_array_pointclouds_internal_code(chartInstance, &c2_st, &c2_data,
    &c2_p_emlrtRTEI, 1, 1);
  c2_st.site = &c2_n_emlrtRSI;
  c2_f_array_pointclouds_internal_code(chartInstance, &c2_st,
    &c2_data.vector.data[0], &chartInstance->c2_r, &c2_p_emlrtRTEI);
  c2_b_array_pointclouds_internal_code(chartInstance, &chartInstance->c2_r);
  c2_st.site = &c2_u_emlrtRSI;
  c2_array_pointclouds_internal_code(chartInstance, &c2_st,
    &c2_this->PointCloudArrayData, &c2_q_emlrtRTEI, 1, 1);
  c2_d_loop_ub = 0;
  for (c2_i4 = 0; c2_i4 <= c2_d_loop_ub; c2_i4++) {
    c2_st.site = &c2_u_emlrtRSI;
    c2_f_array_pointclouds_internal_code(chartInstance, &c2_st,
      &c2_this->PointCloudArrayData.vector.data[c2_i4],
      &c2_data.vector.data[c2_i4], &c2_q_emlrtRTEI);
  }

  c2_e_array_pointclouds_internal_code(chartInstance, &c2_data);
}

static real32_T c2_sumColumnB(SFc2_modelInstanceStruct *chartInstance, real32_T
  c2_x[32])
{
  int32_T c2_b_k;
  int32_T c2_k;
  real32_T c2_y;
  (void)chartInstance;
  c2_y = c2_x[0];
  for (c2_k = 0; c2_k < 31; c2_k++) {
    c2_b_k = c2_k;
    c2_y += c2_x[c2_b_k + 1];
  }

  return c2_y;
}

static void c2_handle_matlabCodegenDestructor(SFc2_modelInstanceStruct
  *chartInstance, const emlrtStack *c2_sp, c2_pointCloud *c2_obj)
{
  void *c2_kdtreeObj;
  void *c2_locationPtr;
  c2_pointCloud *c2_this;
  (void)chartInstance;
  if (!c2_obj->matlabCodegenIsDeleted) {
    c2_obj->matlabCodegenIsDeleted = true;
    c2_this = c2_obj;
    if (c2_this->HasLocationHandleAllocated) {
      c2_locationPtr = c2_this->LocationHandle;
      kdtreeDeleteLocationDataPointer_single(c2_locationPtr);
      c2_this->HasLocationHandleAllocated = false;
    }

    if (c2_this->HasKdtreeConstructed) {
      c2_kdtreeObj = c2_this->Kdtree;
      kdtreeDeleteObj_single(c2_kdtreeObj);
      c2_this->HasKdtreeConstructed = false;
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
  mxArray *c2_nullptr, const char_T *c2_identifier, real32_T c2_y[216000])
{
  emlrtMsgIdentifier c2_thisId;
  c2_thisId.fIdentifier = (const char_T *)c2_identifier;
  c2_thisId.fParent = NULL;
  c2_thisId.bParentIsCell = false;
  c2_b_emlrt_marshallIn(chartInstance, sf_mex_dup(c2_nullptr), &c2_thisId, c2_y);
  sf_mex_destroy(&c2_nullptr);
}

static void c2_b_emlrt_marshallIn(SFc2_modelInstanceStruct *chartInstance, const
  mxArray *c2_u, const emlrtMsgIdentifier *c2_parentId, real32_T c2_y[216000])
{
  int32_T c2_i;
  sf_mex_import(c2_parentId, sf_mex_dup(c2_u), chartInstance->c2_b_fv, 0, 1, 0U,
                1, 0U, 2, 32, 6750);
  for (c2_i = 0; c2_i < 216000; c2_i++) {
    c2_y[c2_i] = chartInstance->c2_b_fv[c2_i];
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
  c2_d_array_pointclouds_internal_code(chartInstance,
    &c2_pStruct->PointCloudArrayData);
}

static void c2_d_array_pointclouds_internal_code(SFc2_modelInstanceStruct
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
  c2_e_array_pointclouds_internal_code(chartInstance,
    &c2_pStruct->PointCloudArrayData);
}

static void c2_e_array_pointclouds_internal_code(SFc2_modelInstanceStruct
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

static void c2_f_array_pointclouds_internal_code(SFc2_modelInstanceStruct
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
  chartInstance->c2_path = (real32_T (*)[216000])ssGetOutputPortSignal_wrapper
    (chartInstance->S, 1);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* SFunction Glue Code */
void sf_c2_model_get_check_sum(mxArray *plhs[])
{
  ((real_T *)mxGetPr((plhs[0])))[0] = (real_T)(4263314695U);
  ((real_T *)mxGetPr((plhs[0])))[1] = (real_T)(17721099U);
  ((real_T *)mxGetPr((plhs[0])))[2] = (real_T)(930094212U);
  ((real_T *)mxGetPr((plhs[0])))[3] = (real_T)(1805395575U);
}

mxArray *sf_c2_model_third_party_uses_info(void)
{
  mxArray * mxcell3p = mxCreateCellMatrix(1,1);
  mxSetCell(mxcell3p, 0, mxCreateString(
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
  mxArray *incompatibleSymbol = mxCreateString(
    "kdtreeDeleteLocationDataPointer_single");
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
  return "sM8qAqZGODIiS7JMPSkhr8B";
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
    "eNrdWN1u40QUnlSh2kVLtUhIywUSXHKDxHaF6AVi2+ZnMWpohNNF2hs0sU/i2Yxn3PlJGoR4BOC",
    "ed+CKJ0BC4hF4DG6QuOSM46TBDa3Hkba7WHLdsf3Nd+ab8+eQRtAjeOzhefiAkF283sFzhyyO14",
    "pxY+1c3G+ST4px/3VCooQqE4iRJP5HJGMYgwjtaMQuPLHCpn2qaKpr8AqawpegJbeGSeFnPBMjU",
    "CAinCCTynjxapZazsSka0XkmPVXCYuSMJGWx8c4IY1PBZ//F29mTR8Z20xBZLoAsUmUtOOky+n4",
    "ehWUmbUSiCbapt5aaTChzdxSdc9ywzIOnQuIAqENRRX0DesNDTXQMhfeHsJ0uETLNOOMiupaJ1S",
    "HkKF3GDjLYvx7ag2qV5EX+YZMUCMVo7yT8pbz8IrYPkc7e+jW3Ftnk5o2DO14zMTYqatsCgLXj3",
    "5SQatRS05B0TGcCs8YdKvrXOQbvPLL6jEYOLesFYM2XeyKroXNeTtTVEjX5O1GokU5137YgcxOY",
    "Ao8529TQ2tgF/weYK1ZPJBPqXJR4BlJVrBzCwW2JUXMqu/wtITKE+4XmDwrwFnqXApilHll+mqi",
    "m3zSaiPTFoZR++SkIt9VbCAMqBGNoHLuU5RpQINzv/LkjZmmQ+7QqJLJV1l5BhC1oUSPrGjPpJq",
    "gxr5J9lIrFwl+aIjH0AYDecLooHc/pdxWtDnVmOGce5xpzFh+vIh18VMLHNEogdjVE8ahB9pNoC",
    "vnZ6wjR7jaKTPzNuhIsaxqJFkNMRYSp9JgnsGZmAg5E10l07DoCK7xKwDMGlQJLAvHWJbUvIvGV",
    "7NawfnAeVad9iylhtOh840nILCyuLW6SkgjjKqOwNYNDdoGG7JvsLQLzbTBdmreyWMgzvvRtxt+",
    "/eibxfjRKpYCPVC4UxTLsMBO6WiYN3swYCnkN0KKPcViWByO90NyyXt353reHfyvURNHtsQdrOG",
    "aG/S5s4a7X4yj/a9T15eUee9V0HeTvWUcuYK71HV5fX8N39jAS9au2+zH4RrujRJPs4TbLTT66a",
    "+ff/3xu8c/fBsE3//28Jfn2/D/7um/e8X4nWU/tqpY0ytJ3b372Q37/6C0/26sewfnR+fPnpy2A",
    "xZ+/HmvH04SdXBcK96W99/D02BCy/OjioK4+LZyY2oXPX/ZX3dvmP/umj8R8ufj7fBvHZb3cZNe",
    "zX/p1SQZNcneK5QXbisP3aadVfJW4wXjyAvGbbs+33z8qr9/XR4gpffvv8TrKF/r1uWXbV1/EL8",
    "69G4x/nT1jdxKGI83dOnFY2ykR5ue/k/8+29P/ZZ9QsfpV/zI9+zRkaB8jm354rOnuN1X7vel1S",
    "MFVG/+9rmNOkQ29H2b6vy9Uny78YyJWM70Bw/3P9rfpq79A/LW/AI=",
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
  ssSetChecksum0(S,(3266246043U));
  ssSetChecksum1(S,(2403303056U));
  ssSetChecksum2(S,(2387167612U));
  ssSetChecksum3(S,(1790194117U));
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
