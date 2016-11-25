// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#ifndef RCPP_diffusr_RCPPEXPORTS_H_GEN_
#define RCPP_diffusr_RCPPEXPORTS_H_GEN_

#include <RcppEigen.h>
#include <Rcpp.h>

namespace diffusr {

    using namespace Rcpp;

    namespace {
        void validateSignature(const char* sig) {
            Rcpp::Function require = Rcpp::Environment::base_env()["require"];
            require("diffusr", Rcpp::Named("quietly") = true);
            typedef int(*Ptr_validate)(const char*);
            static Ptr_validate p_validate = (Ptr_validate)
                R_GetCCallable("diffusr", "diffusr_RcppExport_validate");
            if (!p_validate(sig)) {
                throw Rcpp::function_not_exported(
                    "C++ function with signature '" + std::string(sig) + "' not found in diffusr");
            }
        }
    }

    inline Eigen::VectorXd _heat_diffusion_cpp(const Eigen::VectorXd& v0, const Eigen::MatrixXd& W, double b) {
        typedef SEXP(*Ptr__heat_diffusion_cpp)(SEXP,SEXP,SEXP);
        static Ptr__heat_diffusion_cpp p__heat_diffusion_cpp = NULL;
        if (p__heat_diffusion_cpp == NULL) {
            validateSignature("Eigen::VectorXd(*_heat_diffusion_cpp)(const Eigen::VectorXd&,const Eigen::MatrixXd&,double)");
            p__heat_diffusion_cpp = (Ptr__heat_diffusion_cpp)R_GetCCallable("diffusr", "diffusr__heat_diffusion_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p__heat_diffusion_cpp(Rcpp::wrap(v0), Rcpp::wrap(W), Rcpp::wrap(b));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Eigen::VectorXd >(rcpp_result_gen);
    }

    inline Eigen::MatrixXd _stoch_col_norm_cpp(const Eigen::MatrixXd& W) {
        typedef SEXP(*Ptr__stoch_col_norm_cpp)(SEXP);
        static Ptr__stoch_col_norm_cpp p__stoch_col_norm_cpp = NULL;
        if (p__stoch_col_norm_cpp == NULL) {
            validateSignature("Eigen::MatrixXd(*_stoch_col_norm_cpp)(const Eigen::MatrixXd&)");
            p__stoch_col_norm_cpp = (Ptr__stoch_col_norm_cpp)R_GetCCallable("diffusr", "diffusr__stoch_col_norm_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p__stoch_col_norm_cpp(Rcpp::wrap(W));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Eigen::MatrixXd >(rcpp_result_gen);
    }

    inline Eigen::MatrixXd _laplacian_cpp(const Eigen::MatrixXd& W) {
        typedef SEXP(*Ptr__laplacian_cpp)(SEXP);
        static Ptr__laplacian_cpp p__laplacian_cpp = NULL;
        if (p__laplacian_cpp == NULL) {
            validateSignature("Eigen::MatrixXd(*_laplacian_cpp)(const Eigen::MatrixXd&)");
            p__laplacian_cpp = (Ptr__laplacian_cpp)R_GetCCallable("diffusr", "diffusr__laplacian_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p__laplacian_cpp(Rcpp::wrap(W));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Eigen::MatrixXd >(rcpp_result_gen);
    }

    inline Eigen::VectorXd _mrwr_cpp(const Eigen::VectorXd& p0, const Eigen::MatrixXd& W, const double r) {
        typedef SEXP(*Ptr__mrwr_cpp)(SEXP,SEXP,SEXP);
        static Ptr__mrwr_cpp p__mrwr_cpp = NULL;
        if (p__mrwr_cpp == NULL) {
            validateSignature("Eigen::VectorXd(*_mrwr_cpp)(const Eigen::VectorXd&,const Eigen::MatrixXd&,const double)");
            p__mrwr_cpp = (Ptr__mrwr_cpp)R_GetCCallable("diffusr", "diffusr__mrwr_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p__mrwr_cpp(Rcpp::wrap(p0), Rcpp::wrap(W), Rcpp::wrap(r));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Eigen::VectorXd >(rcpp_result_gen);
    }

    inline Rcpp::List _neighbors_cpp(const Rcpp::IntegerVector& node_idxs, const Rcpp::NumericMatrix& W, const int k, const bool use_edge_weights) {
        typedef SEXP(*Ptr__neighbors_cpp)(SEXP,SEXP,SEXP,SEXP);
        static Ptr__neighbors_cpp p__neighbors_cpp = NULL;
        if (p__neighbors_cpp == NULL) {
            validateSignature("Rcpp::List(*_neighbors_cpp)(const Rcpp::IntegerVector&,const Rcpp::NumericMatrix&,const int,const bool)");
            p__neighbors_cpp = (Ptr__neighbors_cpp)R_GetCCallable("diffusr", "diffusr__neighbors_cpp");
        }
        RObject rcpp_result_gen;
        {
            RNGScope RCPP_rngScope_gen;
            rcpp_result_gen = p__neighbors_cpp(Rcpp::wrap(node_idxs), Rcpp::wrap(W), Rcpp::wrap(k), Rcpp::wrap(use_edge_weights));
        }
        if (rcpp_result_gen.inherits("interrupted-error"))
            throw Rcpp::internal::InterruptedException();
        if (rcpp_result_gen.inherits("try-error"))
            throw Rcpp::exception(as<std::string>(rcpp_result_gen).c_str());
        return Rcpp::as<Rcpp::List >(rcpp_result_gen);
    }

}

#endif // RCPP_diffusr_RCPPEXPORTS_H_GEN_
