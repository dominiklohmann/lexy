// Copyright (C) 2020 Jonathan Müller <jonathanmueller.dev@gmail.com>
// This file is subject to the license terms in the LICENSE file
// found in the top-level directory of this distribution.

#include <lexy/_detail/stateless_lambda.hpp>

#include <doctest/doctest.h>

TEST_CASE("_detail::stateless_lambda")
{
    auto                                              lambda = [] { return 42; };
    lexy::_detail::stateless_lambda<decltype(lambda)> holder;
    CHECK(holder() == 42);
}

