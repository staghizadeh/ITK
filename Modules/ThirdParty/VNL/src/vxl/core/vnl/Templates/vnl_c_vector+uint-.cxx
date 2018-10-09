#include <vcl_compiler.h>
// Disable warning
#ifdef VCL_VC
// 4146: unary minus operator applied to unsigned type, result still unsigned
# pragma warning(disable:4146)
#endif //VCL_VC

#include <vnl/vnl_c_vector.h>
#include <vnl/vnl_c_vector.hxx>

VNL_C_VECTOR_INSTANTIATE_ordered(unsigned int);