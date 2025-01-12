/*
* This source file is part of an OSTIS project. For the latest info, see http://ostis.net
* Distributed under the MIT License
* (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
*/

#include <sc-memory/sc_addr.hpp>

namespace rulesApplicationModule
{

class ComparatorByNesting
{
public:
  bool operator()(std::pair<ScAddr, std::size_t> const & a, std::pair<ScAddr, std::size_t> const & b) const;
};

}
