=====================================
 Sum of the Digits Python Assignment
=====================================

The following is another Python practice assignment.

Specifications
==============

The function ``sum_of_digits`` should be able to take a number in
string form, and return the sum of the digits of that number. Note
that the function takes a *string* as its only parameter (Python type
``str``), not an integer (Python type ``int``). To complete the
assignment, you will have to convert characters to integers. The way
you do this is up to you. The Python documentation on `Numeric Types`_
and the `integer function`_ may help you out.

.. _Numeric Types: http://docs.python.org/library/stdtypes.html#typesnumeric
.. _integer function: http://docs.python.org/library/functions.html#int

Examples
========

.. code-block:: python

    >>> sum_of_digits('1234')
    10
    >>> sum_of_digits('434')
    11
    >>> sum_of_digits('1111')
    4
    >>> sum_of_digits('')
    0
    >>> sum_of_digits('abcd')
    SomeError (I will help you with this)

Purpose
=======

* Review basic ``git`` skills.
* Review of Test-Driven Development in Python using ``unittest``.
* Practice writing tests for TDD.
* Practice basic Python data manipulation skills.

Instructions
============

* Log in to your GitHub account.
* Fork my repository by following GitHub's guide to `Forking a Repo`_.
* Clone the code from your new repository using the GitHub client.
* Run the test suite by running ``python test_sum_digits.py`` on the
  command-line. Zero tests should be run.
* Add tests to ``test_sum_digits.py`` to match the specifications.
    * Don't write any code yet! Make sure to write the tests first.
    * Don't forget to add tests for the empty string. Don't worry about
      error checking; I will help you with this later. Remember that your
      code is only as good as your tests!
* Complete the code in ``sum_digits.py`` such that it passes all the
  tests.
* Add extra tests if necessary and refactor the code.
* Commit the code locally using the GitHub client.
* Sync the code to your repository.
* Submit a pull request to my original repository.

.. _Forking a Repo: https://help.github.com/articles/fork-a-repo

Extras
======

I will help you with error checking at our next meeting.
