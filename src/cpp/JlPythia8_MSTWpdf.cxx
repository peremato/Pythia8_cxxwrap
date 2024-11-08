// this file was auto-generated by wrapit 5168a24
#include "Wrapper.h"

#include "jlPythia8.h"
#include "dbg_msg.h"
#include "jlcxx/functions.hpp"
#include "jlcxx/stl.hpp"

namespace jlcxx {
  template<> struct IsMirroredType<Pythia8::MSTWpdf> : std::false_type { };
  template<> struct DefaultConstructible<Pythia8::MSTWpdf> : std::false_type { };
template<> struct SuperType<Pythia8::MSTWpdf> { typedef Pythia8::PDF type; };
}

// Class generating the wrapper for type Pythia8::MSTWpdf
// signature to use in the veto file: Pythia8::MSTWpdf
struct JlPythia8_MSTWpdf: public Wrapper {

  JlPythia8_MSTWpdf(jlcxx::Module& jlModule): Wrapper(jlModule){
    DEBUG_MSG("Adding wrapper for type Pythia8::MSTWpdf (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:331:7
    jlcxx::TypeWrapper<Pythia8::MSTWpdf>  t = jlModule.add_type<Pythia8::MSTWpdf>("Pythia8!MSTWpdf",
      jlcxx::julia_base_type<Pythia8::PDF>());
    type_ = std::unique_ptr<jlcxx::TypeWrapper<Pythia8::MSTWpdf>>(new jlcxx::TypeWrapper<Pythia8::MSTWpdf>(jlModule, t));
  }

  void add_methods() const{
    auto& t = *type_;
    t.template constructor<>(/*finalize=*/jlcxx::finalize_policy::yes);


    DEBUG_MSG("Adding wrapper for void Pythia8::MSTWpdf::MSTWpdf(int, int, std::string, Pythia8::Logger *) (" __HERE__ ")");
    // defined in /Users/mato/.julia/artifacts/1efdb4b729131034a90e03a49327ea90a4bfb780/include/Pythia8/PartonDistributions.h:336:3
    t.constructor<int>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<int, int>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<int, int, std::string>(/*finalize=*/jlcxx::finalize_policy::yes);
    t.constructor<int, int, std::string, Pythia8::Logger *>(/*finalize=*/jlcxx::finalize_policy::yes);
  }

private:
  std::unique_ptr<jlcxx::TypeWrapper<Pythia8::MSTWpdf>> type_;
};
std::shared_ptr<Wrapper> newJlPythia8_MSTWpdf(jlcxx::Module& module){
  return std::shared_ptr<Wrapper>(new JlPythia8_MSTWpdf(module));
}
