/*
* Utils for calling OpenSSL
* (C) 2015 Jack Lloyd
*
* Botan is released under the Simplified BSD License (see license.txt)
*/

#ifndef BOTAN_CALL_OPENSSL_H__
#define BOTAN_CALL_OPENSSL_H__

#include <botan/secmem.h>
#include <botan/exceptn.h>
#include <memory>

#include <openssl/err.h>

namespace Botan {

class OpenSSL_Error : public Exception
   {
   public:
      OpenSSL_Error(const std::string& what) :
         Exception(what + " failed: " + ERR_error_string(ERR_get_error(), nullptr)) {}
   };

}

#endif
