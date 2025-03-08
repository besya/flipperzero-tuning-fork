#ifndef TUNINGS_H
#define TUNINGS_H

#include <stdint.h>
#include "constants.h"
#include "types.h"
#include "notes.h"

// MISCELLANEOUS
// Fork Tunings
const TUNING ForkCommon = {"Common", {{"A4 (440)", 440.00f}}, 1};
const TUNING ForkSarti = {"Sarti's", {{"A4 (436)", 436.00f}}, 1};
const TUNING ForkMid19Century = {"1858", {{"A4 (435)", 435.00f}}, 1};
const TUNING Fork18Century = {"1750-1820", {{"A4 (423.5)", 423.50f}}, 1};
const TUNING ForkVerdi = {"Verdi's ", {{"C4 (256.00)", 256.00f}}, 1};

// Other Tunings
const TUNING ScientificPitch = {
    "Scientific Pitch",
    {{"C0 (16Hz)", 16.0f},
     {"C1 (32Hz)", 32.0f},
     {"C2 (64Hz)", 64.0f},
     {"C3 (128Hz)", 128.0f},
     {"C4 (256Hz)", 256.0f},
     {"C5 (512Hz)", 512.0f},
     {"C6 (1024Hz)", 1024.0f},
     {"C7 (2048Hz)", 2048.0f},
     {"C8 (4096Hz)", 4096.0f},
     {"C9 (8192Hz)", 8192.0f},
     {"C10 (16384Hz)", 16384.0f},
     {"C11 (32768Hz)", 32768.0f}},
    12};

// GUITAR
// 6 strings
const TUNING Guitar6Standard = {
    "Standard",
    {{"String 1", E4},
     {"String 2", B3},
     {"String 3", G3},
     {"String 4", D3},
     {"String 5", A2},
     {"String 6", E2}},
    6};

const TUNING Guitar6DropD = {
    "Drop D",
    {{"String 1", E4},
     {"String 2", B3},
     {"String 3", G3},
     {"String 4", D3},
     {"String 5", A2},
     {"String 6", D2}},
    6};

const TUNING Guitar6D = {
    "Standard D",
    {{"String 1", D4},
     {"String 2", A3},
     {"String 3", F3},
     {"String 4", C3},
     {"String 5", G2},
     {"String 6", D2}},
    6};

const TUNING Guitar6DropC = {
    "Drop C",
    {{"String 1", D4},
     {"String 2", A3},
     {"String 3", F3},
     {"String 4", C3},
     {"String 5", G2},
     {"String 6", C2}},
    6};

// 7 strings
const TUNING Guitar7Standard = {
    "Standard",
    {{"String 1", E4},
     {"String 2", B3},
     {"String 3", G3},
     {"String 4", D3},
     {"String 5", A2},
     {"String 6", E2},
     {"String 7", B1}},
    7};

const TUNING Guitar7DropA = {
    "Standard",
    {{"String 1", E4},
     {"String 2", B3},
     {"String 3", G3},
     {"String 4", D3},
     {"String 5", A2},
     {"String 6", E2},
     {"String 7", A1}},
    7};

// BASS
// 4 strings
const TUNING Bass4Standard = {
    "Standard",
    {{"String 1", G2}, {"String 2", D2}, {"String 3", A1}, {"String 4", E1}},
    4};

const TUNING Bass4Tenor = {
    "Tenor",
    {{"String 1", C3}, {"String 2", G2}, {"String 3", D2}, {"String 4", A1}},
    4};

const TUNING Bass4DropD = {
    "Drop D",
    {{"String 1", G2}, {"String 2", D2}, {"String 3", A1}, {"String 4", D1}},
    4};

const TUNING Bass4D = {
    "D",
    {{"String 1", F2}, {"String 2", C2}, {"String 3", G1}, {"String 4", D1}},
    4};

// 5 strings
const TUNING Bass5Standard = {
    "Standard",
    {{"String 1", G2}, {"String 2", D2}, {"String 3", A1}, {"String 4", E1}, {"String 5", B0}},
    5};

const TUNING Bass5Tenor = {
    "Tenor",
    {{"String 1", C3}, {"String 2", G2}, {"String 3", D2}, {"String 4", A1}, {"String 5", E1}},
    5};
const TUNING Bass5DropA = {
    "Drop A",
    {{"String 1", G2}, {"String 2", D2}, {"String 3", A1}, {"String 4", E1}, {"String 5", A0}},
    5};

// UKULELE
// 4 strings
const TUNING Ukulele4Standard = {
    "Standard",
    {{"String 1", A4}, {"String 2", E4}, {"String 3", C4}, {"String 4", G4}},
    4};

// BANJO
// 5 strings
const TUNING Banjo5Standard = {
    "Standard",
    {{"String 1", D4}, {"String 2", B3}, {"String 3", G3}, {"String 4", D3}, {"String 5", G4}},
    5};

// CIGAR BOX
// 3 strings
const TUNING CigarBox3OpenG = {"Open G", {{"String 1", G4}, {"String 2", D4}, {"String 3", G3}}, 3};

const TUNING CigarBox3OpenD = {
    "Open D",
    {{"String 1", Fs4}, {"String 2", A3}, {"String 3", D3}},
    3};

const TUNING CigarBox3OpenA = {"Open A", {{"String 1", A4}, {"String 2", E4}, {"String 3", A3}}, 3};

// 4 strings
const TUNING CigarBox4OpenG = {
    "Open G",
    {{"String 1", D4}, {"String 2", B3}, {"String 3", G3}, {"String 4", D3}},
    4};

#endif //TUNINGS_H
