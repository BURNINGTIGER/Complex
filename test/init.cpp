#include <complex.hpp>
#include <catch.hpp>

SCENARIO("coplex init", "[init]"){
	Complex c1(0, 0);
	REQUIRE (c1.real() == 0);
	REQUIRE (c1.imag() == 0);
}

SCENARIO("params init", "[init with params]") 
{
	Complex c1(2, 2);
	REQUIRE(c1.real() == 2);
	REQUIRE(c1.imag() == 2);
}

SCENARIO("copy", "[copy]") 
{
	Complex A(1, 1);
	Complex B(A);
	REQUIRE(B.r() == 1);
	REQUIRE(B.i() == 1);
}

SCENARIO("*", "[*]") 
{
	Complex A(2, 2);
  Complex B(4, 3);
	Complex C(2, 14);
	REQUIRE(A*B==C);
}

SCENARIO("/", "/")
{
	Complex A(1, 1);
	Complex B(1, 1);
	Complex C(1, 1);
	REQUIRE(A/B==C);
}

SCENARIO("+=", "[+=]")
{
	Complex A(1, 1);
	Complex B(2, 2);
	Complex C(3, 3);
	REQUIRE((A+=B)==C);
}

SCENARIO("-=", "[-=]")
{
	Complex A(3, 3);
	Complex B(2, 2);
	Complex C(1, 1);
	REQUIRE((A-=B)==C);
}

SCENARIO("*=", "[*=]")
{
	Complex A(2, 2);
  Complex B(4, 3);
	Complex C(2, 14);
	REQUIRE((A*=B)==C);
}

SCENARIO("/=", "[/=]")
{
	Complex A(3, 1);
	Complex B(1,1);
	Complex C(2,-1);
	REQUIRE((A/=B)==C);
}

SCENARIO("=", "[oper=]")
{
	Complex A(1, 1);
	Complex B = A;
	REQUIRE(A == B);
}

SCENARIO("comp", "[oper==]")
{
	Complex A(2, 2);
	Complex B(2, 2);
	bool C;
	if (A == B)
		C = true;
	REQUIRE(C == true);
}
