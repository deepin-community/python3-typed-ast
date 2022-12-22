/* File automatically generated by Parser/asdl_c.py. */

#include "../Include/asdl.h"

typedef struct _mod *mod_ty;

typedef struct _stmt *stmt_ty;

typedef struct _expr *expr_ty;

typedef enum _expr_context { Load=1, Store=2, Del=3, AugLoad=4, AugStore=5, Param=6 }
                             expr_context_ty;

typedef struct _slice *slice_ty;

typedef enum _boolop { And=1, Or=2 } boolop_ty;

typedef enum _operator { Add=1, Sub=2, Mult=3, Div=4, Mod=5, Pow=6, LShift=7, RShift=8, BitOr=9,
                         BitXor=10, BitAnd=11, FloorDiv=12 } operator_ty;

typedef enum _unaryop { Invert=1, Not=2, UAdd=3, USub=4 } unaryop_ty;

typedef enum _cmpop { Eq=1, NotEq=2, Lt=3, LtE=4, Gt=5, GtE=6, Is=7, IsNot=8, In=9, NotIn=10 }
                      cmpop_ty;

typedef struct _comprehension *comprehension_ty;

typedef struct _excepthandler *excepthandler_ty;

typedef struct _arguments *arguments_ty;

typedef struct _keyword *keyword_ty;

typedef struct _alias *alias_ty;

typedef struct _type_ignore *type_ignore_ty;


enum _mod_kind {Module_kind=1, Interactive_kind=2, Expression_kind=3, FunctionType_kind=4,
                 Suite_kind=5};
struct _mod {
        enum _mod_kind kind;
        union {
                struct {
                        asdl_seq *body;
                        asdl_seq *type_ignores;
                } Module;
                
                struct {
                        asdl_seq *body;
                } Interactive;
                
                struct {
                        expr_ty body;
                } Expression;
                
                struct {
                        asdl_seq *argtypes;
                        expr_ty returns;
                } FunctionType;
                
                struct {
                        asdl_seq *body;
                } Suite;
                
        } v;
};

enum _stmt_kind {FunctionDef_kind=1, ClassDef_kind=2, Return_kind=3, Delete_kind=4, Assign_kind=5,
                  AugAssign_kind=6, Print_kind=7, For_kind=8, While_kind=9, If_kind=10,
                  With_kind=11, Raise_kind=12, TryExcept_kind=13, TryFinally_kind=14,
                  Assert_kind=15, Import_kind=16, ImportFrom_kind=17, Exec_kind=18, Global_kind=19,
                  Expr_kind=20, Pass_kind=21, Break_kind=22, Continue_kind=23};
struct _stmt {
        enum _stmt_kind kind;
        union {
                struct {
                        identifier name;
                        arguments_ty args;
                        asdl_seq *body;
                        asdl_seq *decorator_list;
                        string type_comment;
                } FunctionDef;
                
                struct {
                        identifier name;
                        asdl_seq *bases;
                        asdl_seq *body;
                        asdl_seq *decorator_list;
                } ClassDef;
                
                struct {
                        expr_ty value;
                } Return;
                
                struct {
                        asdl_seq *targets;
                } Delete;
                
                struct {
                        asdl_seq *targets;
                        expr_ty value;
                        string type_comment;
                } Assign;
                
                struct {
                        expr_ty target;
                        operator_ty op;
                        expr_ty value;
                } AugAssign;
                
                struct {
                        expr_ty dest;
                        asdl_seq *values;
                        bool nl;
                } Print;
                
                struct {
                        expr_ty target;
                        expr_ty iter;
                        asdl_seq *body;
                        asdl_seq *orelse;
                        string type_comment;
                } For;
                
                struct {
                        expr_ty test;
                        asdl_seq *body;
                        asdl_seq *orelse;
                } While;
                
                struct {
                        expr_ty test;
                        asdl_seq *body;
                        asdl_seq *orelse;
                } If;
                
                struct {
                        expr_ty context_expr;
                        expr_ty optional_vars;
                        asdl_seq *body;
                        string type_comment;
                } With;
                
                struct {
                        expr_ty type;
                        expr_ty inst;
                        expr_ty tback;
                } Raise;
                
                struct {
                        asdl_seq *body;
                        asdl_seq *handlers;
                        asdl_seq *orelse;
                } TryExcept;
                
                struct {
                        asdl_seq *body;
                        asdl_seq *finalbody;
                } TryFinally;
                
                struct {
                        expr_ty test;
                        expr_ty msg;
                } Assert;
                
                struct {
                        asdl_seq *names;
                } Import;
                
                struct {
                        identifier module;
                        asdl_seq *names;
                        int level;
                } ImportFrom;
                
                struct {
                        expr_ty body;
                        expr_ty globals;
                        expr_ty locals;
                } Exec;
                
                struct {
                        asdl_seq *names;
                } Global;
                
                struct {
                        expr_ty value;
                } Expr;
                
        } v;
        int lineno;
        int col_offset;
};

enum _expr_kind {BoolOp_kind=1, BinOp_kind=2, UnaryOp_kind=3, Lambda_kind=4, IfExp_kind=5,
                  Dict_kind=6, Set_kind=7, ListComp_kind=8, SetComp_kind=9, DictComp_kind=10,
                  GeneratorExp_kind=11, Yield_kind=12, Compare_kind=13, Call_kind=14, Repr_kind=15,
                  Num_kind=16, Str_kind=17, Attribute_kind=18, Subscript_kind=19, Name_kind=20,
                  List_kind=21, Tuple_kind=22};
struct _expr {
        enum _expr_kind kind;
        union {
                struct {
                        boolop_ty op;
                        asdl_seq *values;
                } BoolOp;
                
                struct {
                        expr_ty left;
                        operator_ty op;
                        expr_ty right;
                } BinOp;
                
                struct {
                        unaryop_ty op;
                        expr_ty operand;
                } UnaryOp;
                
                struct {
                        arguments_ty args;
                        expr_ty body;
                } Lambda;
                
                struct {
                        expr_ty test;
                        expr_ty body;
                        expr_ty orelse;
                } IfExp;
                
                struct {
                        asdl_seq *keys;
                        asdl_seq *values;
                } Dict;
                
                struct {
                        asdl_seq *elts;
                } Set;
                
                struct {
                        expr_ty elt;
                        asdl_seq *generators;
                } ListComp;
                
                struct {
                        expr_ty elt;
                        asdl_seq *generators;
                } SetComp;
                
                struct {
                        expr_ty key;
                        expr_ty value;
                        asdl_seq *generators;
                } DictComp;
                
                struct {
                        expr_ty elt;
                        asdl_seq *generators;
                } GeneratorExp;
                
                struct {
                        expr_ty value;
                } Yield;
                
                struct {
                        expr_ty left;
                        asdl_int_seq *ops;
                        asdl_seq *comparators;
                } Compare;
                
                struct {
                        expr_ty func;
                        asdl_seq *args;
                        asdl_seq *keywords;
                        expr_ty starargs;
                        expr_ty kwargs;
                } Call;
                
                struct {
                        expr_ty value;
                } Repr;
                
                struct {
                        object n;
                } Num;
                
                struct {
                        string s;
                        string kind;
                } Str;
                
                struct {
                        expr_ty value;
                        identifier attr;
                        expr_context_ty ctx;
                } Attribute;
                
                struct {
                        expr_ty value;
                        slice_ty slice;
                        expr_context_ty ctx;
                } Subscript;
                
                struct {
                        identifier id;
                        expr_context_ty ctx;
                } Name;
                
                struct {
                        asdl_seq *elts;
                        expr_context_ty ctx;
                } List;
                
                struct {
                        asdl_seq *elts;
                        expr_context_ty ctx;
                } Tuple;
                
        } v;
        int lineno;
        int col_offset;
};

enum _slice_kind {Ellipsis_kind=1, Slice_kind=2, ExtSlice_kind=3, Index_kind=4};
struct _slice {
        enum _slice_kind kind;
        union {
                struct {
                        expr_ty lower;
                        expr_ty upper;
                        expr_ty step;
                } Slice;
                
                struct {
                        asdl_seq *dims;
                } ExtSlice;
                
                struct {
                        expr_ty value;
                } Index;
                
        } v;
};

struct _comprehension {
        expr_ty target;
        expr_ty iter;
        asdl_seq *ifs;
};

enum _excepthandler_kind {ExceptHandler_kind=1};
struct _excepthandler {
        enum _excepthandler_kind kind;
        union {
                struct {
                        expr_ty type;
                        expr_ty name;
                        asdl_seq *body;
                } ExceptHandler;
                
        } v;
        int lineno;
        int col_offset;
};

struct _arguments {
        asdl_seq *args;
        identifier vararg;
        identifier kwarg;
        asdl_seq *defaults;
        asdl_seq *type_comments;
};

struct _keyword {
        identifier arg;
        expr_ty value;
};

struct _alias {
        identifier name;
        identifier asname;
};

enum _type_ignore_kind {TypeIgnore_kind=1};
struct _type_ignore {
        enum _type_ignore_kind kind;
        union {
                struct {
                        int lineno;
                        string tag;
                } TypeIgnore;
                
        } v;
};


#define Module(a0, a1, a2) _Ta27_Module(a0, a1, a2)
mod_ty _Ta27_Module(asdl_seq * body, asdl_seq * type_ignores, PyArena *arena);
#define Interactive(a0, a1) _Ta27_Interactive(a0, a1)
mod_ty _Ta27_Interactive(asdl_seq * body, PyArena *arena);
#define Expression(a0, a1) _Ta27_Expression(a0, a1)
mod_ty _Ta27_Expression(expr_ty body, PyArena *arena);
#define FunctionType(a0, a1, a2) _Ta27_FunctionType(a0, a1, a2)
mod_ty _Ta27_FunctionType(asdl_seq * argtypes, expr_ty returns, PyArena *arena);
#define Suite(a0, a1) _Ta27_Suite(a0, a1)
mod_ty _Ta27_Suite(asdl_seq * body, PyArena *arena);
#define FunctionDef(a0, a1, a2, a3, a4, a5, a6, a7) _Ta27_FunctionDef(a0, a1, a2, a3, a4, a5, a6, a7)
stmt_ty _Ta27_FunctionDef(identifier name, arguments_ty args, asdl_seq * body, asdl_seq *
                          decorator_list, string type_comment, int lineno, int col_offset, PyArena
                          *arena);
#define ClassDef(a0, a1, a2, a3, a4, a5, a6) _Ta27_ClassDef(a0, a1, a2, a3, a4, a5, a6)
stmt_ty _Ta27_ClassDef(identifier name, asdl_seq * bases, asdl_seq * body, asdl_seq *
                       decorator_list, int lineno, int col_offset, PyArena *arena);
#define Return(a0, a1, a2, a3) _Ta27_Return(a0, a1, a2, a3)
stmt_ty _Ta27_Return(expr_ty value, int lineno, int col_offset, PyArena *arena);
#define Delete(a0, a1, a2, a3) _Ta27_Delete(a0, a1, a2, a3)
stmt_ty _Ta27_Delete(asdl_seq * targets, int lineno, int col_offset, PyArena *arena);
#define Assign(a0, a1, a2, a3, a4, a5) _Ta27_Assign(a0, a1, a2, a3, a4, a5)
stmt_ty _Ta27_Assign(asdl_seq * targets, expr_ty value, string type_comment, int lineno, int
                     col_offset, PyArena *arena);
#define AugAssign(a0, a1, a2, a3, a4, a5) _Ta27_AugAssign(a0, a1, a2, a3, a4, a5)
stmt_ty _Ta27_AugAssign(expr_ty target, operator_ty op, expr_ty value, int lineno, int col_offset,
                        PyArena *arena);
#define Print(a0, a1, a2, a3, a4, a5) _Ta27_Print(a0, a1, a2, a3, a4, a5)
stmt_ty _Ta27_Print(expr_ty dest, asdl_seq * values, bool nl, int lineno, int col_offset, PyArena
                    *arena);
#define For(a0, a1, a2, a3, a4, a5, a6, a7) _Ta27_For(a0, a1, a2, a3, a4, a5, a6, a7)
stmt_ty _Ta27_For(expr_ty target, expr_ty iter, asdl_seq * body, asdl_seq * orelse, string
                  type_comment, int lineno, int col_offset, PyArena *arena);
#define While(a0, a1, a2, a3, a4, a5) _Ta27_While(a0, a1, a2, a3, a4, a5)
stmt_ty _Ta27_While(expr_ty test, asdl_seq * body, asdl_seq * orelse, int lineno, int col_offset,
                    PyArena *arena);
#define If(a0, a1, a2, a3, a4, a5) _Ta27_If(a0, a1, a2, a3, a4, a5)
stmt_ty _Ta27_If(expr_ty test, asdl_seq * body, asdl_seq * orelse, int lineno, int col_offset,
                 PyArena *arena);
#define With(a0, a1, a2, a3, a4, a5, a6) _Ta27_With(a0, a1, a2, a3, a4, a5, a6)
stmt_ty _Ta27_With(expr_ty context_expr, expr_ty optional_vars, asdl_seq * body, string
                   type_comment, int lineno, int col_offset, PyArena *arena);
#define Raise(a0, a1, a2, a3, a4, a5) _Ta27_Raise(a0, a1, a2, a3, a4, a5)
stmt_ty _Ta27_Raise(expr_ty type, expr_ty inst, expr_ty tback, int lineno, int col_offset, PyArena
                    *arena);
#define TryExcept(a0, a1, a2, a3, a4, a5) _Ta27_TryExcept(a0, a1, a2, a3, a4, a5)
stmt_ty _Ta27_TryExcept(asdl_seq * body, asdl_seq * handlers, asdl_seq * orelse, int lineno, int
                        col_offset, PyArena *arena);
#define TryFinally(a0, a1, a2, a3, a4) _Ta27_TryFinally(a0, a1, a2, a3, a4)
stmt_ty _Ta27_TryFinally(asdl_seq * body, asdl_seq * finalbody, int lineno, int col_offset, PyArena
                         *arena);
#define Assert(a0, a1, a2, a3, a4) _Ta27_Assert(a0, a1, a2, a3, a4)
stmt_ty _Ta27_Assert(expr_ty test, expr_ty msg, int lineno, int col_offset, PyArena *arena);
#define Import(a0, a1, a2, a3) _Ta27_Import(a0, a1, a2, a3)
stmt_ty _Ta27_Import(asdl_seq * names, int lineno, int col_offset, PyArena *arena);
#define ImportFrom(a0, a1, a2, a3, a4, a5) _Ta27_ImportFrom(a0, a1, a2, a3, a4, a5)
stmt_ty _Ta27_ImportFrom(identifier module, asdl_seq * names, int level, int lineno, int
                         col_offset, PyArena *arena);
#define Exec(a0, a1, a2, a3, a4, a5) _Ta27_Exec(a0, a1, a2, a3, a4, a5)
stmt_ty _Ta27_Exec(expr_ty body, expr_ty globals, expr_ty locals, int lineno, int col_offset,
                   PyArena *arena);
#define Global(a0, a1, a2, a3) _Ta27_Global(a0, a1, a2, a3)
stmt_ty _Ta27_Global(asdl_seq * names, int lineno, int col_offset, PyArena *arena);
#define Expr(a0, a1, a2, a3) _Ta27_Expr(a0, a1, a2, a3)
stmt_ty _Ta27_Expr(expr_ty value, int lineno, int col_offset, PyArena *arena);
#define Pass(a0, a1, a2) _Ta27_Pass(a0, a1, a2)
stmt_ty _Ta27_Pass(int lineno, int col_offset, PyArena *arena);
#define Break(a0, a1, a2) _Ta27_Break(a0, a1, a2)
stmt_ty _Ta27_Break(int lineno, int col_offset, PyArena *arena);
#define Continue(a0, a1, a2) _Ta27_Continue(a0, a1, a2)
stmt_ty _Ta27_Continue(int lineno, int col_offset, PyArena *arena);
#define BoolOp(a0, a1, a2, a3, a4) _Ta27_BoolOp(a0, a1, a2, a3, a4)
expr_ty _Ta27_BoolOp(boolop_ty op, asdl_seq * values, int lineno, int col_offset, PyArena *arena);
#define BinOp(a0, a1, a2, a3, a4, a5) _Ta27_BinOp(a0, a1, a2, a3, a4, a5)
expr_ty _Ta27_BinOp(expr_ty left, operator_ty op, expr_ty right, int lineno, int col_offset,
                    PyArena *arena);
#define UnaryOp(a0, a1, a2, a3, a4) _Ta27_UnaryOp(a0, a1, a2, a3, a4)
expr_ty _Ta27_UnaryOp(unaryop_ty op, expr_ty operand, int lineno, int col_offset, PyArena *arena);
#define Lambda(a0, a1, a2, a3, a4) _Ta27_Lambda(a0, a1, a2, a3, a4)
expr_ty _Ta27_Lambda(arguments_ty args, expr_ty body, int lineno, int col_offset, PyArena *arena);
#define IfExp(a0, a1, a2, a3, a4, a5) _Ta27_IfExp(a0, a1, a2, a3, a4, a5)
expr_ty _Ta27_IfExp(expr_ty test, expr_ty body, expr_ty orelse, int lineno, int col_offset, PyArena
                    *arena);
#define Dict(a0, a1, a2, a3, a4) _Ta27_Dict(a0, a1, a2, a3, a4)
expr_ty _Ta27_Dict(asdl_seq * keys, asdl_seq * values, int lineno, int col_offset, PyArena *arena);
#define Set(a0, a1, a2, a3) _Ta27_Set(a0, a1, a2, a3)
expr_ty _Ta27_Set(asdl_seq * elts, int lineno, int col_offset, PyArena *arena);
#define ListComp(a0, a1, a2, a3, a4) _Ta27_ListComp(a0, a1, a2, a3, a4)
expr_ty _Ta27_ListComp(expr_ty elt, asdl_seq * generators, int lineno, int col_offset, PyArena
                       *arena);
#define SetComp(a0, a1, a2, a3, a4) _Ta27_SetComp(a0, a1, a2, a3, a4)
expr_ty _Ta27_SetComp(expr_ty elt, asdl_seq * generators, int lineno, int col_offset, PyArena
                      *arena);
#define DictComp(a0, a1, a2, a3, a4, a5) _Ta27_DictComp(a0, a1, a2, a3, a4, a5)
expr_ty _Ta27_DictComp(expr_ty key, expr_ty value, asdl_seq * generators, int lineno, int
                       col_offset, PyArena *arena);
#define GeneratorExp(a0, a1, a2, a3, a4) _Ta27_GeneratorExp(a0, a1, a2, a3, a4)
expr_ty _Ta27_GeneratorExp(expr_ty elt, asdl_seq * generators, int lineno, int col_offset, PyArena
                           *arena);
#define Yield(a0, a1, a2, a3) _Ta27_Yield(a0, a1, a2, a3)
expr_ty _Ta27_Yield(expr_ty value, int lineno, int col_offset, PyArena *arena);
#define Compare(a0, a1, a2, a3, a4, a5) _Ta27_Compare(a0, a1, a2, a3, a4, a5)
expr_ty _Ta27_Compare(expr_ty left, asdl_int_seq * ops, asdl_seq * comparators, int lineno, int
                      col_offset, PyArena *arena);
#define Call(a0, a1, a2, a3, a4, a5, a6, a7) _Ta27_Call(a0, a1, a2, a3, a4, a5, a6, a7)
expr_ty _Ta27_Call(expr_ty func, asdl_seq * args, asdl_seq * keywords, expr_ty starargs, expr_ty
                   kwargs, int lineno, int col_offset, PyArena *arena);
#define Repr(a0, a1, a2, a3) _Ta27_Repr(a0, a1, a2, a3)
expr_ty _Ta27_Repr(expr_ty value, int lineno, int col_offset, PyArena *arena);
#define Num(a0, a1, a2, a3) _Ta27_Num(a0, a1, a2, a3)
expr_ty _Ta27_Num(object n, int lineno, int col_offset, PyArena *arena);
#define Str(a0, a1, a2, a3, a4) _Ta27_Str(a0, a1, a2, a3, a4)
expr_ty _Ta27_Str(string s, string kind, int lineno, int col_offset, PyArena *arena);
#define Attribute(a0, a1, a2, a3, a4, a5) _Ta27_Attribute(a0, a1, a2, a3, a4, a5)
expr_ty _Ta27_Attribute(expr_ty value, identifier attr, expr_context_ty ctx, int lineno, int
                        col_offset, PyArena *arena);
#define Subscript(a0, a1, a2, a3, a4, a5) _Ta27_Subscript(a0, a1, a2, a3, a4, a5)
expr_ty _Ta27_Subscript(expr_ty value, slice_ty slice, expr_context_ty ctx, int lineno, int
                        col_offset, PyArena *arena);
#define Name(a0, a1, a2, a3, a4) _Ta27_Name(a0, a1, a2, a3, a4)
expr_ty _Ta27_Name(identifier id, expr_context_ty ctx, int lineno, int col_offset, PyArena *arena);
#define List(a0, a1, a2, a3, a4) _Ta27_List(a0, a1, a2, a3, a4)
expr_ty _Ta27_List(asdl_seq * elts, expr_context_ty ctx, int lineno, int col_offset, PyArena
                   *arena);
#define Tuple(a0, a1, a2, a3, a4) _Ta27_Tuple(a0, a1, a2, a3, a4)
expr_ty _Ta27_Tuple(asdl_seq * elts, expr_context_ty ctx, int lineno, int col_offset, PyArena
                    *arena);
#define Ellipsis(a0) _Ta27_Ellipsis(a0)
slice_ty _Ta27_Ellipsis(PyArena *arena);
#define Slice(a0, a1, a2, a3) _Ta27_Slice(a0, a1, a2, a3)
slice_ty _Ta27_Slice(expr_ty lower, expr_ty upper, expr_ty step, PyArena *arena);
#define ExtSlice(a0, a1) _Ta27_ExtSlice(a0, a1)
slice_ty _Ta27_ExtSlice(asdl_seq * dims, PyArena *arena);
#define Index(a0, a1) _Ta27_Index(a0, a1)
slice_ty _Ta27_Index(expr_ty value, PyArena *arena);
#define comprehension(a0, a1, a2, a3) _Ta27_comprehension(a0, a1, a2, a3)
comprehension_ty _Ta27_comprehension(expr_ty target, expr_ty iter, asdl_seq * ifs, PyArena *arena);
#define ExceptHandler(a0, a1, a2, a3, a4, a5) _Ta27_ExceptHandler(a0, a1, a2, a3, a4, a5)
excepthandler_ty _Ta27_ExceptHandler(expr_ty type, expr_ty name, asdl_seq * body, int lineno, int
                                     col_offset, PyArena *arena);
#define arguments(a0, a1, a2, a3, a4, a5) _Ta27_arguments(a0, a1, a2, a3, a4, a5)
arguments_ty _Ta27_arguments(asdl_seq * args, identifier vararg, identifier kwarg, asdl_seq *
                             defaults, asdl_seq * type_comments, PyArena *arena);
#define keyword(a0, a1, a2) _Ta27_keyword(a0, a1, a2)
keyword_ty _Ta27_keyword(identifier arg, expr_ty value, PyArena *arena);
#define alias(a0, a1, a2) _Ta27_alias(a0, a1, a2)
alias_ty _Ta27_alias(identifier name, identifier asname, PyArena *arena);
#define TypeIgnore(a0, a1, a2) _Ta27_TypeIgnore(a0, a1, a2)
type_ignore_ty _Ta27_TypeIgnore(int lineno, string tag, PyArena *arena);

PyObject* Ta27AST_mod2obj(mod_ty t);
mod_ty Ta27AST_obj2mod(PyObject* ast, PyArena* arena, int mode);
int Ta27AST_Check(PyObject* obj);
