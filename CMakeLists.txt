cmake_minimum_required(VERSION 3.1)
project(ScopeBasedLanguage)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)

# Source Files

set(COMPILER SOURCE main.cpp)

set(TYPE_DEFINITION Types.cpp Types.h)

set(PARAGRAPH_CLASS Paragraph.cpp Paragraph.h)
set(SENTENCE_CLASS Sentence.cpp Sentence.h)
set(TOKEN_CLASS Token.cpp Token.h)
set(SCOPE_CLASS Scope.cpp Scope.h)
set(TOKEN_STREAM_CLASS TokenStream.cpp TokenStream.h)
set(EXPRESSION_CLASS Expression.cpp Expression.h)
set(FUNCTION_CLASS Function.cpp Function.h)

set(LIB_BINTREE_CLASS lib/BinTree.cpp lib/BinTree.h)
set(LIB_BINTREE_NODE_CLASS lib/BinTreeNode.h lib/BinTreeNode.cpp)

# Targets
add_executable(paragraph ${PARAGRAPH_CLASS})


# Tests

set(BINTREE_TEST test/BinTreeTest.cpp)
set(BINTREE_NODE_TEST test/BinTreeNodeTest.cpp)
set(FUNCTION_TEST test/FunctionTest.cpp)
set(TYPE_TEST test/TypeTest.cpp)


add_executable(sbl_bintree_test ${BINTREE_TEST} ${LIB_BINTREE_CLASS})
add_executable(sbl_bintree_node_test ${BINTREE_NODE_TEST}  ${LIB_BINTREE_NODE_CLASS})
add_executable(sbl_function_test ${FUNCTION_TEST} ${FUNCTION_CLASS})
add_executable(sbl_type_test ${TYPE_TEST} ${TYPE_DEFINITION})

#add_executable(sbl_bintree_node_test ${BINTREE_NODE_TEST} lib/BinTreeNode.cpp) # This is not valid?
#add_executable(sbl_func_test ${SOURCE_FILES} Paragraph.cpp Paragraph.h Sentence.cpp Sentence.h Token.cpp Token.h Scope.cpp Scope.h Types.h Function.cpp Function.h Types.cpp Expression.cpp Expression.h TokenStream.cpp TokenStream.h lib/BinTreeNode.cpp lib/BinTreeNode.h lib/BinTreeNode.cpp lib/BinTreeNode.h)

add_executable(sbl_compiler ${SOURCE_FILES} Paragraph.cpp Paragraph.h Sentence.cpp Sentence.h Token.cpp Token.h Scope.cpp Scope.h Types.h Function.cpp Function.h Types.cpp Expression.cpp Expression.h TokenStream.cpp TokenStream.h lib/BinTreeNode.cpp lib/BinTreeNode.h lib/BinTreeNode.cpp lib/BinTreeNode.h)
