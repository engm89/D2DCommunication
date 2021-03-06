//
// Generated file, do not edit! Created by nedtool 5.3 from Register.msg.
//

#if defined(__clang__)
#  pragma clang diagnostic ignored "-Wreserved-id-macro"
#endif
#ifndef __REGISTER_M_H
#define __REGISTER_M_H

#include <omnetpp.h>

// nedtool version check
#define MSGC_VERSION 0x0503
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of nedtool: 'make clean' should help.
#endif



/**
 * Class generated from <tt>Register.msg:19</tt> by nedtool.
 * <pre>
 * //
 * // TODO generated message class
 * //
 * packet Register
 * {
 *     int x;
 *     int y;
 *     int senderId;
 * 
 * }
 * </pre>
 */
class Register : public ::omnetpp::cPacket
{
  protected:
    int x;
    int y;
    int senderId;

  private:
    void copy(const Register& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Register&);

  public:
    Register(const char *name=nullptr, short kind=0);
    Register(const Register& other);
    virtual ~Register();
    Register& operator=(const Register& other);
    virtual Register *dup() const override {return new Register(*this);}
    virtual void parsimPack(omnetpp::cCommBuffer *b) const override;
    virtual void parsimUnpack(omnetpp::cCommBuffer *b) override;

    // field getter/setter methods
    virtual int getX() const;
    virtual void setX(int x);
    virtual int getY() const;
    virtual void setY(int y);
    virtual int getSenderId() const;
    virtual void setSenderId(int senderId);
};

inline void doParsimPacking(omnetpp::cCommBuffer *b, const Register& obj) {obj.parsimPack(b);}
inline void doParsimUnpacking(omnetpp::cCommBuffer *b, Register& obj) {obj.parsimUnpack(b);}


#endif // ifndef __REGISTER_M_H

