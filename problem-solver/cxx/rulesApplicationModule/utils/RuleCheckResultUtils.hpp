/*
* This source file is part of an OSTIS project. For the latest info, see http://ostis.net
* Distributed under the MIT License
* (See accompanying file COPYING.MIT or copy at http://opensource.org/licenses/MIT)
*/

#pragma once

#include "model/StatementsCheckResult.hpp"

namespace rulesApplicationModule
{

class RuleCheckResultUtils
{
public:
  static size_t getReplacementCombinationsNumber(const Replacements & replacements);
};

}
