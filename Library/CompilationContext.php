<?php

/*
 +--------------------------------------------------------------------------+
 | Zephir Language                                                          |
 +--------------------------------------------------------------------------+
 | Copyright (c) 2013-2014 Zephir Team and contributors                     |
 +--------------------------------------------------------------------------+
 | This source file is subject the MIT license, that is bundled with        |
 | this package in the file LICENSE, and is available through the           |
 | world-wide-web at the following url:                                     |
 | http://zephir-lang.com/license.html                                      |
 |                                                                          |
 | If you did not receive a copy of the MIT license and are unable          |
 | to obtain it through the world-wide-web, please send a note to           |
 | license@zephir-lang.com so we can mail you a copy immediately.           |
 +--------------------------------------------------------------------------+
*/

namespace Zephir;

/**
 * CompilationContext
 *
 * This class encapsulates important entities requiring during compilation
 */
class CompilationContext
{
    /**
     * @var EventsManager
     */
    public $eventsManager;

    /**
     * Compiler
     *
     * @var Compiler
     */
    public $compiler;

    /**
     * Current code printer
     *
     * @var CodePrinter
     */
    public $codePrinter;

    /**
     * Whether the current method is static or not
     *
     * @var boolean
     */
    public $staticContext;

    /**
     * Code printer for the header
     *
     * @var CodePrinter
     */
    public $headerPrinter;

    /**
     * Current symbol table
     *
     * @var SymbolTable
     */
    public $symbolTable;

    /**
     * Type inference data
     *
     * @var \Zephir\Passes\StaticTypeInference
     */
    public $typeInference;

    /**
     * Represents the class currently being compiled
     *
     * @var ClassDefinition
     */
    public $classDefinition;

    /**
     * Current method being compiled
     *
     * @var ClassMethod
     */
    public $currentMethod;

    /**
     * Represents the c-headers added to the file
     *
     * @var HeadersManager
     */
    public $headersManager;

    /**
     * Represents interned strings and concatenations made in the project
     *
     * @var StringsManager
     */
    public $stringsManager;

    /**
     * Tells if the the compilation is being made inside a cycle/loop
     *
     * @var int
     */
    public $insideCycle = 0;

    /**
     * Tells if the the compilation is being made inside a try/catch block
     *
     * @var int
     */
    public $insideTryCatch = 0;

    /**
     * Tells if the the compilation is being made inside a switch
     *
     * @var int
     */
    public $insideSwitch = 0;

    /**
     * The current branch, variables declared in conditional branches
     * must be market if they're used out of those branches
     */
    public $currentBranch = 0;

    /**
     * Helps to create graphs of conditional/jump branches in a specific method
     *
     * @var BranchManager
     */
    public $branchManager;

    /**
     * Manages both function and method call caches
     *
     * @var CacheManager
     */
    public $cacheManager;

    /**
     * Manages class renamings using keyword 'use'
     *
     * @var AliasManager
     */
    public $aliasManager;

    /**
     * Function Cache
     *
     * @var FunctionCache
     */
    public $functionCache;

    /**
     * Global config
     *
     * @var Config
     */
    public $config;

    /**
     * Global logger
     *
     * @var Logger
     */
    public $logger;

    /**
     * Transform class/interface name to FQN format
     *
     * @param string $className
     * @return string
     */
    public function getFullName($className)
    {
        return Utils::getFullName($className, $this->classDefinition->getNamespace(), $this->aliasManager);
    }
}
