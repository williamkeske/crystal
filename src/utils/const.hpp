////////////////////////////////////////////////////////////////////////
// Crystal Server - an opensource roleplaying game
////////////////////////////////////////////////////////////////////////
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
////////////////////////////////////////////////////////////////////////

#pragma once

static constexpr uint32_t MAX_LOOTCHANCE = 100000;
static constexpr uint32_t MAX_STATICWALK = 100;

static constexpr size_t NETWORKMESSAGE_PLAYERNAME_MAXLENGTH = 30;
static constexpr int32_t NETWORKMESSAGE_MAXSIZE = 65500;

static constexpr int32_t INPUTMESSAGE_MAXSIZE = 4096;

static constexpr int32_t CHANNEL_GUILD = 0x00;
static constexpr int32_t CHANNEL_PARTY = 0x01;
static constexpr int32_t CHANNEL_PRIVATE = 0xFFFF;
static constexpr int32_t CHANNEL_DEFAULT = 0xFFFE; // internal usage only, there is no such channel

// This is in miliseconds
static constexpr int32_t EVENT_IMBUEMENT_AND_SERENE_STATUS_INTERVAL = 1000;
static constexpr uint8_t IMBUEMENT_MAX_TIER = 3;

static constexpr int32_t STORAGEVALUE_PODIUM = 30020;
static constexpr int32_t STORAGEVALUE_BESTIARYKILLCOUNT = 61305000; // Can get up to 2000 storages!

// Hazard system storage
static constexpr int32_t STORAGEVALUE_HAZARDCOUNT = 112550;

// Wheel of destiny
static constexpr int32_t STORAGEVALUE_GIFT_OF_LIFE_COOLDOWN_WOD = 43200;

constexpr double SCALING_BASE = 10.0;

static constexpr int32_t SWIMMING_OUTFIT = 267;

// Reserved player storage key ranges;
// [10000000 - 20000000];
static constexpr int32_t PSTRG_RESERVED_RANGE_START = 10000000;
static constexpr int32_t PSTRG_RESERVED_RANGE_SIZE = 10000000;

//[2012 - 2022];
static constexpr int32_t PSTRG_WING_RANGE_START = (PSTRG_RESERVED_RANGE_START + 2012);
static constexpr int32_t PSTRG_WING_RANGE_SIZE = 10;
static constexpr int32_t PSTRG_WING_CURRENTWING = (PSTRG_WING_RANGE_START + 10);

//[2023 - 2033];
static constexpr int32_t PSTRG_EFFECT_RANGE_START = (PSTRG_RESERVED_RANGE_START + 2023);
static constexpr int32_t PSTRG_EFFECT_RANGE_SIZE = 10;
static constexpr int32_t PSTRG_EFFECT_CURRENTEFFECT = (PSTRG_EFFECT_RANGE_START + 10);

//[2034 - 2044];
static constexpr int32_t PSTRG_AURA_RANGE_START = (PSTRG_RESERVED_RANGE_START + 2034);
static constexpr int32_t PSTRG_AURA_RANGE_SIZE = 10;
static constexpr int32_t PSTRG_AURA_CURRENTAURA = (PSTRG_AURA_RANGE_START + 10);

//[2045 - 2055];
static constexpr int32_t PSTRG_SHADER_RANGE_START = (PSTRG_RESERVED_RANGE_START + 2045);
static constexpr int32_t PSTRG_SHADER_RANGE_SIZE = 10;
static constexpr int32_t PSTRG_SHADER_CURRENTSHADER = (PSTRG_SHADER_RANGE_START + 10);

// [3000 - 3500];
static constexpr int32_t PSTRG_FAMILIARS_RANGE_START = (PSTRG_RESERVED_RANGE_START + 3000);
static constexpr int32_t PSTRG_FAMILIARS_RANGE_SIZE = 500;

static constexpr int32_t IMMOVABLE_ACTION_ID = 100;

#define IS_IN_KEYRANGE(key, range) \
	(key >= PSTRG_##range##_START && ((key - PSTRG_##range##_START) <= PSTRG_##range##_SIZE))
