#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
    this->rawBits = 0;
}

Fixed::Fixed(int value)
{
    this->rawBits = value << this->fracBits;
}

Fixed::Fixed(float value)
{
	this->rawBits = roundf(value * (1 << this->fracBits));
}

Fixed::Fixed(const Fixed &fixed)
{
    *this = fixed;
}

int Fixed::getRawBits(void) const
{
    return this->rawBits;
}

void    Fixed::setRawBits(int const raw)
{
    this->rawBits = raw;
}

int Fixed::toInt() const {
	return this->rawBits >> this->fracBits;
}

float Fixed::toFloat() const {
	return (float)this->rawBits / (1 << this->fracBits);
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    this->setRawBits(fixed.getRawBits());
    return *this;
}

bool Fixed::operator>(const Fixed &fixed) const
{
    return (*this).getRawBits() > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) const
{
    return (*this).getRawBits() < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const
{
    return (*this).getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const
{
    return (*this).getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const
{
    return (*this).getRawBits() == fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const
{
    return (*this).getRawBits() != fixed.getRawBits();
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
    return Fixed((*this).toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
    return Fixed((*this).toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
    return Fixed((*this).toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const
{
    return Fixed((*this).toFloat() / fixed.toFloat());
}

Fixed& Fixed::operator++(void)
{
    ++this->rawBits;
    return *this;
} 

Fixed Fixed::operator++(int)
{
    Fixed result(*this);
    result.rawBits = this->rawBits++;
    return result;
}

Fixed& Fixed::operator--(void)
{
    --this->rawBits;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed result(*this);
    result.rawBits = this->rawBits--;
    return result;
}

std::ostream &operator<<(std::ostream &os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return a;
    return b;
}

Fixed::~Fixed()
{
}